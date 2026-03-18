/*
 * XREFs of CmpProtectPool @ 0x14001B388
 * Callers:
 *     HvpFreeBin @ 0x1403D82E0 (HvpFreeBin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2)
{
  return ExProtectPool(a1, a2, 4LL);
}
