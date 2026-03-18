/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x140748058
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1401011D0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierKeAcquireSpinLockRaiseToDpcNoReboot(ULONG_PTR a1)
{
  KSPIN_LOCK *v1; // rbx
  __int64 v2; // rdi
  KIRQL v3; // bl

  v1 = (KSPIN_LOCK *)a1;
  if ( a1 < (unsigned __int64)MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, a1, 8uLL, 0LL);
  LOBYTE(a1) = 2;
  v2 = ViKeRaiseIrqlSanityChecks(a1, ((unsigned int)MmVerifierData >> 17) & 1);
  v3 = pXdvKeAcquireSpinLockRaiseToDpc(v1);
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return v3;
}
