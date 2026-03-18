/*
 * XREFs of UsbhSyncResumePort @ 0x1C002883C
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0022BF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028704 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhCycleDevicePort @ 0x1C0043154 (UsbhCycleDevicePort.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhWaitForPortResume @ 0x1C0028934 (UsbhWaitForPortResume.c)
 *     UsbhPCE_Enable @ 0x1C00289D8 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0028A84 (UsbhPCE_Resume.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncResumePort(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 PortData; // rax
  __int64 v7; // rbp
  struct _KEVENT *v8; // rbx
  int v9; // ebx
  int v11; // [rsp+48h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      79,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        80,
        (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
        a3);
  }
  PortData = UsbhGetPortData((__int64)a1, a3);
  v7 = PortData;
  if ( PortData )
  {
    v8 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_Resume(a1, a2, a3);
    UsbhPCE_Enable(a1, a2, a3);
    KeSetEvent(v8, 0, 0);
    Log((__int64)a1, 16, 1347573624, 0LL, *(unsigned __int16 *)(v7 + 4));
    v9 = UsbhWaitForPortResume(a1);
    if ( v9 < 0 )
    {
      LOBYTE(v11) = 0;
      UsbhException((int)a1, a3, 134, 0, 0, v9, 0, usbfile_bus_c, 6994, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
