/*
 * XREFs of GreLockRegion @ 0x1C0081140
 * Callers:
 *     <none>
 * Callees:
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 */

_BOOL8 __fastcall GreLockRegion(unsigned int a1)
{
  return HmgLockEx(a1, 4, 0) != 0;
}
