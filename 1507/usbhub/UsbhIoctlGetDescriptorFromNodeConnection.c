/*
 * XREFs of UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0047EDC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B480 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00212F0 (UsbhAcquireFdoPwrLock.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhAcquireApiLock @ 0x1C0047364 (UsbhAcquireApiLock.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047B44 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A048 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A218 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004A570 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorFromNodeConnection(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3)
{
  unsigned __int16 *MasterIrp; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  _QWORD *v11; // r12
  int DescriptorForPDO; // ebx
  int v13; // eax
  __int64 v14; // r15
  void *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  _DWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r9
  int v34; // [rsp+48h] [rbp-40h]
  char v35; // [rsp+98h] [rbp+10h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+18h] BYREF
  int v37; // [rsp+A8h] [rbp+20h] BYREF

  v35 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x23u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  MasterIrp = (unsigned __int16 *)a2->AssociatedIrp.MasterIrp;
  LOWORD(v36) = *(_WORD *)(a3 + 8);
  v37 = 260;
  Log((__int64)a1, 32, 1768898146, (__int64)a2, (__int64)MasterIrp);
  v10 = FdoExt((__int64)a1, v7, v8, v9);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185LL, 1);
  if ( v11 )
  {
    DescriptorForPDO = UsbhAcquireApiLock((__int64)a1, 0xF00D000B, &v35);
    if ( (DescriptorForPDO & 0xC0000000) != 0xC0000000 )
    {
      v13 = UsbhIoctlValidateParameters((_DWORD)a1, 4, 13);
      DescriptorForPDO = v13;
      if ( (v13 & 0xC0000000) == 0xC0000000 )
      {
        Log((__int64)a1, 32, 1764899938, v13, 0LL);
        DescriptorForPDO = -1073741810;
      }
      else
      {
        v14 = (__int64)(MasterIrp + 2);
        MasterIrp[2] = 1664;
        v15 = MasterIrp + 6;
        v19 = UsbhLatchPdo((__int64)a1, *MasterIrp, (__int64)a2, 0x496F3062u);
        if ( v19 )
        {
          v20 = FdoExt((__int64)a1, v16, v17, v18);
          UsbhAcquireFdoPwrLock((__int64)a1, (__int64)(v20 + 346), 126LL, 1903322197LL);
          v24 = PdoExt(v19, v21, v22, v23)[282];
          UsbhReleaseFdoPwrLock((__int64)a1, (__int64)(v20 + 346), v25, v26);
          LOWORD(v36) = v36 - 12;
          DescriptorForPDO = UsbhIoctlGetDescriptorForPDO(
                               (__int64)a1,
                               v19,
                               (__int64)a2,
                               v14,
                               (unsigned __int16 *)&v36,
                               v15,
                               v35,
                               v24 != 1);
          Log((__int64)a1, 32, 1764834402, DescriptorForPDO, (unsigned __int16)v36);
          if ( DescriptorForPDO >= 0 )
            a2->IoStatus.Information = v27 + 12;
          UsbhUnlatchPdo((__int64)a1, v19, (__int64)a2, 0x496F3062u);
        }
      }
    }
  }
  else
  {
    DescriptorForPDO = -1073741670;
  }
  Log((__int64)a1, 32, 1768897634, (__int64)a2, DescriptorForPDO);
  if ( (DescriptorForPDO & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(DescriptorForPDO) )
  {
    LOBYTE(v34) = 0;
    UsbhException((int)a1, 0, 91, (int)&v37, 4, DescriptorForPDO, 0, usbfile_ioctl_c, 1495, v34);
  }
  if ( v35 )
    UsbhReleaseApiLock(a1, 4027383819LL);
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt((__int64)a1, v28, v29, v30);
  UsbhDecHubBusy((__int64)a1, v31, v11, v32);
  a2->IoStatus.Status = DescriptorForPDO;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DescriptorForPDO;
}
