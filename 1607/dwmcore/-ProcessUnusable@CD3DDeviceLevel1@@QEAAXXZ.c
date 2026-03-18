/*
 * XREFs of ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18008F500 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?RemoveDevicesNotInCurrentEnumeration@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA2E8 (-RemoveDevicesNotInCurrentEnumeration@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180172988 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18007E1B8 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180080190 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18009F3D0 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessUnusable(CD3DDeviceLevel1 *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  unsigned int v4; // edx

  v1 = *((_BYTE *)this + 1073) == 0;
  *((_DWORD *)this + 206) = -2003304307;
  if ( v1 )
  {
    *((_BYTE *)this + 1073) = 1;
    v3 = *((_QWORD *)this + 53);
    if ( v3 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 8LL))(v3, (char *)this + 408);
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    CD2DContext::DestroyDeviceResources(this, v4);
    CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 55);
  }
}
