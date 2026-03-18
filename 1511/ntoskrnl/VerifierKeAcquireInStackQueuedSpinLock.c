/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLock @ 0x1406C5A78
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1406C5B8C (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLock(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockCommon(a1);
  return VfDeadlockAcquireResource(a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
