/*
 * XREFs of MiAttachThreadDone @ 0x140009620
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 */

void __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v2 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 217) = *(_BYTE *)(a1 + 217) & 0xF | (16 * ((*(_BYTE *)(a1 + 217) >> 4) - 1));
  if ( v2 )
    KeSignalGate();
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
