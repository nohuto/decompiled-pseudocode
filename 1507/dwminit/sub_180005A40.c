/*
 * XREFs of sub_180005A40 @ 0x180005A40
 * Callers:
 *     sub_180002608 @ 0x180002608 (sub_180002608.c)
 *     sub_180002764 @ 0x180002764 (sub_180002764.c)
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_1800057F0 @ 0x1800057F0 (sub_1800057F0.c)
 *     sub_180006468 @ 0x180006468 (sub_180006468.c)
 */

__int64 *sub_180005A40()
{
  if ( (dword_18000EFAC & 1) == 0 )
  {
    dword_18000EFAC |= 1u;
    sub_1800057F0();
    sub_180006468(sub_1800079A0);
  }
  return &qword_18000EFB0;
}
