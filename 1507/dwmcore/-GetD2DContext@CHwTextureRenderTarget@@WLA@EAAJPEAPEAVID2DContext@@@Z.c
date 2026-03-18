/*
 * XREFs of ?GetD2DContext@CHwTextureRenderTarget@@WLA@EAAJPEAPEAVID2DContext@@@Z @ 0x18009B320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetD2DContext(__int64 a1, struct ID2DContext **a2)
{
  return CHwTextureRenderTarget::GetD2DContext((CD3DDeviceLevel1 **)(a1 - 176), a2);
}
