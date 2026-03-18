/*
 * XREFs of UsbhIoctlGetNodeInformation @ 0x1C0049DE8
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
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

__int64 __fastcall UsbhIoctlGetNodeInformation(struct _DEVICE_OBJECT *a1, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  _DWORD *v8; // r15
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax
  _QWORD *v14; // r12
  int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+48h] [rbp-40h]
  char v25; // [rsp+98h] [rbp+10h] BYREF
  int v26; // [rsp+A0h] [rbp+18h] BYREF

  v25 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x38u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  v26 = 258;
  v6 = FdoExt((__int64)a1, (__int64)Irp, a3, a4);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = v6;
  Log((__int64)a1, 32, 1768898102, (__int64)Irp, (__int64)MasterIrp);
  memset(MasterIrp, 0, v9);
  v13 = FdoExt((__int64)a1, v10, v11, v12);
  v14 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v13 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v14 )
  {
    v15 = UsbhAcquireApiLock((__int64)a1, 0xF00D0006, &v25);
    if ( (v15 & 0xC0000000) != 0xC0000000 )
    {
      v15 = UsbhIoctlValidateParameters((_DWORD)a1, 0, 76);
      if ( (v15 & 0xC0000000) != 0xC0000000 )
      {
        Log((__int64)a1, 32, 1768896100, (__int64)(v8 + 734), *((unsigned __int8 *)v8 + 2938));
        *(_DWORD *)&MasterIrp->Type = 0;
        v15 = 0;
        *(_OWORD *)(&MasterIrp->Size + 1) = *(_OWORD *)v16;
        *(_OWORD *)(&MasterIrp->Flags + 1) = *(_OWORD *)(v16 + 16);
        *(_LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 4) = *(_LIST_ENTRY *)(v16 + 32);
        *(_IO_STATUS_BLOCK *)((char *)&MasterIrp->IoStatus + 4) = *(_IO_STATUS_BLOCK *)(v16 + 48);
        *(_DWORD *)&MasterIrp->Cancel = *(_DWORD *)(v16 + 64);
        LOWORD(MasterIrp->UserIosb) = *(_WORD *)(v16 + 68);
        BYTE2(MasterIrp->UserIosb) = *(_BYTE *)(v16 + 70);
        BYTE3(MasterIrp->UserIosb) = v8[758] == 100;
        Irp->IoStatus.Information = 76LL;
      }
    }
  }
  else
  {
    v15 = -1073741670;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v15) )
  {
    LOBYTE(v24) = 0;
    UsbhException((int)a1, 0, 91, (int)&v26, 4, v15, 0, usbfile_ioctl_c, 2822, v24);
  }
  if ( v25 )
    UsbhReleaseApiLock(a1, 4027383814LL);
  Log((__int64)a1, 32, 1768897590, (__int64)Irp, v15);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v23) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x39u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v23);
  }
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt((__int64)a1, v17, v18, v19);
  UsbhDecHubBusy((__int64)a1, v20, v14, v21);
  Irp->IoStatus.Status = v15;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v15;
}
