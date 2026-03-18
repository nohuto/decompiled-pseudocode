/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1406C5AB8
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1406C5AF8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(a1);
  return VfDeadlockAcquireResource(a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
