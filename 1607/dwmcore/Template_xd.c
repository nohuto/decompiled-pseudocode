/*
 * XREFs of Template_xd @ 0x180106D50
 * Callers:
 *     ?OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z @ 0x18000691C (-OnUp@CManipulationManager@@AEAAXPEAVCInteraction@@IKPEAVCManipulationContext@@_N2@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180006A00 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180010EAC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x18001C920 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x18001CE50 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180078A20 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEAA_NPEAVISwapChainContent@@PEAUtagRECT@@1_N@Z @ 0x180078E38 (-AreSupportedStretchFactors@COverlayContext@@AEAA_NPEAVISwapChainContent@@PEAUtagRECT@@1_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18008F500 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800A1B60 (-RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800A1F60 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 *     ?ExposeVisual@CoRenderHost@@QEAAJIPEAVCVisual@@_N@Z @ 0x180119FD8 (-ExposeVisual@CoRenderHost@@QEAAJIPEAVCVisual@@_N@Z.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18011F440 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xd(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+20h] [rbp-38h] BYREF
  int *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v5.Ptr = (ULONGLONG)&v9;
  v5.Reserved = 0;
  v5.Size = 8;
  v6 = &v10;
  v8 = 0;
  v7 = 4;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 2u, &v5);
}
