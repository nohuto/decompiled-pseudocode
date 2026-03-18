/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x140737B44
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1407481D0 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeMutant @ 0x140748210 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x140748274 (VerifierKeInitializeMutantNoReboot.c)
 *     VerifierKeInitializeMutex @ 0x1407482A4 (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x1407482E0 (VerifierKeInitializeMutexNoReboot.c)
 *     VerifierKeInitializeSemaphore @ 0x140748310 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x140748358 (VerifierKeInitializeTimerEx.c)
 *     VerifierKeWaitForMultipleObjects @ 0x1407490A0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x1407492AC (VerifierKeWaitForMultipleObjectsNoReboot.c)
 *     VerifierKeWaitForSingleObject @ 0x140749448 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeWaitForSingleObjectNoReboot @ 0x1407495C4 (VerifierKeWaitForSingleObjectNoReboot.c)
 *     VerifierExInitializeLookasideListEx @ 0x14074B434 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14074B574 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14074B680 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402175B8 (MmIsNonPagedSystemAddressValid.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfUtilSynchronizationObjectSanityChecks(char *a1, __int64 a2)
{
  BOOLEAN result; // al

  if ( a1 < MmHighestUserAddress || &a1[a2] < a1 )
    VerifierBugCheckIfAppropriate(196, 224, (int)a1, a2, 0LL);
  if ( MmIsSessionAddress((__int64)a1) )
    VerifierBugCheckIfAppropriate(196, 223, (int)a1, 0, 0LL);
  result = MmVerifierData;
  if ( (MmVerifierData & 2) != 0 )
  {
    result = MmIsNonPagedSystemAddressValid(a1);
    if ( !result )
      return VerifierBugCheckIfAppropriate(196, 225, (int)a1, 0, 0LL);
  }
  return result;
}
