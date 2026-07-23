/*
 * XREFs of PiCMReturnBasicResultData @ 0x1404DA01C
 * Callers:
 *     PiCMSetObjectProperty @ 0x1404CCC18 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404D9E1C (PiCMValidateDeviceInstance.c)
 *     PiCMCreateObject @ 0x1406469D4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140646B38 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140646F54 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406472C4 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140647448 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1406487A0 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140648964 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648AF8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
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
