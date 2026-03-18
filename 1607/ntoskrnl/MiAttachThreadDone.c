/*
 * XREFs of MiAttachThreadDone @ 0x14010B0AC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1400B0E40 (MmQueryCommitReleaseState.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E1044 (MmReleaseCommitForMemResetPages.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1400A889C (KeSignalGate.c)
 */

void __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  v2 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 185) & 0xF | (16 * ((*(_BYTE *)(a1 + 185) >> 4) - 1));
  if ( v2 )
    KeSignalGate(v2, 1u);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
