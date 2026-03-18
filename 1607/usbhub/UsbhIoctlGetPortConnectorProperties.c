/*
 * XREFs of UsbhIoctlGetPortConnectorProperties @ 0x1C004A0A4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C00477D4 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004A598 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A768 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004AAC0 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetPortConnectorProperties(__int64 a1, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rax
  _IRP *MasterIrp; // r14
  size_t v9; // r12
  _DWORD *v10; // r13
  unsigned int v11; // edi
  unsigned int v12; // ebp
  int Type; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  __int16 v20; // ax
  __int64 (__fastcall *v21)(_QWORD); // rax
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
      0x1Bu,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  v26 = 278;
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
      0x1Cu,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  v11 = UsbhAcquireApiLock(a1, 0xF00D0014, &v25);
  v12 = v11 >> 30;
  if ( v11 >> 30 != 3 )
  {
    v11 = UsbhIoctlValidateParameters(a1, 4, 18);
    v12 = v11 >> 30;
    if ( v11 >> 30 != 3 )
    {
      Type = (unsigned __int16)MasterIrp->Type;
      memset(MasterIrp, 0, v9);
      *(_DWORD *)&MasterIrp->Type = Type;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18;
      if ( UsbhGetPortData(a1, Type) )
      {
        v17 = FdoExt(a1, v14, v15, v16);
        Log(a1, 4, 1967604816, (__int64)(v17 + 1056), 0LL);
        if ( (*(_DWORD *)(v19 + 2560) & 1) != 0 )
        {
          v21 = *(__int64 (__fastcall **)(_QWORD))(v18 + 304);
          if ( v21 )
            v20 = v21(*(_QWORD *)(v18 + 8));
          else
            v20 = 0;
        }
        else
        {
          v20 = 0;
        }
        if ( v20 == (_WORD)Type )
          LODWORD(MasterIrp->MdlAddress) |= 2u;
        if ( (*(_DWORD *)(*((_QWORD *)v10 + 377) + 4LL * (unsigned __int16)Type) & 0x10) == 0 )
          LODWORD(MasterIrp->MdlAddress) |= 1u;
      }
      Irp->IoStatus.Information = 18LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, (int)v11);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v23) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Du,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v23);
  }
  if ( v12 == 3 && !Usb_Disconnected(v11) )
  {
    LOBYTE(v24) = 0;
    UsbhException(a1, 0, 91, (int)&v26, 4, v11, 0, usbfile_ioctl_c, 913, v24);
  }
  if ( v25 )
    UsbhReleaseApiLock(a1, 4027383828LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v11;
  IofCompleteRequest(Irp, 0);
  return v11;
}
