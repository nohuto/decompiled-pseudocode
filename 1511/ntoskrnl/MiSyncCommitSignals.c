/*
 * XREFs of MiSyncCommitSignals @ 0x14013A478
 * Callers:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReplenishLocalCommit @ 0x1400E61CC (MiReplenishLocalCommit.c)
 *     MiComputeCommitThresholds @ 0x14013A420 (MiComputeCommitThresholds.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiSyncCommitSignals(__int64 a1, int a2)
{
  unsigned __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
    LockHandle.OldIrql = 17;
  else
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5032), &LockHandle);
  v4 = *(_QWORD *)(a1 + 5960);
  if ( v4 >= *(_QWORD *)(a1 + 5016) )
  {
    v8 = *(struct _KEVENT **)(a1 + 312);
    if ( v4 < *(_QWORD *)(a1 + 5024) )
    {
      if ( v8->Header.SignalState == 1 )
      {
        KeResetEvent(v8);
        KeResetEvent(*(PRKEVENT *)(a1 + 320));
      }
    }
    else
    {
      if ( !v8->Header.SignalState )
        KeSetEvent(v8, 0, 0);
      if ( *(_QWORD *)(a1 + 6120) == *(_QWORD *)(a1 + 5000) )
        KeSetEvent(*(PRKEVENT *)(a1 + 320), 0, 0);
    }
    v7 = *(struct _KEVENT **)(a1 + 304);
    if ( v7->Header.SignalState == 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(struct _KEVENT **)(a1 + 304);
    if ( !v5->Header.SignalState )
      KeSetEvent(v5, 0, 0);
    v6 = *(struct _KEVENT **)(a1 + 312);
    if ( v6->Header.SignalState == 1 )
    {
      KeResetEvent(v6);
      v7 = *(struct _KEVENT **)(a1 + 320);
LABEL_8:
      KeResetEvent(v7);
    }
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
