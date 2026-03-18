/*
 * XREFs of VerifierKeReleaseSpinLock @ 0x1407124FC
 * Callers:
 *     <none>
 * Callees:
 *     ViKeReleaseSpinLockCommon @ 0x140713194 (ViKeReleaseSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLock(__int64 a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ViKeReleaseSpinLockCommon(a1);
  VfDeadlockReleaseResource(a1, 5LL, KeGetCurrentThread(), retaddr);
  LOBYTE(v5) = a2;
  pXdvKeReleaseSpinLock(a1, v5);
  return ViKeIrqlLogCommon(v4, 1LL);
}
