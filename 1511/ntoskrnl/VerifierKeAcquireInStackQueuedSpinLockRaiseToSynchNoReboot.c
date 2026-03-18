/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x1406C5DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot(
        volatile __int64 *a1,
        unsigned __int64 a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(a1, retaddr, a2);
}
