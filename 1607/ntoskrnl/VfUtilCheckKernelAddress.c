/*
 * XREFs of VfUtilCheckKernelAddress @ 0x140702C74
 * Callers:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierIoFreeMdl @ 0x140705654 (VerifierIoFreeMdl.c)
 *     VerifierIoInitializeWorkItem @ 0x14070569C (VerifierIoInitializeWorkItem.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140711B48 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140711BDC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140711CA8 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140711D64 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeReleaseMutant @ 0x1407123B8 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutantNoReboot @ 0x140712428 (VerifierKeReleaseMutantNoReboot.c)
 *     VerifierKeReleaseMutex @ 0x140712478 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseMutexNoReboot @ 0x1407124C4 (VerifierKeReleaseMutexNoReboot.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14071255C (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1407125E0 (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 *     VerifierKeSetEvent @ 0x140712644 (VerifierKeSetEvent.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140712A30 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140712AAC (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfKeInsertQueueDpc @ 0x140712CD8 (VfKeInsertQueueDpc.c)
 *     VfKeRemoveQueueDpc @ 0x140712DA0 (VfKeRemoveQueueDpc.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140712DC4 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x140712E54 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x140713194 (ViKeReleaseSpinLockCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407131F4 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 *     VerifierObGetObjectSecurity @ 0x14071CCAC (VerifierObGetObjectSecurity.c)
 *     VerifierObReferenceObjectByPointer @ 0x14071CDC8 (VerifierObReferenceObjectByPointer.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x14071CE3C (VerifierObReferenceObjectByPointerWithTag.c)
 *     VerifierObfDereferenceObject @ 0x14071CE94 (VerifierObfDereferenceObject.c)
 *     VerifierObfDereferenceObjectWithTag @ 0x14071CEB8 (VerifierObfDereferenceObjectWithTag.c)
 *     VerifierObfReferenceObject @ 0x14071CEE8 (VerifierObfReferenceObject.c)
 *     VerifierObfReferenceObjectWithTag @ 0x14071CF3C (VerifierObfReferenceObjectWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfUtilCheckKernelAddress(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 < 0x7FFFFFFEFFFFLL )
    return VerifierBugCheckIfAppropriate(196, 224, a1, a2, 0LL);
  result = a1 + a2;
  if ( a1 + a2 < a1 )
    return VerifierBugCheckIfAppropriate(196, 224, a1, a2, 0LL);
  return result;
}
