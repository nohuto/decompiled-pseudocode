/*
 * XREFs of MiSyncCommitSignals @ 0x14016BDFC
 * Callers:
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReplenishLocalCommit @ 0x14011EB30 (MiReplenishLocalCommit.c)
 *     MiComputeCommitThresholds @ 0x14016BDA4 (MiComputeCommitThresholds.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4776), &LockHandle);
  v4 = *(_QWORD *)(a1 + 5576);
  if ( v4 >= *(_QWORD *)(a1 + 4760) )
  {
    v8 = *(struct _KEVENT **)(a1 + 328);
    if ( v4 < *(_QWORD *)(a1 + 4768) )
    {
      if ( v8->Header.SignalState == 1 )
      {
        KeResetEvent(v8);
        KeResetEvent(*(PRKEVENT *)(a1 + 336));
      }
    }
    else
    {
      if ( !v8->Header.SignalState )
        KeSetEvent(v8, 0, 0);
      if ( *(_QWORD *)(a1 + 5736) == *(_QWORD *)(a1 + 4744) )
        KeSetEvent(*(PRKEVENT *)(a1 + 336), 0, 0);
    }
    v7 = *(struct _KEVENT **)(a1 + 320);
    if ( v7->Header.SignalState == 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(struct _KEVENT **)(a1 + 320);
    if ( !v5->Header.SignalState )
      KeSetEvent(v5, 0, 0);
    v6 = *(struct _KEVENT **)(a1 + 328);
    if ( v6->Header.SignalState == 1 )
    {
      KeResetEvent(v6);
      v7 = *(struct _KEVENT **)(a1 + 336);
LABEL_8:
      KeResetEvent(v7);
    }
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
