/*
 * XREFs of PiCMReturnBasicResultData @ 0x1404F7090
 * Callers:
 *     PiCMSetObjectProperty @ 0x1404EAA14 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiCMCreateObject @ 0x1406468F0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140646A54 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140646E70 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140646FBC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406471E0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140647364 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1406486BC (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140648880 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648A14 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x14044DAC0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
