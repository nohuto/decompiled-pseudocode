/*
 * XREFs of PiUEventReferenceEventEntry @ 0x1403F08EC
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyClient @ 0x1403F0784 (PiUEventNotifyClient.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  unsigned int v2; // ebx

  ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 16));
  v2 = ++*(_DWORD *)(a1 + 56);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  return v2;
}
