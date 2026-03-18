/*
 * XREFs of VerifierKeReleaseMutant @ 0x140748824
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 */

LONG __fastcall VerifierKeReleaseMutant(struct _KMUTANT *a1, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a1 < MmHighestUserAddress || &a1[1] < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 0x38uLL, 0LL);
  VfDeadlockReleaseResource(a1, (unsigned int)(Abandoned != 0) + 1, KeGetCurrentThread(), retaddr);
  return pXdvKeReleaseMutant(a1, Increment, Abandoned, Wait);
}
