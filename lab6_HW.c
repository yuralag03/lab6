#include <locale.h>
#include <stdio.h>

int main() {

	setlocale(LC_ALL, "");

	float x, y;

	printf("Введите x и y: ");
	scanf("%f %f", &x, &y);

	if (1 <= x <= 7) {
		if (1 <= y <= 7) {
			printf("%.2f и %.2f входят в область", x, y);
		}
	}
	else printf("%f и %f не входят в область", x, y);
}