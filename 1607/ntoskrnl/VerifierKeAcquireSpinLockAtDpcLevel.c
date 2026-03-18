/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x140711E5C
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140712DC4 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(int a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViKeAcquireSpinLockAtDpcLevelCommon(a1);
  return VfDeadlockAcquireResource(a1, 5, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
