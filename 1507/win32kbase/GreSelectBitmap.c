/*
 * XREFs of GreSelectBitmap @ 0x1C000EFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSelectBitmap(HDC a1, HBITMAP a2)
{
  return hbmSelectBitmap(a1, a2, 0, 0);
}
