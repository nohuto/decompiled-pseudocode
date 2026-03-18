/*
 * XREFs of UserIsUserCritSecIn @ 0x1C001D810
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C001D798 (CheckOrAcquireDwmStateLock.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00C8610 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00CA068 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecIn()
{
  unsigned int v0; // ecx
  ULONG IsResourceAcquiredSharedLite; // eax

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
    return 1;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser);
  v0 = 0;
  if ( IsResourceAcquiredSharedLite )
    return 1;
  return v0;
}
