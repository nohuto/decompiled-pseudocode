/*
 * XREFs of Template_xx @ 0x180100478
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18000414C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z @ 0x1800059F4 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z.c)
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180072F94 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18009DFE8 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800A55F8 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800A7774 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A65C (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
