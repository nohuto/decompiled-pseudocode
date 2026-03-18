/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C002561C
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C0025570 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C0051140 (UsbhPortResumeFailed.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0023E60 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx

  v6 = PdoExt(a2, a2, a3, a4);
  UsbhLatchPdo(a1, *((_WORD *)v6 + 710), 0LL, 0x73737057u);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, (__int64)(v6 + 404), (__int64)UsbhSS_PdoWakeWorker, 0LL, a2, 0, 0x77505353u);
}
