/*
 * XREFs of UsbhIoctlGetHubInformationEx @ 0x1C00486BC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B480 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C0047364 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A048 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A218 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004A570 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetHubInformationEx(__int64 a1, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rax
  _IRP *MasterIrp; // r14
  size_t v9; // r12
  _DWORD *v10; // r15
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+28h] [rbp-60h]
  int v18; // [rsp+48h] [rbp-40h]
  char v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v19 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x18u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  v20 = 277;
  v7 = FdoExt(a1, (__int64)Irp, a3, a4);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  v10 = v7;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x19u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  v11 = UsbhAcquireApiLock(a1, 0xF00D0013, &v19);
  v12 = v11 >> 30;
  if ( v11 >> 30 != 3 )
  {
    v11 = UsbhIoctlValidateParameters(a1, 0, 77);
    v12 = v11 >> 30;
    if ( v11 >> 30 != 3 )
    {
      memset(MasterIrp, 0, v9);
      *(&MasterIrp->Size + 1) = *((unsigned __int8 *)FdoExt(a1, v13, v14, v15) + 2938);
      if ( (v10[640] & 1) != 0 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
      }
      else
      {
        *(_DWORD *)&MasterIrp->Type = 2;
        *(_OWORD *)(&MasterIrp->Size + 2) = *(_OWORD *)(v10 + 734);
        *(_OWORD *)((char *)&MasterIrp->Flags + 6) = *(_OWORD *)(v10 + 738);
        *(_LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 6) = *(_LIST_ENTRY *)(v10 + 742);
        *(_IO_STATUS_BLOCK *)((char *)&MasterIrp->IoStatus + 6) = *(_IO_STATUS_BLOCK *)(v10 + 746);
        *(_DWORD *)&MasterIrp->ApcEnvironment = v10[750];
        WORD1(MasterIrp->UserIosb) = *((_WORD *)v10 + 1502);
        BYTE4(MasterIrp->UserIosb) = *((_BYTE *)v10 + 3006);
      }
      Irp->IoStatus.Information = 77LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, (int)v11);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Au,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids,
      v17);
  }
  if ( v12 == 3 && !Usb_Disconnected(v11) )
  {
    LOBYTE(v18) = 0;
    UsbhException(a1, 0, 91, (int)&v20, 4, v11, 0, usbfile_ioctl_c, 799, v18);
  }
  if ( v19 )
    UsbhReleaseApiLock(a1, 4027383827LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v11;
  IofCompleteRequest(Irp, 0);
  return v11;
}
