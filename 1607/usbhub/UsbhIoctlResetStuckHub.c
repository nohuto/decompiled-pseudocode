/*
 * XREFs of UsbhIoctlResetStuckHub @ 0x1C004A358
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00477D4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A598 (UsbhIoctlTraceOutput.c)
 *     UsbhReleaseApiLock @ 0x1C004AAC0 (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C004AB1C (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlResetStuckHub(struct _DEVICE_OBJECT *a1, PIRP Irp, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  _QWORD *v9; // rbp
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+48h] [rbp-30h]
  char v19; // [rsp+88h] [rbp+10h] BYREF
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  int v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = a3;
  v19 = 0;
  LOBYTE(v20) = 0;
  Log((__int64)a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x11u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  v21 = 275;
  Log((__int64)a1, 32, 1768898098, (__int64)Irp, 0LL);
  LOBYTE(v20) = UsbhVerifyCallerIsAdmin();
  v8 = FdoExt((__int64)a1, v5, v6, v7);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v9 )
  {
    v10 = UsbhAcquireApiLock((__int64)a1, 0xF00D0275, &v19);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      LOBYTE(v18) = 0;
      UsbhException((int)a1, 0, 132, (int)&v20, 1, v10, 0, usbfile_ioctl_c, 452, v18);
      Irp->IoStatus.Information = 0LL;
    }
  }
  else
  {
    v10 = -1073741670;
  }
  Log((__int64)a1, 32, 1768897586, (__int64)Irp, v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x12u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v17);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
  {
    LOBYTE(v18) = 0;
    UsbhException((int)a1, 0, 91, (int)&v21, 4, v10, 0, usbfile_ioctl_c, 465, v18);
  }
  if ( v19 )
    UsbhReleaseApiLock(a1, 4027384437LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt((__int64)a1, v11, v12, v13);
  UsbhDecHubBusy((__int64)a1, v14, v9, v15);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
