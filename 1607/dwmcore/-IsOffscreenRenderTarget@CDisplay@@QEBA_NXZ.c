/*
 * XREFs of ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18000C768 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUHWND__@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAIPEA_N@Z @ 0x180034420 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAU.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800347F8 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180043E68 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800770E0 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x18017A520 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplay::IsOffscreenRenderTarget(CDisplay *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 220) || *((_DWORD *)this + 54) )
    return 1LL;
  return result;
}
