/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1406C5B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot(
        KSPIN_LOCK *a1,
        struct _KLOCK_QUEUE_HANDLE *a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(a1, retaddr, a2);
}
