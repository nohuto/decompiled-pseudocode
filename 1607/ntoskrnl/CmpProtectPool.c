/*
 * XREFs of CmpProtectPool @ 0x1400F0310
 * Callers:
 *     HvpFreeBin @ 0x14051450C (HvpFreeBin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4u);
}
