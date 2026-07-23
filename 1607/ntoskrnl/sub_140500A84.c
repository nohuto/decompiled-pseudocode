/*
 * XREFs of sub_140500A84 @ 0x140500A84
 * Callers:
 *     sub_1404D8808 @ 0x1404D8808 (sub_1404D8808.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140500B70 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     sub_140500AC0 @ 0x140500AC0 (sub_140500AC0.c)
 */

__int64 __fastcall sub_140500A84(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_140500AC0(a1);
  sub_140500AC0(a1 + 40);
  sub_140500AC0(a1 + 56);
  return sub_140500AC0(a1 + 72);
}
