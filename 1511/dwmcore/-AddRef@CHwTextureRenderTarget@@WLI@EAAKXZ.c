/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800BDF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 184));
}
