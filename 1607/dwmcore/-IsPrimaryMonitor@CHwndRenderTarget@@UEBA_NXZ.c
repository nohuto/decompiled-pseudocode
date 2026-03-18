/*
 * XREFs of ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180073B80
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800459A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B90 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800767D0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndRenderTarget::IsPrimaryMonitor(CHwndRenderTarget *this)
{
  return *(_WORD *)(*((_QWORD *)this + 19) + 299LL) != 0;
}
