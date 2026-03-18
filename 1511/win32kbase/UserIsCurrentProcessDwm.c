/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C004D740
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C00030E0 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0004D40 (NtDuplicateCompositionInputSink.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00117E0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     DrvEnumDisplayDevices @ 0x1C001F8A0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0020430 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C003E0C0 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     NtQueryCompositionInputSink @ 0x1C004B4F0 (NtQueryCompositionInputSink.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C004BCA8 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004CA04 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004CF20 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C004D140 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004D2B0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z @ 0x1C004D56C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z.c)
 *     NtTokenManagerThread @ 0x1C004E290 (NtTokenManagerThread.c)
 *     GreSfmOpenTokenEvent @ 0x1C004E600 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C004E6F0 (GreSfmGetNotificationTokens.c)
 *     NtCompositionInputThread @ 0x1C004FD40 (NtCompositionInputThread.c)
 *     NtSetCompositionSurfaceBufferCompositionModeAndOrientation @ 0x1C00501F0 (NtSetCompositionSurfaceBufferCompositionModeAndOrientation.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0070EB0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C00775C0 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     NtGdiDdDDIOpenAdapterFromLuid @ 0x1C0078610 (NtGdiDdDDIOpenAdapterFromLuid.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C007BFD0 (NtDCompositionCreateDwmChannel.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C007CCD0 (NtTokenManagerOpenSectionAndEvents.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007FE80 (CheckDwmProcessSecurityIdentifier.c)
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00B8A00 (NtGdiDdDDICreateOutputDupl.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C00D5C20 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C00D6330 (NtDCompositionUpdatePointerCapture.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00E0880 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00E0BC0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00E0D70 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00E0E00 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00E0FE0 (NtSetCompositionSurfaceOutOfFrameDirectFlipNotification.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00E10A0 (NtSetCompositionSurfaceStatistics.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00E1A20 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00E1AA0 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00E1CA0 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 *     NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates @ 0x1C00E1D60 (NtTokenManagerGetOutOfFrameDirectFlipSurfaceUpdates.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1, __int64 a2)
{
  return PsGetCurrentProcess(a1, a2) == (_QWORD)g_pepDwm;
}
