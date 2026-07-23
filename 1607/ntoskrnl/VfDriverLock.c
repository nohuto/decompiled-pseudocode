/*
 * XREFs of VfDriverLock @ 0x1406FE42C
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x140222450 (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x1406FE3A8 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140704AF8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140704E94 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x14070F180 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x14070F200 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140715ED8 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x140716490 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x140716514 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140721060 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140721158 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x1407D16BC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407D1AE4 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1407D1CA0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
