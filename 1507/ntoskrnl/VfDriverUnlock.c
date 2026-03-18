/*
 * XREFs of VfDriverUnlock @ 0x1407391EC
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14025A0CC (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x1407FBC10 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407FC064 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1407FC214 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     <none>
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
