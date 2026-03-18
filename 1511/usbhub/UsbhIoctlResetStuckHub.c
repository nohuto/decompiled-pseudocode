/*
 * XREFs of UsbhIoctlResetStuckHub @ 0x1C0049F58
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00473E4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A198 (UsbhIoctlTraceOutput.c)
 *     UsbhReleaseApiLock @ 0x1C004A6C0 (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C004A71C (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlResetStuckHub(__int64 a1, PIRP Irp, __int64 a3)
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
  Log(a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x11u,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids);
  v21 = 275;
  Log(a1, 32, 1768898098, (__int64)Irp, 0LL);
  LOBYTE(v20) = UsbhVerifyCallerIsAdmin();
  v8 = FdoExt(a1, v5, v6, v7);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v9 )
  {
    v10 = UsbhAcquireApiLock(a1, 0xF00D0275, &v19);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      LOBYTE(v18) = 0;
      UsbhException(a1, 0, 132, (int)&v20, 1, v10, 0, usbfile_ioctl_c, 452, v18);
      Irp->IoStatus.Information = 0LL;
    }
  }
  else
  {
    v10 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x12u,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      v17);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
  {
    LOBYTE(v18) = 0;
    UsbhException(a1, 0, 91, (int)&v21, 4, v10, 0, usbfile_ioctl_c, 465, v18);
  }
  if ( v19 )
    UsbhReleaseApiLock(a1, 4027384437LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1, v11, v12, v13);
  UsbhDecHubBusy(a1, v14, v9, v15);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
