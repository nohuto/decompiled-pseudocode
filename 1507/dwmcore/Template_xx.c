/*
 * XREFs of Template_xx @ 0x1800E218C
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042460 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18005A6A8 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x180062138 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180066DB0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18006C51C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z @ 0x1800E1C88 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18012B2A8 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180139B94 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG Template_xx(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-38h] BYREF
  va_list v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  va_list va1; // [rsp+78h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  va_copy((va_list)v3.Ptr, va);
  v3.Reserved = 0;
  v3.Size = 8;
  va_copy(v4, va1);
  v6 = 0;
  v5 = 8;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 2u, &v3);
}
