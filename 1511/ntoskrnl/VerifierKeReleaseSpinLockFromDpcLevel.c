/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x1406C650C
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 */

void __fastcall VerifierKeReleaseSpinLockFromDpcLevel(KSPIN_LOCK *a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v3; // [rsp+30h] [rbp-8h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  if ( (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u && (v3 & 0x200) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  }
  VfDeadlockReleaseResource(a1, 5LL, KeGetCurrentThread(), retaddr);
  pXdvKeReleaseSpinLockFromDpcLevel(a1);
}
