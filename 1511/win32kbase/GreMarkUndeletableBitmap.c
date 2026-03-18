/*
 * XREFs of GreMarkUndeletableBitmap @ 0x1C005D9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreMarkUndeletableBitmap(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 5;
  return HmgMarkUndeletable(a1, a2);
}
