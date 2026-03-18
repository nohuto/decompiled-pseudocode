/*
 * XREFs of ?GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180082B00
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@WLA@EAAJPEAPEAVID2DContext@@@Z @ 0x18009B320 (-GetD2DContext@CHwTextureRenderTarget@@WLA@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetD2DContext(CD3DDeviceLevel1 **this, struct ID2DContext **a2)
{
  return CHwSurfaceRenderTarget::GetD2DContext(this, a2);
}
