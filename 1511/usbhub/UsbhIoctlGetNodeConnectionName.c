/*
 * XREFs of UsbhIoctlGetNodeConnectionName @ 0x1C0049734
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhGetHubPdoName @ 0x1C003C380 (UsbhGetHubPdoName.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00473E4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A198 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A368 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004A6C0 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionName(__int64 a1, PIRP Irp, __int64 a3)
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
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      Irp);
  MasterIrp = (unsigned __int16 *)Irp->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v26 = 261;
  Log(a1, 32, 1768898099, (__int64)Irp, (__int64)MasterIrp);
  v11 = FdoExt(a1, v8, v9, v10);
  v12 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v11 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v12 )
  {
    HubPdoName = UsbhAcquireApiLock(a1, 0xF00D0003, &v24);
    if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
    {
      HubPdoName = UsbhIoctlValidateParameters(a1, 4, 10);
      if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
      {
        v14 = UsbhLatchPdo(a1, *MasterIrp, (__int64)Irp, 0x496C3033u);
        if ( v14 )
        {
          memset(MasterIrp, 0, v7);
          HubPdoName = UsbhGetHubPdoName(a1, v14, MasterIrp + 2, (unsigned int)(v7 - 4), &v25);
          v15 = v25;
          if ( v25 >= 4 )
            *((_DWORD *)MasterIrp + 1) += 4;
          Irp->IoStatus.Information = v15 + 4;
          UsbhUnlatchPdo(a1, v14, (__int64)Irp, 0x496C3033u);
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
  Log(a1, 32, 1768897587, (__int64)Irp, HubPdoName);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v22) = HubPdoName;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x25u,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      v22);
  }
  if ( (HubPdoName & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(HubPdoName) )
  {
    LOBYTE(v23) = 0;
    UsbhException(a1, 0, 91, (int)&v26, 4, HubPdoName, 0, usbfile_ioctl_c, 1715, v23);
  }
  if ( v24 )
    UsbhReleaseApiLock(a1, 4027383811LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1, v16, v17, v18);
  UsbhDecHubBusy(a1, v19, v12, v20);
  Irp->IoStatus.Status = HubPdoName;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)HubPdoName;
}
