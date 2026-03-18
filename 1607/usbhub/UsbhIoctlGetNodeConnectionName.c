/*
 * XREFs of UsbhIoctlGetNodeConnectionName @ 0x1C0049B34
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     UsbhGetHubPdoName @ 0x1C003C7A0 (UsbhGetHubPdoName.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00477D4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A598 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A768 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004AAC0 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionName(struct _DEVICE_OBJECT *a1, PIRP Irp, __int64 a3)
{
  unsigned __int16 *MasterIrp; // r14
  size_t v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  _QWORD *v12; // r12
  int HubPdoName; // ebx
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+48h] [rbp-40h]
  char v24; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+18h] BYREF
  int v26; // [rsp+A8h] [rbp+20h] BYREF

  v24 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      2u,
      0x24u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      Irp);
  MasterIrp = (unsigned __int16 *)Irp->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v26 = 261;
  Log((__int64)a1, 32, 1768898099, (__int64)Irp, (__int64)MasterIrp);
  v11 = FdoExt((__int64)a1, v8, v9, v10);
  v12 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v11 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v12 )
  {
    HubPdoName = UsbhAcquireApiLock((__int64)a1, 0xF00D0003, &v24);
    if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
    {
      HubPdoName = UsbhIoctlValidateParameters((_DWORD)a1, 4, 10);
      if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
      {
        v14 = UsbhLatchPdo((__int64)a1, *MasterIrp, (__int64)Irp, 0x496C3033u);
        if ( v14 )
        {
          memset(MasterIrp, 0, v7);
          HubPdoName = UsbhGetHubPdoName((__int64)a1, v14, MasterIrp + 2, (unsigned int)(v7 - 4), &v25);
          v15 = v25;
          if ( v25 >= 4 )
            *((_DWORD *)MasterIrp + 1) += 4;
          Irp->IoStatus.Information = v15 + 4;
          UsbhUnlatchPdo((__int64)a1, v14, (__int64)Irp, 0x496C3033u);
        }
        else
        {
          HubPdoName = 0;
          *((_DWORD *)MasterIrp + 1) = 10;
          MasterIrp[4] = 0;
          Irp->IoStatus.Information = 10LL;
        }
      }
    }
  }
  else
  {
    HubPdoName = -1073741670;
  }
  Log((__int64)a1, 32, 1768897587, (__int64)Irp, HubPdoName);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v22) = HubPdoName;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x25u,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v22);
  }
  if ( (HubPdoName & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(HubPdoName) )
  {
    LOBYTE(v23) = 0;
    UsbhException((int)a1, 0, 91, (int)&v26, 4, HubPdoName, 0, usbfile_ioctl_c, 1729, v23);
  }
  if ( v24 )
    UsbhReleaseApiLock(a1, 4027383811LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt((__int64)a1, v16, v17, v18);
  UsbhDecHubBusy((__int64)a1, v19, v12, v20);
  Irp->IoStatus.Status = HubPdoName;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)HubPdoName;
}
