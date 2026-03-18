/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WHI@EAAKXZ @ 0x18009B3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 120));
}
