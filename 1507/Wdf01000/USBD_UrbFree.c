/*
 * XREFs of USBD_UrbFree @ 0x1C00A605C
 * Callers:
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C008B4A4 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 *     ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x1C008B5F0 (--_GFxUsbDeviceStringContext@@UEAAPEAXI@Z.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008C120 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?Dispose@FxUsbDeviceStringContext@@UEAAXXZ @ 0x1C008C670 (-Dispose@FxUsbDeviceStringContext@@UEAAXXZ.c)
 *     ?Dispose@FxUsbUrb@@MEAAEXZ @ 0x1C008C6C0 (-Dispose@FxUsbUrb@@MEAAEXZ.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C0090420 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C0090478 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 *     ?Dispose@FxUsbPipeRequestContext@@UEAAXXZ @ 0x1C0090720 (-Dispose@FxUsbPipeRequestContext@@UEAAXXZ.c)
 *     ?Dispose@FxUsbPipeTransferContext@@UEAAXXZ @ 0x1C0090770 (-Dispose@FxUsbPipeTransferContext@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall USBD_UrbFree(USBD_HANDLE__ *USBDHandle, _URB *Urb)
{
  void (__fastcall *v4)(_URB *); // rdx
  void (__fastcall *v5)(_QWORD); // rax

  if ( Urb )
  {
    if ( USBDHandle )
    {
      v4 = (void (__fastcall *)(_URB *))*((_QWORD *)USBDHandle + 19);
      if ( v4 )
        v4(Urb);
      else
        ExFreePoolWithTag(Urb, *((_DWORD *)USBDHandle + 16));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 43, 0xFFFFFFFF) <= 1 )
      {
        if ( *((_BYTE *)USBDHandle + 177) )
        {
          v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
          if ( v5 )
            v5(*((_QWORD *)USBDHandle + 6));
          ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
        }
        else if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
        {
          DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
        }
      }
    }
    else if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
    {
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    }
  }
  else if ( LOBYTE(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject) )
  {
    DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
  }
}
