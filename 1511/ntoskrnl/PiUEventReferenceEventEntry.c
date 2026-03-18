/*
 * XREFs of PiUEventReferenceEventEntry @ 0x1404E1464
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x1404E12F8 (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  unsigned int v2; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = ++*(_DWORD *)(a1 + 56);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  return v2;
}
