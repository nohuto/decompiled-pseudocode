/*
 * XREFs of sub_14040A810 @ 0x14040A810
 * Callers:
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     sub_14040A84C @ 0x14040A84C (sub_14040A84C.c)
 */

__int64 __fastcall sub_14040A810(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_14040A84C(a1);
  sub_14040A84C(a1 + 40);
  sub_14040A84C(a1 + 56);
  return sub_14040A84C(a1 + 72);
}
