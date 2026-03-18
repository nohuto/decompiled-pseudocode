/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x1406C5E0C
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1406C6D74 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViKeAcquireSpinLockAtDpcLevelCommon(a1);
  return VfDeadlockAcquireResource(a1, 5, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
