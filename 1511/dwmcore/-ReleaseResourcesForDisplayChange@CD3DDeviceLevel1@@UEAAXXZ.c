/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180024450
 * Callers:
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEA_NPEAURenderTargetPresentParameters@@@Z @ 0x180022AD4 (-PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIP.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180144B30 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x180020B70 (-ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800227F4 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(CD3DDeviceLevel1 *this)
{
  unsigned int v2; // edx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap(this);
  CD2DContext::ReleaseResourcesForDisplayChange(this, v2);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 64))(
         *((_QWORD *)this + 64),
         &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
         &v3) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 136LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
