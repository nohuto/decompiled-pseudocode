/*
 * XREFs of ?AddRef@CHwndBitmap@@WJA@EAAKXZ @ 0x1800C03B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndBitmap::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 144));
}
