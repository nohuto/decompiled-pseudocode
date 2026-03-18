/*
 * XREFs of RawScanDeletedList @ 0x140491E64
 * Callers:
 *     RawMountVolume @ 0x140491570 (RawMountVolume.c)
 *     RawShutdown @ 0x140643E54 (RawShutdown.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExTryToAcquireFastMutex @ 0x1400DFFC4 (ExTryToAcquireFastMutex.c)
 *     RawCheckForDeleteVolume @ 0x1401F6170 (RawCheckForDeleteVolume.c)
 */

void RawScanDeletedList()
{
  __int64 *v0; // rbx
  __int64 *v1; // rsi

  if ( (__int64 *)RawDismountedQueue != &RawDismountedQueue )
  {
    ExAcquireFastMutex(&RawGlobalLock);
    v0 = (__int64 *)RawDismountedQueue;
    while ( v0 != &RawDismountedQueue )
    {
      v1 = v0 - 20;
      v0 = (__int64 *)*v0;
      if ( ExTryToAcquireFastMutex((PFAST_MUTEX)v1 + 4) )
      {
        if ( !RawCheckForDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)v1) )
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)v1 + 4);
      }
    }
    KeReleaseGuardedMutex(&RawGlobalLock);
  }
}
