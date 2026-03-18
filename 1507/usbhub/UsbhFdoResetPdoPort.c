/*
 * XREFs of UsbhFdoResetPdoPort @ 0x1C003E8F4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012F60 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     Usbh__TestPoint__Ulong @ 0x1C00075B8 (Usbh__TestPoint__Ulong.c)
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0019B00 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00212F0 (UsbhAcquireFdoPwrLock.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoResetPdoPort(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  KIRQL v25; // dl
  int v26; // eax
  bool v27; // cc
  __int64 v28; // r8
  __int64 v29; // r9
  int v31; // [rsp+48h] [rbp-30h]
  __int64 v32; // [rsp+98h] [rbp+20h]

  Log((__int64)DeviceObject, 4, 1919251233, (__int64)BugCheckParameter4, BugCheckParameter3);
  v9 = PdoExt(BugCheckParameter3, v6, v7, v8);
  v10 = (__int64)(v9 + 236);
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v9,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_START,
    0LL);
  UsbhAcquireFdoPwrLock((__int64)DeviceObject, (__int64)(v9 + 236), 134LL, 1936028228LL);
  if ( PdoExt(BugCheckParameter3, v11, v12, v13)[282] == 1 )
  {
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v10, v14, v15);
    v19 = *((unsigned __int16 *)v9 + 710);
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v31) = 0;
      v16 = -1073741811;
      UsbhException((int)DeviceObject, v19, 68, 0, 0, -1073741811, -1, usbfile_dioctl_c, 769, v31);
    }
    else
    {
      v16 = -1073741810;
      v32 = UsbhLatchPdo((__int64)DeviceObject, v19, (__int64)BugCheckParameter4, 0x64545352u);
      Log((__int64)DeviceObject, 8, 1920169068, *((unsigned __int16 *)v9 + 710), v32);
      if ( v32 )
      {
        if ( BugCheckParameter3 == v32 )
        {
          UsbhAcquirePdoStateLock(v20, v10, 13);
          v24 = PdoExt(BugCheckParameter3, v21, v22, v23)[281] == 3;
          v9[270] = 0;
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          v9[258] = 1734964085;
          v25 = *((_BYTE *)v9 + 1076);
          if ( v24 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
            Usbh__TestPoint__Ulong((__int64)DeviceObject, 0, 0xC000000E, *((unsigned __int16 *)v9 + 710));
            v26 = UsbhSyncResetDeviceInternal(DeviceObject, v10, BugCheckParameter3);
            ++v9[595];
            v16 = v26;
            v27 = v9[595] <= 0xAu;
            v9[594] = 1;
            if ( !v27 )
            {
              LOBYTE(v31) = 0;
              UsbhException(
                (int)DeviceObject,
                *((unsigned __int16 *)v9 + 710),
                76,
                0,
                0,
                v26,
                -1,
                usbfile_dioctl_c,
                803,
                v31);
              v9[595] = 0;
            }
            if ( v16 >= 0 )
              Usbh__TestPoint__Ulong((__int64)DeviceObject, 1u, v16, *((unsigned __int16 *)v9 + 710));
          }
          else
          {
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
          }
        }
        UsbhUnlatchPdo((__int64)DeviceObject, v32, (__int64)BugCheckParameter4, 0x64545352u);
      }
      if ( (v16 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v16) )
      {
        LOBYTE(v31) = 0;
        UsbhException((int)DeviceObject, *((unsigned __int16 *)v9 + 710), 77, 0, 0, v16, -1, usbfile_dioctl_c, 828, v31);
      }
    }
  }
  else
  {
    v16 = -1073741101;
    LOBYTE(v31) = 0;
    UsbhException(
      (int)DeviceObject,
      *((unsigned __int16 *)v9 + 710),
      69,
      0,
      0,
      -1073741101,
      -1,
      usbfile_dioctl_c,
      749,
      v31);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v10, v17, v18);
  }
  UsbhEtwLogDeviceIrpEvent(
    (__int64)v9,
    (__int64)BugCheckParameter4,
    &USBHUB_ETW_EVENT_DEVICE_IOCTL_INTERNAL_USB_RESET_PORT_COMPLETE,
    (unsigned int)v16);
  if ( *((_BYTE *)v9 + 2708) && v16 < 0 )
  {
    Log((__int64)DeviceObject, 8, 1920169062, (__int64)v9, v16);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        3u,
        0xBu,
        (__int64)&WPP_7d0af4831bcb17b64b3f297e612dab23_Traceguids);
    LOBYTE(v31) = 1;
    UsbhException((int)DeviceObject, 0, 62, 0, 0, -1073741823, -1073704960, usbfile_dioctl_c, 841, v31);
    *((_QWORD *)v9 + 344) = BugCheckParameter4;
    v16 = 259;
    BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = v16;
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v28, v29);
  return (unsigned int)v16;
}
