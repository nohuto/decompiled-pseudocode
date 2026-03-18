/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850
 * Callers:
 *     VerifierKeInitializeEvent @ 0x1406C5F40 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x1406C6004 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x1406C604C (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x1406C6E58 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x1406C6E88 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1406C73B4 (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x1406C88A8 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1406C89E8 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1406C8AF4 (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401D5650 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfUtilSynchronizationObjectSanityChecks(void *a1, __int64 a2)
{
  BOOLEAN result; // al

  VfUtilCheckKernelAddress((unsigned __int64)a1, a2);
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
