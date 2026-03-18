/*
 * XREFs of UsbhFdoCyclePdoPort @ 0x1C003E5D4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0018D90 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001C2C0 (UsbhDecPdoIoCount.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhCycleDevicePort @ 0x1C0042E14 (UsbhCycleDevicePort.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoCyclePdoPort(__int64 a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // [rsp+48h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-20h]
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v24 = 0;
  Log(a1, 8, 1768898097, (__int64)BugCheckParameter4, 0LL);
  v9 = PdoExt(BugCheckParameter3, v6, v7, v8);
  LOBYTE(v22) = 0;
  UsbhException(a1, *((unsigned __int16 *)v9 + 710), 96, 0, 0, 0, 0, usbfile_dioctl_c, 917, v22);
  if ( KeGetCurrentIrql() )
  {
    v13 = -1073741811;
    v18 = PdoExt(BugCheckParameter3, v10, v11, v12);
    LOBYTE(v23) = 0;
    UsbhException(a1, *((unsigned __int16 *)v18 + 710), 95, 0, 0, -1073741811, 0, usbfile_dioctl_c, 931, v23);
  }
  else
  {
    v13 = UsbhCycleDevicePort(a1, BugCheckParameter3, &v24);
    if ( (v13 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v13) )
    {
      v17 = PdoExt(BugCheckParameter3, v14, v15, v16);
      LOBYTE(v23) = 0;
      UsbhException(a1, *((unsigned __int16 *)v17 + 710), 94, 0, 0, v13, v24, usbfile_dioctl_c, 924, v23);
    }
  }
  BugCheckParameter4->IoStatus.Status = v13;
  IofCompleteRequest(BugCheckParameter4, 0);
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v19, v20);
  return v13;
}
