/*
 * XREFs of GreSfmDwmShutdown @ 0x1C004EBB0
 * Callers:
 *     <none>
 * Callees:
 *     IsGrepSfmRemoveSurfacesSupported_0 @ 0x1C00017E0 (IsGrepSfmRemoveSurfacesSupported_0.c)
 *     GrepSfmRemoveSurfaces_0 @ 0x1C00017E8 (GrepSfmRemoveSurfaces_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C004E510 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 GreSfmDwmShutdown()
{
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  SfmTokenArray::DeInitialize(gpSfmState);
  if ( (int)IsGrepSfmRemoveSurfacesSupported_0() >= 0 )
    GrepSfmRemoveSurfaces_0();
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
}
