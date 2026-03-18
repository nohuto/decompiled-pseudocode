/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1406C5C18
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1406C5C58 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpc(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1);
  return VfDeadlockAcquireResource(a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
