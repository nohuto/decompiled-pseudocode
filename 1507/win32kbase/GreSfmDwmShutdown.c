/*
 * XREFs of GreSfmDwmShutdown @ 0x1C00708F0
 * Callers:
 *     <none>
 * Callees:
 *     IsGrepSfmRemoveSurfacesSupported_0 @ 0x1C00017D0 (IsGrepSfmRemoveSurfacesSupported_0.c)
 *     GrepSfmRemoveSurfaces_0 @ 0x1C00017D8 (GrepSfmRemoveSurfaces_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C000EA10 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 */

__int64 GreSfmDwmShutdown()
{
  __int64 v0; // r8

  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( (int)IsGrepSfmRemoveSurfacesSupported_0() >= 0 )
    GrepSfmRemoveSurfaces_0();
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v0);
  return GreReleaseSemaphoreInternal(ghsemDwmState);
}
