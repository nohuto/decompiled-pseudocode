/*
 * XREFs of UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D04
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
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

__int64 __fastcall UsbhIoctlGetNodeConnectionDriverKeyName(__int64 a1, PIRP Irp, __int64 a3)
{
  unsigned __int16 Type; // r15
  _IRP *MasterIrp; // r14
  size_t v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax
  _QWORD *v13; // r12
  __int64 DeviceProperty; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _DEVICE_OBJECT *v19; // rbp
  _DWORD *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v28; // [rsp+28h] [rbp-70h]
  int v29; // [rsp+48h] [rbp-50h]
  char v30; // [rsp+A8h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+18h] BYREF
  int v32; // [rsp+B8h] [rbp+20h] BYREF

  Type = 0;
  v30 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x36u,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v32 = 264;
  Log(a1, 32, 1768898101, (__int64)Irp, (__int64)MasterIrp);
  v12 = FdoExt(a1, v9, v10, v11);
  v13 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v12 + 434), (__int64)Irp, 1430414185LL, 1);
  if ( v13 )
  {
    LODWORD(DeviceProperty) = UsbhAcquireApiLock(a1, 0xF00D0005, &v30);
    if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
    {
      LODWORD(DeviceProperty) = UsbhIoctlValidateParameters(a1, 4, 10);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        Type = MasterIrp->Type;
        v15 = UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496C3035u);
        v19 = (struct _DEVICE_OBJECT *)v15;
        if ( v15 )
        {
          v20 = PdoExt(v15, v16, v17, v18);
          if ( (v20[353] & 0x400) != 0 )
          {
            memset(MasterIrp, 0, v8);
            *(_DWORD *)&MasterIrp->Type = *((unsigned __int16 *)v20 + 710);
            ResultLength = v8 - 10;
            DeviceProperty = IoGetDeviceProperty(
                               v19,
                               DevicePropertyDriverKeyName,
                               v8 - 10,
                               &MasterIrp->MdlAddress,
                               &ResultLength);
            Log(a1, 32, 1768383600, (__int64)Irp, DeviceProperty);
            if ( (_DWORD)DeviceProperty == -1073741789 )
              LODWORD(DeviceProperty) = 0;
            if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
            {
              v21 = ResultLength + 10;
              *(_DWORD *)(&MasterIrp->Size + 1) = v21;
              if ( (unsigned int)v8 < (unsigned int)v21 )
              {
                LOWORD(MasterIrp->MdlAddress) = 0;
                Irp->IoStatus.Information = 10LL;
              }
              else
              {
                Irp->IoStatus.Information = v21;
              }
            }
            UsbhUnlatchPdo(a1, (__int64)v19, (__int64)Irp, 0x496C3035u);
          }
          else
          {
            LODWORD(DeviceProperty) = -1073741436;
            UsbhUnlatchPdo(a1, (__int64)v19, (__int64)Irp, 0x496C3035u);
          }
        }
        else
        {
          LODWORD(DeviceProperty) = -1073741811;
        }
      }
    }
  }
  else
  {
    LODWORD(DeviceProperty) = -1073741670;
  }
  Log(a1, 32, 1768897589, (__int64)Irp, (int)DeviceProperty);
  if ( (unsigned int)DeviceProperty >> 30 == 3 && !Usb_Disconnected(DeviceProperty) )
  {
    LOBYTE(v29) = 0;
    UsbhException(a1, Type, 91, (int)&v32, 4, DeviceProperty, 0, usbfile_ioctl_c, 2634, v29);
  }
  if ( (unsigned int)DeviceProperty >> 30 == 3 && (unsigned int)v8 >= 0xA )
  {
    LOWORD(MasterIrp->MdlAddress) = 0;
    *(_DWORD *)(&MasterIrp->Size + 1) = 10;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v28) = DeviceProperty;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x37u,
      (__int64)&WPP_3ea9b81ba734f165b64302e7a733234f_Traceguids,
      v28);
  }
  if ( v30 )
    UsbhReleaseApiLock(a1, 4027383813LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1, v22, v23, v24);
  UsbhDecHubBusy(a1, v25, v13, v26);
  Irp->IoStatus.Status = DeviceProperty;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)DeviceProperty;
}
