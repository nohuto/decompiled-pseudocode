/*
 * XREFs of sub_14051D694 @ 0x14051D694
 * Callers:
 *     sub_1404F587C @ 0x1404F587C (sub_1404F587C.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14051DAC0 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     sub_14051D6D0 @ 0x14051D6D0 (sub_14051D6D0.c)
 */

__int64 __fastcall sub_14051D694(char *a1)
{
  memset(a1, 0, 0x58uLL);
  sub_14051D6D0(a1);
  sub_14051D6D0(a1 + 40);
  sub_14051D6D0(a1 + 56);
  return sub_14051D6D0(a1 + 72);
}
