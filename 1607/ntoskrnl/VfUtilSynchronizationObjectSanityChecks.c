/*
 * XREFs of VfUtilSynchronizationObjectSanityChecks @ 0x140703078
 * Callers:
 *     VerifierKeInitializeEvent @ 0x140711F90 (VerifierKeInitializeEvent.c)
 *     VerifierKeInitializeSemaphore @ 0x140712054 (VerifierKeInitializeSemaphore.c)
 *     VerifierKeInitializeTimerEx @ 0x14071209C (VerifierKeInitializeTimerEx.c)
 *     ViKeInitializeMutantCommon @ 0x140712EA8 (ViKeInitializeMutantCommon.c)
 *     ViKeInitializeMutexCommon @ 0x140712ED8 (ViKeInitializeMutexCommon.c)
 *     ViKeWaitSanityChecks @ 0x1407133FC (ViKeWaitSanityChecks.c)
 *     VerifierExInitializeLookasideListEx @ 0x140717250 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x140717390 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14071749C (VerifierExInitializePagedLookasideList.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1401E677C (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfUtilSynchronizationObjectSanityChecks(void *a1, __int64 a2)
{
  BOOLEAN result; // al

  VfUtilCheckKernelAddress((unsigned __int64)a1, a2);
  if ( MmIsSessionAddress((unsigned __int64)a1) )
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
