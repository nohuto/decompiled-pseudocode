/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1401F3910
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1400BF160 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KePulseEvent @ 0x1400BEF10 (KePulseEvent.c)
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
