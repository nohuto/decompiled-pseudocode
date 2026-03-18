/*
 * XREFs of TR_ReclaimTransfers @ 0x1C00208DC
 * Callers:
 *     ESM_ReclaimingTransfersAfterEndpointStop @ 0x1C00396A0 (ESM_ReclaimingTransfersAfterEndpointStop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_ReclaimTransfers(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 1632))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         *(_QWORD *)(a1 + 56));
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v2,
    "Transfer Ring Tag",
    1093LL,
    "drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 64LL))(a1);
}
