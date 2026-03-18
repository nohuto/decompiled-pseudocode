/*
 * XREFs of ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180073B70
 * Callers:
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x18000D18C (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18003C134 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800459A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?CheckDeviceState@CRenderTargetManager@@QEAAJXZ @ 0x180073820 (-CheckDeviceState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 37) <= 1;
}
