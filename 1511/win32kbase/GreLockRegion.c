/*
 * XREFs of GreLockRegion @ 0x1C007B600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreLockRegion(int a1)
{
  return HmgLockEx(a1, 4, 0);
}
