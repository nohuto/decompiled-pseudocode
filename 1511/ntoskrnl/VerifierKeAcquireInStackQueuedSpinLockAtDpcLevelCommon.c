/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1406C5AF8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1406C5AB8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1406C5B80 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 */

void __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(
        KSPIN_LOCK *a1,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  unsigned __int8 CurrentIrql; // al

  ++dword_1402E1888;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  VfUtilCheckKernelAddress((unsigned __int64)a3, 24LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, (ULONG_PTR)a3, 0LL);
  pXdvKeAcquireInStackQueuedSpinLockAtDpcLevel(a1, a3);
}
