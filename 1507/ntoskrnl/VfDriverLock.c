/*
 * XREFs of VfDriverLock @ 0x1407326C0
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14025A0CC (VfIsVerificationEnabledForImage.c)
 *     MmIsDriverSuspectForVerifier @ 0x14073263C (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140738F7C (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1407392F4 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x140744960 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1407449E0 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140749F34 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x14074A4F0 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x14074A574 (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140758A54 (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140758B4C (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x1407FBC10 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1407FC064 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1407FC214 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
