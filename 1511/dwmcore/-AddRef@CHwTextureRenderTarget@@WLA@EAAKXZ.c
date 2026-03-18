/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800BDF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 176));
}
