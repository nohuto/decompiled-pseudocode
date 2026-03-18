/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140711C68
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140711CA8 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpc(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1);
  return VfDeadlockAcquireResource(a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
