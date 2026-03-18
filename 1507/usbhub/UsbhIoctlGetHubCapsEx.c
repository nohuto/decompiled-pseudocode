/*
 * XREFs of UsbhIoctlGetHubCapsEx @ 0x1C004844C
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B480 (UsbhFdoDeviceControl.c)
 * Callees:
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

__int64 __fastcall UsbhIoctlGetHubCapsEx(__int64 a1, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // rbx
  _DWORD *v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // r15d
  int v11; // ecx
  __int64 v13; // [rsp+28h] [rbp-60h]
  int v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A8h] [rbp+20h] BYREF

  v15 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x15u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  v16 = 276;
  v6 = FdoExt(a1, (__int64)Irp, a3, a4);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = v6;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x16u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  v9 = UsbhAcquireApiLock(a1, 0xF00D0012, &v15);
  v10 = v9 >> 30;
  if ( v9 >> 30 != 3 )
  {
    v9 = UsbhIoctlValidateParameters(a1, 0, 4);
    v10 = v9 >> 30;
    if ( v9 >> 30 != 3 )
    {
      *(_DWORD *)&MasterIrp->Type = 0;
      *(_DWORD *)&MasterIrp->Type = (v8[640] & 0x8000) != 0;
      if ( (v8[640] & 0x80u) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 8u;
      if ( (*((_BYTE *)v8 + 2562) & 1) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 4u;
      v11 = v8[640];
      if ( (v11 & 0x8001) == 0x8001 || (v11 & 0x40) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 2u;
      if ( (v8[640] & 0x80000) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 0x20u;
      if ( (v8[640] & 1) != 0 )
        *(_DWORD *)&MasterIrp->Type |= 0x10u;
      Irp->IoStatus.Information = 4LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, (int)v9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x17u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids,
      v13);
  }
  if ( v10 == 3 && !Usb_Disconnected(v9) )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, 0, 91, (int)&v16, 4, v9, 0, usbfile_ioctl_c, 700, v14);
  }
  if ( v15 )
    UsbhReleaseApiLock(a1, 4027383826LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  return v9;
}
