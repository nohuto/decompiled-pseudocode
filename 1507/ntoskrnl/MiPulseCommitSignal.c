/*
 * XREFs of MiPulseCommitSignal @ 0x140220BC8
 * Callers:
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 * Callees:
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiPulseCommitSignal(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4776), &LockHandle);
  v2 = *(struct _KEVENT **)(a1 + 328);
  if ( !v2->Header.SignalState )
    KePulseEvent(v2, 0, 0);
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL) && *(_QWORD *)(a1 + 5736) == *(_QWORD *)(a1 + 4744) )
    KePulseEvent(*(PRKEVENT *)(a1 + 336), 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
