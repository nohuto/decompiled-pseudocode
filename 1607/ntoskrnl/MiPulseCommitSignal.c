/*
 * XREFs of MiPulseCommitSignal @ 0x1401ECF04
 * Callers:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 */

void __fastcall MiPulseCommitSignal(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5672), &LockHandle);
  v2 = *(struct _KEVENT **)(a1 + 320);
  if ( !v2->Header.SignalState )
    KePulseEvent(v2, 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) && *(_QWORD *)(a1 + 7336) == *(_QWORD *)(a1 + 5640) )
    KePulseEvent(*(PRKEVENT *)(a1 + 328), 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
