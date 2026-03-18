/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140747FB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1401011D0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 */

KIRQL __fastcall VerifierKeAcquireSpinLockRaiseToDpc(ULONG_PTR a1)
{
  KSPIN_LOCK *v1; // rbx
  __int64 v2; // rdi
  KIRQL v3; // si
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = (KSPIN_LOCK *)a1;
  if ( a1 < (unsigned __int64)MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, a1, 8uLL, 0LL);
  LOBYTE(a1) = 2;
  v2 = ViKeRaiseIrqlSanityChecks(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  v3 = pXdvKeAcquireSpinLockRaiseToDpc(v1);
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  VfDeadlockAcquireResource((_DWORD)v1, 5, (unsigned int)KeGetCurrentThread(), 0, retaddr);
  return v3;
}
