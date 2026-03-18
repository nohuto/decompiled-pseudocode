/*
 * XREFs of UsbhSS_WakeIrpRetryTimer @ 0x1C0056020
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x1C0022800 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_WakeIrpRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhSS_PdoWakeWorker, 0LL, a4, 0, 0x77505353u);
}
