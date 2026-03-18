/*
 * XREFs of MiSyncCommitSignals @ 0x140142B2C
 * Callers:
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReplenishLocalCommit @ 0x1400A4FEC (MiReplenishLocalCommit.c)
 *     MiComputeCommitThresholds @ 0x140142AD4 (MiComputeCommitThresholds.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5672), &LockHandle);
  v4 = *(_QWORD *)(a1 + 7208);
  if ( v4 >= *(_QWORD *)(a1 + 5656) )
  {
    v8 = *(struct _KEVENT **)(a1 + 320);
    if ( v4 < *(_QWORD *)(a1 + 5664) )
    {
      if ( v8->Header.SignalState == 1 )
      {
        KeResetEvent(v8);
        KeResetEvent(*(PRKEVENT *)(a1 + 328));
      }
    }
    else
    {
      if ( !v8->Header.SignalState )
        KeSetEvent(v8, 0, 0);
      if ( *(_QWORD *)(a1 + 7336) == *(_QWORD *)(a1 + 5640) )
        KeSetEvent(*(PRKEVENT *)(a1 + 328), 0, 0);
    }
    v7 = *(struct _KEVENT **)(a1 + 312);
    if ( v7->Header.SignalState == 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(struct _KEVENT **)(a1 + 312);
    if ( !v5->Header.SignalState )
      KeSetEvent(v5, 0, 0);
    v6 = *(struct _KEVENT **)(a1 + 320);
    if ( v6->Header.SignalState == 1 )
    {
      KeResetEvent(v6);
      v7 = *(struct _KEVENT **)(a1 + 328);
LABEL_8:
      KeResetEvent(v7);
    }
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
