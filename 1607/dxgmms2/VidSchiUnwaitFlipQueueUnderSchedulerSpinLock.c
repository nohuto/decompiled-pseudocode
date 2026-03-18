/*
 * XREFs of VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0025970
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00A02C0 (VidSchiResumeFlipQueues.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(KSPIN_LOCK *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 232, &LockHandle);
  VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)a1, v2, v3, v4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
