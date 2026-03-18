/*
 * XREFs of UsbhIoctlCyclePort @ 0x1C0047CC4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhUpdateUxdSettings @ 0x1C0007FDC (UsbhUpdateUxdSettings.c)
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhCycleDevicePort @ 0x1C0043154 (UsbhCycleDevicePort.c)
 *     UsbhAcquireApiLock @ 0x1C00477D4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A598 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A768 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004AAC0 (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C004AB1C (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlCyclePort(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  int v4; // ebp
  _IRP *MasterIrp; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  _QWORD *v10; // r12
  int v11; // ebx
  struct _DEVICE_OBJECT *v12; // r14
  char IsAdmin; // bl
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+48h] [rbp-50h]
  int v24; // [rsp+50h] [rbp-48h] BYREF
  int v25; // [rsp+54h] [rbp-44h] BYREF
  char v26; // [rsp+A8h] [rbp+10h] BYREF
  char v27; // [rsp+B8h] [rbp+20h] BYREF

  v27 = 0;
  v24 = 0;
  v26 = 0;
  v4 = 0;
  Log((__int64)a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xFu,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v25 = 7;
  Log((__int64)a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v9 = FdoExt((__int64)a1, v6, v7, v8);
  v10 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v9 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v10 )
  {
    v11 = UsbhAcquireApiLock((__int64)a1, 0xF00D0002, &v27);
    if ( (v11 & 0xC0000000) != 0xC0000000 )
    {
      v11 = UsbhIoctlValidateParameters((_DWORD)a1, 4, 8);
      if ( (v11 & 0xC0000000) != 0xC0000000 )
      {
        v12 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)a1, MasterIrp->Type, (__int64)Irp, 0x496F3034u);
        if ( v12 )
        {
          IsAdmin = UsbhVerifyCallerIsAdmin();
          UsbhUpdateUxdSettings((__int64)a1, v12, 1, &v26);
          if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) || v26 || IsAdmin )
          {
            v15 = UsbhCycleDevicePort(a1, (__int64)v12, &v24, v14);
            v4 = v24;
            v11 = v15;
          }
          else
          {
            v11 = -1073741637;
          }
          UsbhUnlatchPdo((__int64)a1, (__int64)v12, (__int64)Irp, 0x496F3034u);
        }
        else
        {
          Log((__int64)a1, 32, 1733845872, *(unsigned int *)&MasterIrp->Type, (__int64)MasterIrp);
          v11 = -1073741667;
          v4 = -1073713152;
        }
        Irp->IoStatus.Information = 8LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = v4;
      }
    }
  }
  else
  {
    v11 = -1073741670;
  }
  Log((__int64)a1, 32, 1768897586, (__int64)Irp, v11);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v22) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x10u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v22);
  }
  if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
  {
    LOBYTE(v23) = 0;
    UsbhException((int)a1, 0, 91, (int)&v25, 4, v11, 0, usbfile_ioctl_c, 384, v23);
  }
  if ( v27 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt((__int64)a1, v16, v17, v18);
  UsbhDecHubBusy((__int64)a1, v19, v10, v20);
  Irp->IoStatus.Status = v11;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v11;
}
