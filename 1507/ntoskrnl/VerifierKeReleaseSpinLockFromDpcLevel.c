/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x140748B00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x1401091F0 (KeReleaseSpinLockFromDpcLevel.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 */

void __fastcall VerifierKeReleaseSpinLockFromDpcLevel(KSPIN_LOCK *a1)
{
  unsigned __int8 CurrentIrql; // dl
  __int16 v3; // [rsp+30h] [rbp-8h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a1 < MmHighestUserAddress || a1 + 1 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  if ( (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u && (v3 & 0x200) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  }
  VfDeadlockReleaseResource(a1, 5LL, KeGetCurrentThread(), retaddr);
  pXdvKeReleaseSpinLockFromDpcLevel(a1);
}
