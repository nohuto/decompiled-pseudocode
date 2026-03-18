/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1406C5C58
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1406C5C18 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x1406C5CBC (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 */

void __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(
        KSPIN_LOCK *a1,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3)
{
  ++dword_1402E1888;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  VfUtilCheckKernelAddress((unsigned __int64)a3, 24LL);
  pXdvKeAcquireInStackQueuedSpinLockForDpc(a1, a3);
}
