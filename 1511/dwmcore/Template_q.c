/*
 * XREFs of Template_q @ 0x180111C90
 * Callers:
 *     ?ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z @ 0x1800067F4 (-ProcessOutOfFrameDirectFlipLight@CComposition@@QEAAJIPEA_N0PEAVCOutOfFrameDirectFlipStats@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x18003CD30 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18007F5C0 (-BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008F290 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B5638 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800B6648 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?LogTempHardwareProtectionState@CComposition@@SAXXZ @ 0x180100F20 (-LogTempHardwareProtectionState@CComposition@@SAXXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180110224 (-CheckMultiPlaneOverlaySupport@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverla.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  v4.Ptr = (ULONGLONG)&v5;
  v4.Reserved = 0;
  v4.Size = 4;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 1u, &v4);
}
