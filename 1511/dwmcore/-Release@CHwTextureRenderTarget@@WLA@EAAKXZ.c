/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800BDED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 176));
}
