/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140711EA4
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x140712E54 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeAcquireSpinLockRaiseToDpc(int a1)
{
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = ViKeAcquireSpinLockRaiseToDpcCommon();
  VfDeadlockAcquireResource(a1, 5, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
