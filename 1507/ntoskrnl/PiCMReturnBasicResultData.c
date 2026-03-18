/*
 * XREFs of PiCMReturnBasicResultData @ 0x1404DD148
 * Callers:
 *     PiCMSetObjectProperty @ 0x1404DA470 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14058C0C0 (PiCMSetRegistryProperty.c)
 *     PiCMCreateObject @ 0x140692170 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406922D4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140692750 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x14069289C (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140692AC0 (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x1406936F4 (PiCMSetDeviceProblem.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406937D4 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
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
