/*
 * XREFs of ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0
 * Callers:
 *     ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1C000340C (-UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C001F1A0 (NtQueryCompositionSurfaceStatistics.c)
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C00489EC (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0048A40 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C004A950 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtBindCompositionSurface @ 0x1C004AAD0 (NtBindCompositionSurface.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004AED0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004B0F0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C00780E0 (NtQueryCompositionSurfaceBinding.c)
 *     NtUnBindCompositionSurface @ 0x1C0079E70 (NtUnBindCompositionSurface.c)
 *     NtSetCompositionSurfaceBufferCompositionModeAndOrientation @ 0x1C007CE70 (NtSetCompositionSurfaceBufferCompositionModeAndOrientation.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00F27E4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00F28C0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00F2BA0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C00F2D50 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00F2FD0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C00F3060 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceHDRMetaData @ 0x1C00F3180 (NtSetCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00F3370 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00F3550 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CInputSink::UnlockAndRelease(CInputSink *this)
{
  CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  return ObfDereferenceObject((char *)this - 24) == 0;
}
