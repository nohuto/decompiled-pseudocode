/*
 * XREFs of ?AddRef@CHwndBitmap@@WEI@EAAKXZ @ 0x18009A690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 72));
}
