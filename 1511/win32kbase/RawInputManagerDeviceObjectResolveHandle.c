/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70
 * Callers:
 *     RIMDeviceIoControl @ 0x1C000ED20 (RIMDeviceIoControl.c)
 *     rimCreateDev @ 0x1C0010D6C (rimCreateDev.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C007DF30 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0087980 (RIMRefreshDeviceAttributes.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00B12F0 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00B1CA0 (NtUserSetFeatureReportResponse.c)
 *     RIMAreSiblingDevices @ 0x1C00C1ED0 (RIMAreSiblingDevices.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00C22C0 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C00C2400 (RIMGetDeviceProperties.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00C27D0 (RIMGetPhysicalDeviceRect.c)
 *     RIMInjectInput @ 0x1C00C2A80 (RIMInjectInput.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C36E0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00C3878 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C00C69DC (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C6C04 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00C7134 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C730C (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C7400 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C762C (RIMIDEInjectMouseInput.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C8B40 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C00D2F54 (rimObsCheckForExistingDeviceHandle.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00C427C (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  char v5; // si
  NTSTATUS v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v5 = (char)a1;
  v6 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      5,
      10,
      (__int64)&WPP_f955ea7420869dadb980009f3c647efa_Traceguids,
      v5,
      v6);
  }
  else if ( *((_DWORD *)Object + 1) == 2 )
  {
    *a4 = Object;
  }
  else
  {
    v8 = -1073741788;
    ObfDereferenceObject(Object);
  }
  return v8;
}
