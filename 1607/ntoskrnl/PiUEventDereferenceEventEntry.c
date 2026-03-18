/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x1403EF49C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1403EF31C (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1403EF44C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x1403EF4F8 (PiUEventFreeEventEntry.c)
 */

__int64 __fastcall PiUEventDereferenceEventEntry(__int64 a1)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = --*(_DWORD *)(a1 + 56);
  if ( *(_BYTE *)(a1 + 68) && v2 == 1 )
    KeSetEvent(*(PRKEVENT *)(a1 + 24), 0, 0);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  if ( !v2 )
    PiUEventFreeEventEntry(a1);
  return v2;
}
