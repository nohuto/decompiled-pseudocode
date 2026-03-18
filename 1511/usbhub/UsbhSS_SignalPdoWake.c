/*
 * XREFs of UsbhSS_SignalPdoWake @ 0x1C001F72C
 * Callers:
 *     UsbhPortResumeComplete @ 0x1C001F680 (UsbhPortResumeComplete.c)
 *     UsbhPortResumeFailed @ 0x1C0050AA0 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0022800 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  int v7; // ebx

  v6 = PdoExt(a2, a2, a3, a4);
  v7 = (int)v6;
  UsbhLatchPdo(a1, *((_WORD *)v6 + 710), 0LL, 0x73737057u);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, v7 + 1616, (unsigned int)UsbhSS_PdoWakeWorker, 0, a2, 0, 2001752915);
}
