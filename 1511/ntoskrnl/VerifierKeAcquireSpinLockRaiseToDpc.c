/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x1406C5E54
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x1406C6E04 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeAcquireSpinLockRaiseToDpc(KSPIN_LOCK *a1)
{
  int v1; // edi
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = (int)a1;
  v2 = ViKeAcquireSpinLockRaiseToDpcCommon(a1);
  VfDeadlockAcquireResource(v1, 5, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v2;
}
