/*
 * XREFs of VfDriverLock @ 0x1406B26C0
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14020AB68 (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x1406B263C (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1406B8A3C (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1406B8BB8 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1406B8DD8 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1406C30C0 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1406C3140 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1406C7530 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1406C7770 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1406C7AEC (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1406C7B70 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1406D4C98 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1406D4E68 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1406D4F60 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x1407852AC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140785700 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1407858B0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
