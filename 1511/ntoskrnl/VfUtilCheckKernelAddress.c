/*
 * XREFs of VfUtilCheckKernelAddress @ 0x1406B7454
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoFreeMdl @ 0x1406B9598 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x1406B95E0 (VerifierIoInitializeWorkItem.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1406C5AF8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1406C5B8C (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1406C5C58 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1406C5D14 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeReleaseMutant @ 0x1406C6368 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x1406C63D8 (VerifierKeReleaseMutantNoReboot.c)
 *     VerifierKeReleaseMutex @ 0x1406C6428 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x1406C6474 (VerifierKeReleaseMutexNoReboot.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1406C650C (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1406C6590 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x1406C65F4 (VerifierKeSetEvent.c)
 *     VerifierPortKeAcquireSpinLock @ 0x1406C69E0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1406C6A5C (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfKeInsertQueueDpc @ 0x1406C6C88 (VfKeInsertQueueDpc.c)
 *     VfKeRemoveQueueDpc @ 0x1406C6D50 (VfKeRemoveQueueDpc.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1406C6D74 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1406C6E04 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1406C714C (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1406C71AC (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VerifierObGetObjectSecurity @ 0x1406D0B04 (VerifierObGetObjectSecurity.c)
 *     VerifierObReferenceObjectByPointer @ 0x1406D0C20 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x1406D0C94 (VerifierObReferenceObjectByPointerWithTag.c)
 *     VerifierObfDereferenceObject @ 0x1406D0CEC (VerifierObfDereferenceObject.c)
 *     VerifierObfDereferenceObjectWithTag @ 0x1406D0D10 (VerifierObfDereferenceObjectWithTag.c)
 *     VerifierObfReferenceObject @ 0x1406D0D40 (VerifierObfReferenceObject.c)
 *     VerifierObfReferenceObjectWithTag @ 0x1406D0D94 (VerifierObfReferenceObjectWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfUtilCheckKernelAddress(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 < (unsigned __int64)MmHighestUserAddress )
    return VerifierBugCheckIfAppropriate(196, 224, a1, a2, 0LL);
  result = a1 + a2;
  if ( a1 + a2 < a1 )
    return VerifierBugCheckIfAppropriate(196, 224, a1, a2, 0LL);
  return result;
}
