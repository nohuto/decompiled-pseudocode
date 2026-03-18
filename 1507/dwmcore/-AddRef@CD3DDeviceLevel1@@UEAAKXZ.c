/*
 * XREFs of ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x180019280
 * Callers:
 *     ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800445A0 (-GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?AddRef@CD3DDeviceLevel1@@WBII@EAAKXZ @ 0x18009AEF0 (-AddRef@CD3DDeviceLevel1@@WBII@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceLevel1::AddRef(CD3DDeviceLevel1 *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 100);
}
