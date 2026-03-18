/*
 * XREFs of ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180045330 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?RemoveUnusableResources@CHwDisplayRenderTarget@@UEBAXXZ @ 0x18008B0C0 (-RemoveUnusableResources@CHwDisplayRenderTarget@@UEBAXXZ.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18008F758 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ @ 0x180090CB4 (-MarkAllDevicesUnusable@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEA_NPEAURenderTargetPresentParameters@@@Z @ 0x1800DD61C (-PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIP.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURenderTargetPresentParameters@@@Z @ 0x1800DD7BC (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEAURende.c)
 * Callees:
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18008AC0C (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18008B0F0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18008B754 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z @ 0x18008BB7C (-RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ProcessUnusable(CD3DDeviceLevel1 *this, char a2)
{
  bool v2; // zf
  __int64 v4; // r14

  v2 = *((_BYTE *)this + 833) == 0;
  *((_DWORD *)this + 209) = -2003304307;
  if ( v2 && (!a2 || *((_DWORD *)this + 129) == GetCurrentThreadId()) )
  {
    v4 = *((_QWORD *)this + 51);
    *((_BYTE *)this + 833) = 1;
    if ( v4 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 8LL))(v4, (char *)this + 392);
    CD3DDeviceTable::RemoveDeviceFromTable((CD3DDeviceTable *)&g_deviceTable, *((struct ID3D11Device1 **)this + 68));
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(this);
    CD2DContext::DestroyDeviceResources(this);
    CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 56);
  }
}
