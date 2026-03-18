/*
 * XREFs of UserIsUserCritSecIn @ 0x1C00374B0
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C0037478 (CheckOrAcquireDwmStateLock.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00BC93C (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00BE368 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecIn()
{
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned int v1; // ecx

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
    return 1;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser);
  v1 = 0;
  if ( IsResourceAcquiredSharedLite )
    return 1;
  return v1;
}
