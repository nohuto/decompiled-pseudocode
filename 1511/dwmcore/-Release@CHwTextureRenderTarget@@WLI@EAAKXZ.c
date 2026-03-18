/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800BE0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 184));
}
