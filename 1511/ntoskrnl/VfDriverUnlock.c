/*
 * XREFs of VfDriverUnlock @ 0x1406B8CD0
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14020AB68 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x1407852AC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140785700 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1407858B0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     <none>
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
