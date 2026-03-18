/*
 * XREFs of ?QueryInterface@CHwStereoFullScreenRenderTarget@@WBHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 368), a2, a3);
}
