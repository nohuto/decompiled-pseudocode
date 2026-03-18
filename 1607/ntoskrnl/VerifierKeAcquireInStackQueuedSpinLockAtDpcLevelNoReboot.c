/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x140711BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(a1, retaddr, a2);
}
