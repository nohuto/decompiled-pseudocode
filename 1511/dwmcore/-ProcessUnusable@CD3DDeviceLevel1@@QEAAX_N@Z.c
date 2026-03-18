/*
 * XREFs of ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C
 * Callers:
 *     ?PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEA_NPEAURenderTargetPresentParameters@@@Z @ 0x180022AD4 (-PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIP.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURenderTargetPresentParameters@@@Z @ 0x180022C74 (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURende.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180022FC4 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ @ 0x1800719E4 (-MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180081370 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?RemoveUnusableResources@CHwDisplayRenderTarget@@UEBAXXZ @ 0x180081780 (-RemoveUnusableResources@CHwDisplayRenderTarget@@UEBAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180022020 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180024450 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180028198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z @ 0x18006A88C (-RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessUnusable(CD3DDeviceLevel1 *this, char a2)
{
  bool v2; // zf
  __int64 v4; // r14
  unsigned int v5; // edx

  v2 = *((_BYTE *)this + 1034) == 0;
  *((_DWORD *)this + 200) = -2003304307;
  if ( v2 && (!a2 || *((_DWORD *)this + 127) == GetCurrentThreadId()) )
  {
    v4 = *((_QWORD *)this + 50);
    *((_BYTE *)this + 1034) = 1;
    if ( v4 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 8LL))(v4, (char *)this + 384);
    CD3DDeviceTable::RemoveDeviceFromTable((CD3DDeviceTable *)&g_deviceTable, *((struct ID3D11Device1 **)this + 69));
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    CD2DContext::DestroyDeviceResources(this, v5);
    CD3DResourceManager::DestroyAllResources((CD3DDeviceLevel1 *)((char *)this + 848));
  }
}
