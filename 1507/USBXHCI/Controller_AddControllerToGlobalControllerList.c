/*
 * XREFs of Controller_AddControllerToGlobalControllerList @ 0x1C0005010
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AddControllerToGlobalControllerList(__int64 a1)
{
  KIRQL v2; // al
  unsigned __int64 ProcessorHistory; // rcx
  unsigned __int64 *v4; // rbx
  unsigned __int64 **v5; // rdx

  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015
                                                                                                 + 1640))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)(a1 + 8),
    Controller_AddControllerToGlobalControllerList,
    6278LL,
    "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16));
  ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
  v4 = (unsigned __int64 *)(a1 + 16);
  v5 = *(unsigned __int64 ***)(WPP_MAIN_CB.Dpc.ProcessorHistory + 8);
  *v4 = WPP_MAIN_CB.Dpc.ProcessorHistory;
  v4[1] = (unsigned __int64)v5;
  if ( *v5 != (unsigned __int64 *)ProcessorHistory )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(ProcessorHistory + 8) = v4;
  ++*(_DWORD *)(ProcessorHistory + 24);
  KeReleaseSpinLock((PKSPIN_LOCK)(ProcessorHistory + 16), v2);
}
