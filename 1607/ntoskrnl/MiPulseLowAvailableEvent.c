/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1401F373C
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1400BCFF0 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KePulseEvent @ 0x1400BCDA0 (KePulseEvent.c)
 */

void __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 264) + 4LL) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4352), &LockHandle);
    v2 = *(struct _KEVENT **)(a1 + 264);
    if ( !v2->Header.SignalState )
      KePulseEvent(v2, 0, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
