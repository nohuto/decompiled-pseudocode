/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x1406C5CC8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VerifierKeAcquireInStackQueuedSpinLockNoReboot(KSPIN_LOCK *a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockCommon(a1, retaddr, a2);
}
