/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140711B08
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140711B48 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(a1);
  return VfDeadlockAcquireResource(a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
