/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140711D24
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140711D64 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(a1);
  return VfDeadlockAcquireResource(a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
