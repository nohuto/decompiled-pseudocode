/*
 * XREFs of UserIsCurrentProcessDwm @ 0x1C004B5A0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002FC0 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00046B0 (NtDuplicateCompositionInputSink.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplayDevices @ 0x1C00399E0 (DrvEnumDisplayDevices.c)
 *     NtQueryCompositionInputSink @ 0x1C00491A0 (NtQueryCompositionInputSink.c)
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C0049538 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004A498 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C004A950 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004AED0 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004B0F0 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C004B3A8 (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     NtTokenManagerThread @ 0x1C004DD60 (NtTokenManagerThread.c)
 *     GreSfmOpenTokenEvent @ 0x1C004E0D0 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C004E1C0 (GreSfmGetNotificationTokens.c)
 *     NtCompositionInputThread @ 0x1C004E5E0 (NtCompositionInputThread.c)
 *     NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C005D660 (NtGdiDdDDIOpenAdapterFromDeviceName.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006902C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0071430 (CheckDwmProcessSecurityIdentifier.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0075850 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     NtGdiDdDDIOpenAdapterFromLuid @ 0x1C007AC60 (NtGdiDdDDIOpenAdapterFromLuid.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C007B700 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtSetCompositionSurfaceBufferCompositionModeAndOrientation @ 0x1C007CE70 (NtSetCompositionSurfaceBufferCompositionModeAndOrientation.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0080350 (NtDCompositionCreateDwmChannel.c)
 *     NtTokenManagerOpenSectionAndEvents @ 0x1C00805F0 (NtTokenManagerOpenSectionAndEvents.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00812A0 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00C3DE0 (NtGdiDdDDICreateOutputDupl.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C00E3520 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionUpdatePointerCapture @ 0x1C00E3AB0 (NtDCompositionUpdatePointerCapture.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00F28C0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C00F2BA0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C00F2FD0 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C00F3060 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00F3370 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00F3550 (NtSetCompositionSurfaceStatistics.c)
 *     NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C00F4110 (NtTokenManagerConfirmOutstandingAnalogToken.c)
 *     NtTokenManagerGetAnalogExclusiveSurfaceUpdates @ 0x1C00F4150 (NtTokenManagerGetAnalogExclusiveSurfaceUpdates.c)
 *     NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00F4350 (NtTokenManagerGetAnalogExclusiveTokenEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessDwm(__int64 a1)
{
  return PsGetCurrentProcess(a1) == (_QWORD)g_pepDwm;
}
