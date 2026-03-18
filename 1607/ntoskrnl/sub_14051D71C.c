/*
 * XREFs of sub_14051D71C @ 0x14051D71C
 * Callers:
 *     sub_1404F587C @ 0x1404F587C (sub_1404F587C.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14051DAC0 (ExpHwidSysVolIfGetDiskInfo.c)
 * Callees:
 *     sub_14051D758 @ 0x14051D758 (sub_14051D758.c)
 */

void *__fastcall sub_14051D71C(char *a1)
{
  ((void (*)(void))sub_14051D758)();
  sub_14051D758(a1 + 40);
  sub_14051D758(a1 + 56);
  sub_14051D758(a1 + 72);
  return memset(a1, 0, 0x58uLL);
}
