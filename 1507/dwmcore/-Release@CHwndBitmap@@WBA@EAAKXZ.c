/*
 * XREFs of ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x18009A960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 16));
}
