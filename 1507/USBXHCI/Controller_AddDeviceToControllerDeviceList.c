/*
 * XREFs of Controller_AddDeviceToControllerDeviceList @ 0x1C0014780
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C00513D0 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AddDeviceToControllerDeviceList(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // al
  _QWORD *v7; // rdx

  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015
                                                                                                 + 1640))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)(a1 + 8),
    Controller_AddDeviceToControllerDeviceList,
    6339LL,
    "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1640))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a2,
    Controller_AddDeviceToControllerDeviceList,
    6346LL,
    "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  v7 = *(_QWORD **)(a1 + 48);
  *a3 = a1 + 40;
  a3[1] = v7;
  if ( *v7 != a1 + 40 )
    __fastfail(3u);
  *v7 = a3;
  *(_QWORD *)(a1 + 48) = a3;
  ++*(_DWORD *)(a1 + 56);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 32), v6);
}
