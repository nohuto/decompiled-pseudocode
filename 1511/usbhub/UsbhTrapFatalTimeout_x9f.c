/*
 * XREFs of UsbhTrapFatalTimeout_x9f @ 0x1C003CD68
 * Callers:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhHubProcessChangeWorker @ 0x1C0015330 (UsbhHubProcessChangeWorker.c)
 * Callees:
 *     USBHUB_TriggerCallBacks @ 0x1C004AA48 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall __noreturn UsbhTrapFatalTimeout_x9f(__int64 a1, int a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2;
  if ( a1 )
    USBHUB_TriggerCallBacks(a1);
  KeBugCheckEx(0xFEu, 8uLL, 6uLL, v3, a3);
}
