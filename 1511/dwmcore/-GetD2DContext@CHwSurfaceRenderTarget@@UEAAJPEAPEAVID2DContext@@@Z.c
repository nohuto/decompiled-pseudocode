/*
 * XREFs of ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18008C6A0
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18002C640 (-GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DContext(CD3DDeviceLevel1 **this, struct ID2DContext **a2)
{
  return CD3DDeviceLevel1::QueryInterface(this[20], &GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b, (void **)a2);
}
