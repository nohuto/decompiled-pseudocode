/*
 * XREFs of MiPulseCommitSignal @ 0x1401DBF14
 * Callers:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 * Callees:
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiPulseCommitSignal(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5032), &LockHandle);
  v2 = *(struct _KEVENT **)(a1 + 312);
  if ( !v2->Header.SignalState )
    KePulseEvent(v2, 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 320) + 4LL) && *(_QWORD *)(a1 + 6120) == *(_QWORD *)(a1 + 5000) )
    KePulseEvent(*(PRKEVENT *)(a1 + 320), 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
