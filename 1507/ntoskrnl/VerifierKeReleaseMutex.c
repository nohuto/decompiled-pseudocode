/*
 * XREFs of VerifierKeReleaseMutex @ 0x14074892C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 */

LONG __fastcall VerifierKeReleaseMutex(struct _KMUTANT *a1, BOOLEAN a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a1 < MmHighestUserAddress || &a1[1] < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 0x38uLL, 0LL);
  VfDeadlockReleaseResource(a1, 1LL, KeGetCurrentThread(), retaddr);
  return pXdvKeReleaseMutex(a1, a2);
}
