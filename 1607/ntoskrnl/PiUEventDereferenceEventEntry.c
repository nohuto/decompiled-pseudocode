/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x1404898C4
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140489744 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140489874 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x140489920 (PiUEventFreeEventEntry.c)
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
