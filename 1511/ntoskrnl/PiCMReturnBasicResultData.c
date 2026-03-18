/*
 * XREFs of PiCMReturnBasicResultData @ 0x14045BD10
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14045BB10 (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x1404E5A40 (PiCMSetObjectProperty.c)
 *     PiCMCreateObject @ 0x1406123AC (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140612510 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x14061292C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140612A78 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140612C9C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140612E20 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x140613F24 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1406140E8 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14061426C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
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
