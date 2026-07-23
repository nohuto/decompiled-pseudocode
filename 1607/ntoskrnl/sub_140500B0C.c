/*
 * XREFs of sub_140500B0C @ 0x140500B0C
 * Callers:
 *     sub_1404D8808 @ 0x1404D8808 (sub_1404D8808.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140500B70 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     sub_140500B48 @ 0x140500B48 (sub_140500B48.c)
 */

void *__fastcall sub_140500B0C(char *a1)
{
  ((void (*)(void))sub_140500B48)();
  sub_140500B48(a1 + 40);
  sub_140500B48(a1 + 56);
  sub_140500B48(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
