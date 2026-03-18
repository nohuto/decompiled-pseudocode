/*
 * XREFs of ?AddRef@CHwndBitmap@@WEI@EAAKXZ @ 0x1800BD320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndBitmap::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 72));
}
