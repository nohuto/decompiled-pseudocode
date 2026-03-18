/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0
 * Callers:
 *     RIMRefreshDeviceAttributes @ 0x1C006FF80 (RIMRefreshDeviceAttributes.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0071978 (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMDeviceIoControl @ 0x1C0073240 (RIMDeviceIoControl.c)
 *     rimCreateDev @ 0x1C00765D8 (rimCreateDev.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00854E4 (rimProcessAnyQueuedCompleteFrames.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00ADB60 (NtUserSetFeatureReportResponse.c)
 *     RIMAreSiblingDevices @ 0x1C00C1390 (RIMAreSiblingDevices.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00C1780 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C00C18C0 (RIMGetDeviceProperties.c)
 *     RIMInjectInput @ 0x1C00C1D70 (RIMInjectInput.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C29F0 (RIMRemoveInjectionDevice.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C00C5AF0 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C5D18 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00C6248 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C6438 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C652C (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C6758 (RIMIDEInjectMouseInput.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00C7C44 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C00D1408 (rimObsCheckForExistingDeviceHandle.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00C344C (WPP_RECORDER_SF_qD.c)
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
  if ( v6 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 2 )
    {
      *a4 = Object;
    }
    else
    {
      v8 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      5,
      10,
      (__int64)&WPP_1e49cca26914444bd9be067108396000_Traceguids,
      v5,
      v6);
  }
  return v8;
}
