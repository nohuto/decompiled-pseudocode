/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C004695C
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0005A0C (RIMAllocateHidConfigDesc.c)
 *     RIMDeliverConfigRequest @ 0x1C0005B94 (RIMDeliverConfigRequest.c)
 *     RIMReadInput @ 0x1C0006150 (RIMReadInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetDeviceParent @ 0x1C0008CB4 (RIMGetDeviceParent.c)
 *     RIMGetProductString @ 0x1C0009C4C (RIMGetProductString.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0009EAC (RIMGetMaxCountFeatureDetails.c)
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C000ABDC (RIMReleasePointerDeviceInfo.c)
 *     RIMDeviceIoControl @ 0x1C000ED20 (RIMDeviceIoControl.c)
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0010980 (RIMAddNonPnpDeviceOfType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0046860 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C007B4C0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C007B9E0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMConfigurePointerDevice @ 0x1C007BDB4 (RIMConfigurePointerDevice.c)
 *     RIMRemoveInputOfType @ 0x1C007D4D0 (RIMRemoveInputOfType.c)
 *     RIMOnPowerNotification @ 0x1C0085F40 (RIMOnPowerNotification.c)
 *     RIMDoOnPowerNotification @ 0x1C0086068 (RIMDoOnPowerNotification.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086248 (RIMDeliverConfigRequestWithTimeout.c)
 *     rimSignalReadComplete @ 0x1C0086B48 (rimSignalReadComplete.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00872C0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0087980 (RIMRefreshDeviceAttributes.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00C1DA0 (RIMAddInputOfType.c)
 *     RIMAreSiblingDevices @ 0x1C00C1ED0 (RIMAreSiblingDevices.c)
 *     RIMFreeInputBuffer @ 0x1C00C2080 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00C21A0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00C2400 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00C26A0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00C27D0 (RIMGetPhysicalDeviceRect.c)
 *     RIMInjectInput @ 0x1C00C2A80 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00C2CE0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C00C2E30 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C00C3300 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C36E0 (RIMRemoveInjectionDevice.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C00C47F4 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMMarkEndPointerMessageDelivery @ 0x1C00C4F90 (RIMMarkEndPointerMessageDelivery.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00C64DC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     RIMComputePTPCurtainRegions @ 0x1C00CECE8 (RIMComputePTPCurtainRegions.c)
 *     rimFillKeyboardInputData @ 0x1C00D07D8 (rimFillKeyboardInputData.c)
 *     rimProcessHidKeyboardInput @ 0x1C00D0BB0 (rimProcessHidKeyboardInput.c)
 *     rimReportHidKeyboardInputData @ 0x1C00D0D98 (rimReportHidKeyboardInputData.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D28AC (RIMSendPTPLatencyMgtDeviceRequest.c)
 *     rimObsAddInputObserver @ 0x1C00D2D04 (rimObsAddInputObserver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_D(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va, 4LL, 0LL);
}
