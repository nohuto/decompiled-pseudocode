/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80
 * Callers:
 *     rimCreateDev @ 0x1C000E640 (rimCreateDev.c)
 *     RIMDeviceIoControl @ 0x1C000FB90 (RIMDeviceIoControl.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0088A20 (RIMRefreshDeviceAttributes.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00BB020 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00BBA90 (NtUserSetFeatureReportResponse.c)
 *     RIMAreSiblingDevices @ 0x1C00CE760 (RIMAreSiblingDevices.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00CEC10 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C00CED50 (RIMGetDeviceProperties.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00CF1B0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C00CF360 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C00CF600 (RIMInjectInput.c)
 *     RIMRemoveInjectionDevice @ 0x1C00D0310 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00D04D8 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C00D60DC (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00D6304 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00D6834 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00D6A04 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00D6AF8 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00D6D2C (RIMIDEInjectMouseInput.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00D81F4 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C00DFD54 (rimObsCheckForExistingDeviceHandle.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00D2CAC (WPP_RECORDER_SF_qD.c)
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
      (__int64)&WPP_54069174be7332be7e52d22d88cbdcb8_Traceguids,
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
