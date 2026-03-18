/*
 * XREFs of GreSfmDwmShutdown @ 0x1C007F6F0
 * Callers:
 *     <none>
 * Callees:
 *     IsGrepSfmRemoveSurfacesSupported_0 @ 0x1C0001770 (IsGrepSfmRemoveSurfacesSupported_0.c)
 *     GrepSfmRemoveSurfaces_0 @ 0x1C0001778 (GrepSfmRemoveSurfaces_0.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C004EA40 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreSfmDwmShutdown()
{
  __int64 v0; // r8

  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( (int)IsGrepSfmRemoveSurfacesSupported_0() >= 0 )
    GrepSfmRemoveSurfaces_0();
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v0);
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
}
