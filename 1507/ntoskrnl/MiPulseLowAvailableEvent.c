/*
 * XREFs of MiPulseLowAvailableEvent @ 0x14022E01C
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x14011341C (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 272) + 4LL) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4032), &LockHandle);
    v2 = *(struct _KEVENT **)(a1 + 272);
    if ( !v2->Header.SignalState )
      KePulseEvent(v2, 0, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
