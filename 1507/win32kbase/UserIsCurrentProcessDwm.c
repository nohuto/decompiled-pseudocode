/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C000EA40
 * Callers:
 *     NtDuplicateCompositionInputSink @ 0x1C0003130 (NtDuplicateCompositionInputSink.c)
 *     NtTokenManagerThread @ 0x1C000E260 (NtTokenManagerThread.c)
 *     GreSfmOpenTokenEvent @ 0x1C000E5D0 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C000E6C0 (GreSfmGetNotificationTokens.c)
 *     NtCompositionInputThread @ 0x1C00135B0 (NtCompositionInputThread.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0014160 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtSetCompositionSurfaceBufferCompositionMode @ 0x1C0015EA0 (NtSetCompositionSurfaceBufferCompositionMode.c)
 *     NtQueryCompositionInputSink @ 0x1C001DA60 (NtQueryCompositionInputSink.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C001F0AC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C001F740 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C001F960 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C001FAD0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z @ 0x1C001FD8C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z.c)
 *     NtUpdateInputSinkTransforms @ 0x1C00200A0 (NtUpdateInputSinkTransforms.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0024B14 (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00499B0 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     NtDCompositionSignalGpuFence @ 0x1C006B170 (NtDCompositionSignalGpuFence.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007F8C0 (CheckDwmProcessSecurityIdentifier.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0080790 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0082090 (NtDCompositionCreateDwmChannel.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C0082B60 (NtTokenManagerOpenSectionAndEvents.c)
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00B6210 (NtGdiDdDDICreateOutputDupl.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C00D3D10 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C00D4640 (NtDCompositionUpdatePointerCapture.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00DEAB0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00DEDB0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00DEF60 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00DEFF0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00DF1B0 (NtSetCompositionSurfaceOutOfFrameDirectFlipNotification.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00DF270 (NtSetCompositionSurfaceStatistics.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00DFAD0 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00DFB50 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00DFD50 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00DFE10 (NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsCurrentProcessDwm()
{
  return PsGetCurrentProcess() == (_QWORD)g_pepDwm;
}
