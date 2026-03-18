/*
 * XREFs of GreSelectBitmap @ 0x1C00768B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HBITMAP __fastcall GreSelectBitmap(HDC a1, HBITMAP a2)
{
  return hbmSelectBitmap(a1, a2, 0, 0);
}
