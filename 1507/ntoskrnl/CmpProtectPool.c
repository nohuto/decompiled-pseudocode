/*
 * XREFs of CmpProtectPool @ 0x1400628E0
 * Callers:
 *     HvpFreeBin @ 0x1404A086C (HvpFreeBin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPool(a1, a2, 4u);
}
