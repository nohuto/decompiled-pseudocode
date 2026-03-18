/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049460
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00473E4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A198 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A368 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004A6C0 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExV2(__int64 a1, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rax
  _IRP *MasterIrp; // r14
  size_t v9; // r12
  _DWORD *v10; // r13
  int v11; // edi
  int Type; // r15d
  int MdlAddress; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  int v19; // r10d
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
      0x1Eu,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids);
  v24 = 279;
  v7 = FdoExt(a1, (__int64)Irp, a3, a4);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  v10 = v7;
  Log(a1, 32, 1768898147, (__int64)Irp, (__int64)MasterIrp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Fu,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids);
  v11 = UsbhAcquireApiLock(a1, 0xF00D0015, &v23);
  if ( (v11 & 0xC0000000) != 0xC0000000 )
  {
    v11 = UsbhIoctlValidateParameters(a1, 16, 16);
    if ( (v11 & 0xC0000000) != 0xC0000000 )
    {
      if ( *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u )
      {
        Type = (unsigned __int16)MasterIrp->Type;
        MdlAddress = (int)MasterIrp->MdlAddress;
        memset(MasterIrp, 0, v9);
        *(_DWORD *)&MasterIrp->Type = Type;
        if ( (MdlAddress & 4) != 0 && (*(_DWORD *)&MasterIrp->Type = Type, UsbhGetPortData(a1, Type)) )
        {
          *(_DWORD *)(&MasterIrp->Size + 1) = 16;
          Irp->IoStatus.Information = 16LL;
          LODWORD(MasterIrp->MdlAddress) |= 1u;
          if ( (v10[640] & 0x8000) != 0 )
            LODWORD(MasterIrp->MdlAddress) |= 2u;
          v14 = UsbhLatchPdo(a1, Type, (__int64)Irp, 0x496F3063u);
          v18 = v14;
          if ( v14 )
          {
            if ( (PdoExt(v14, v15, v16, v17)[353] & 0x80000) != 0 )
              HIDWORD(MasterIrp->MdlAddress) |= 2u;
            UsbhUnlatchPdo(a1, v18, (__int64)Irp, 0x496F3063u);
          }
        }
        else
        {
          v11 = -1073741811;
        }
      }
      else
      {
        v11 = -1073741811;
      }
    }
  }
  Log(a1, 32, 1768897635, (__int64)Irp, v11);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v21) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      v19 - 30,
      v19,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      v21);
  }
  if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
  {
    LOBYTE(v22) = 0;
    UsbhException(a1, 0, 91, (int)&v24, 4, v11, 0, usbfile_ioctl_c, 1062, v22);
  }
  if ( v23 )
    UsbhReleaseApiLock(a1, 4027383829LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v11;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v11;
}
