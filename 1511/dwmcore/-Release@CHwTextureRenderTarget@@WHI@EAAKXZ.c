/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WHI@EAAKXZ @ 0x1800BDEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 120));
}
