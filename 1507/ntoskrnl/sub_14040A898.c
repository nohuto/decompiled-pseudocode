/*
 * XREFs of sub_14040A898 @ 0x14040A898
 * Callers:
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 * Callees:
 *     sub_14040A8D4 @ 0x14040A8D4 (sub_14040A8D4.c)
 */

void *__fastcall sub_14040A898(char *a1)
{
  ((void (*)(void))sub_14040A8D4)();
  sub_14040A8D4(a1 + 40);
  sub_14040A8D4(a1 + 56);
  sub_14040A8D4(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
