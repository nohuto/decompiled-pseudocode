/*
 * XREFs of ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570
 * Callers:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0003278 (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00032D4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C0047C9C (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004CF20 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C004D140 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004D2B0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtSetCompositionSurfaceBufferCompositionModeAndOrientation @ 0x1C00501F0 (NtSetCompositionSurfaceBufferCompositionModeAndOrientation.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0071220 (NtQueryCompositionSurfaceStatistics.c)
 *     NtBindCompositionSurface @ 0x1C00720B0 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C0073280 (NtQueryCompositionSurfaceBinding.c)
 *     NtUnBindCompositionSurface @ 0x1C0075E50 (NtUnBindCompositionSurface.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00E07A4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00E0880 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00E0BC0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00E0D70 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00E0E00 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00E0FE0 (NtSetCompositionSurfaceOutOfFrameDirectFlipNotification.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00E10A0 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CInputSink::UnlockAndRelease(CInputSink *this)
{
  CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  return ObfDereferenceObject((char *)this - 24) == 0;
}
