/*
 * XREFs of MiPulseLowAvailableEvent @ 0x1401E41C0
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x140014E30 (MiComputeSystemTrimCriteria.c)
 * Callees:
 *     KePulseEvent @ 0x140014A90 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiPulseLowAvailableEvent(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 256) + 4LL) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
    v2 = *(struct _KEVENT **)(a1 + 256);
    if ( !v2->Header.SignalState )
      KePulseEvent(v2, 0, 0);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
