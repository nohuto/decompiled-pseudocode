/*
 * XREFs of sub_180024E78 @ 0x180024E78
 * Callers:
 *     sub_180024628 @ 0x180024628 (sub_180024628.c)
 *     sub_1800252D8 @ 0x1800252D8 (sub_1800252D8.c)
 * Callees:
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void *__fastcall sub_180024E78(void *a1, int a2, const void *a3)
{
  memcpy(a1, a3, 8LL * a2);
  return a1;
}
