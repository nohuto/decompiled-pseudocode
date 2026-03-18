/*
 * XREFs of ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90
 * Callers:
 *     ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x1800072F0 (-HasDWMClones@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180007398 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x180007444 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ @ 0x18007B894 (-FindOutOfFrameDirectFlipInfo@CRenderTargetManager@@QEAAPEAVCOutOfFrameDirectFlipInfo@@XZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x180095920 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 36) <= 1;
}
