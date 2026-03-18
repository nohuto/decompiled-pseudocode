/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x18009B3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 184));
}
