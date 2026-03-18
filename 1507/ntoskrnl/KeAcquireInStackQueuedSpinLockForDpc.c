/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140200D68
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1407479AC (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140747A78 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     <none>
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, LockHandle);
}
