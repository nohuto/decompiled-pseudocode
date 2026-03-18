/*
 * XREFs of UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048EB4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00477D4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A598 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A768 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004AAC0 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionAttributes(struct _DEVICE_OBJECT *a1, PIRP Irp, __int64 a3)
{
  _IRP *MasterIrp; // r14
  size_t v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  _QWORD *v12; // r12
  int v13; // ebx
  __int64 PortData; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v21; // [rsp+28h] [rbp-60h]
  int v22; // [rsp+48h] [rbp-40h]
  char v23; // [rsp+98h] [rbp+10h] BYREF
  int v24; // [rsp+A0h] [rbp+18h] BYREF

  v23 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x26u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v24 = 272;
  Log((__int64)a1, 32, 1768898145, (__int64)Irp, (__int64)MasterIrp);
  v11 = FdoExt((__int64)a1, v8, v9, v10);
  v12 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v11 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v12 )
  {
    v13 = UsbhAcquireApiLock((__int64)a1, 0xF00D000A, &v23);
    if ( (v13 & 0xC0000000) != 0xC0000000 )
    {
      v13 = UsbhIoctlValidateParameters((_DWORD)a1, 4, 12);
      if ( (v13 & 0xC0000000) == 0xC0000000 )
      {
        v13 = -1073741811;
      }
      else
      {
        PortData = UsbhGetPortData((__int64)a1, MasterIrp->Type);
        memset(MasterIrp, 0, v7);
        if ( PortData )
        {
          v13 = 0;
          *(_DWORD *)&MasterIrp->Type = *(unsigned __int16 *)(PortData + 4);
          *(_QWORD *)(&MasterIrp->Size + 1) = *(unsigned int *)(PortData + 428);
          Irp->IoStatus.Information = 12LL;
        }
      }
    }
  }
  else
  {
    v13 = -1073741670;
  }
  Log((__int64)a1, 32, 1768897633, (__int64)Irp, v13);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v21) = v13;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x27u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v21);
  }
  if ( (v13 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v13) )
  {
    LOBYTE(v22) = 0;
    UsbhException((int)a1, 0, 91, (int)&v24, 4, v13, 0, usbfile_ioctl_c, 1852, v22);
  }
  if ( v23 )
    UsbhReleaseApiLock(a1, 4027383818LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt((__int64)a1, v15, v16, v17);
  UsbhDecHubBusy((__int64)a1, v18, v12, v19);
  Irp->IoStatus.Status = v13;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v13;
}
