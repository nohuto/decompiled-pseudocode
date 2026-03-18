/*
 * XREFs of PiUEventDereferenceEventEntry @ 0x1404E19A8
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PiUEventProcessEventWorker @ 0x1404E1828 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1404E1958 (PiUEventDequeuePendingEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PiUEventFreeEventEntry @ 0x1404E1A04 (PiUEventFreeEventEntry.c)
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
