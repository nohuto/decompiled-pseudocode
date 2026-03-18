/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x1406C5CBC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot(KSPIN_LOCK *a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1, retaddr, a2);
}
