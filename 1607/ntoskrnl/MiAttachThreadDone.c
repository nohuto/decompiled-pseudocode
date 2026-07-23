/*
 * XREFs of MiAttachThreadDone @ 0x140108E2C
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1400AEEB0 (MmQueryCommitReleaseState.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E0E70 (MmReleaseCommitForMemResetPages.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 */

void __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v2 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 185) & 0xF | (16 * ((*(_BYTE *)(a1 + 185) >> 4) - 1));
  if ( v2 )
    KeSignalGate(v2, 1u);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
