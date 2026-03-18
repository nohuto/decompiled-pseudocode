/*
 * XREFs of UsbhIoctlGetHubCaps @ 0x1C0048204
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B480 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C0047364 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A048 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A218 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004A570 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetHubCaps(struct _DEVICE_OBJECT *a1, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // rbp
  _DWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax
  _QWORD *v13; // r12
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+48h] [rbp-40h]
  char v23; // [rsp+98h] [rbp+10h] BYREF
  int v24; // [rsp+A8h] [rbp+20h] BYREF

  v23 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x13u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  v24 = 271;
  v6 = FdoExt((__int64)a1, (__int64)Irp, a3, a4);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = v6;
  Log((__int64)a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v12 = FdoExt((__int64)a1, v9, v10, v11);
  v13 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v12 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v13 )
  {
    v14 = UsbhAcquireApiLock((__int64)a1, 0xF00D0002, &v23);
    if ( (v14 & 0xC0000000) != 0xC0000000 )
    {
      v14 = UsbhIoctlValidateParameters((_DWORD)a1, 0, 4);
      if ( (v14 & 0xC0000000) != 0xC0000000 )
      {
        if ( (v8[640] & 0x8000) != 0 )
          *(_DWORD *)&MasterIrp->Type |= 1u;
        else
          *(_DWORD *)&MasterIrp->Type &= ~1u;
      }
    }
  }
  else
  {
    v14 = -1073741670;
  }
  Log((__int64)a1, 32, 1768897586, (__int64)Irp, v14);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v21) = v14;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x14u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids,
      v21);
  }
  if ( (v14 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v14) )
  {
    LOBYTE(v22) = 0;
    UsbhException((int)a1, 0, 91, (int)&v24, 4, v14, 0, usbfile_ioctl_c, 573, v22);
  }
  if ( v23 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt((__int64)a1, v15, v16, v17);
  UsbhDecHubBusy((__int64)a1, v18, v13, v19);
  Irp->IoStatus.Status = v14;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v14;
}
