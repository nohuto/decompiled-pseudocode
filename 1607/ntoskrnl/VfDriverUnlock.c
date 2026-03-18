/*
 * XREFs of VfDriverUnlock @ 0x140704D5C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140222624 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x1407D16BC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407D1AE4 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1407D1CA0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     <none>
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
