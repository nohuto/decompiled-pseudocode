/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C002502C
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0024F80 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C0050B40 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00230C0 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx

  v6 = PdoExt(a2, a2, a3, a4);
  UsbhLatchPdo(a1, *((_WORD *)v6 + 710), 0LL, 0x73737057u);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, (__int64)(v6 + 404), (__int64)UsbhSS_PdoWakeWorker, 0LL, a2, 0, 0x77505353u);
}
