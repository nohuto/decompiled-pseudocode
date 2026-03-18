/*
 * XREFs of VerifierObfReferenceObjectWithTag @ 0x140754938
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

LONG_PTR __fastcall VerifierObfReferenceObjectWithTag(char *a1, ULONG Tag)
{
  if ( a1 < MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  return pXdvObfReferenceObjectWithTag(a1, Tag);
}
