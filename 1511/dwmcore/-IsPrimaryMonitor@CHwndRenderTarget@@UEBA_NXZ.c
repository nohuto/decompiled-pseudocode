/*
 * XREFs of ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18007BAA0
 * Callers:
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180074CB0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180090820 (-WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndRenderTarget::IsPrimaryMonitor(CHwndRenderTarget *this)
{
  return *(_WORD *)(*((_QWORD *)this + 10) + 299LL) != 0;
}
