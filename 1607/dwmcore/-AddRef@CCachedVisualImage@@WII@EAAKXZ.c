/*
 * XREFs of ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800C0630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCachedVisualImage::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 136));
}
