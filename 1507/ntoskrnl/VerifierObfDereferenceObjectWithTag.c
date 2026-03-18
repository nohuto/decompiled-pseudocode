/*
 * XREFs of VerifierObfDereferenceObjectWithTag @ 0x14075486C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

LONG_PTR __fastcall VerifierObfDereferenceObjectWithTag(char *a1, ULONG Tag)
{
  if ( a1 < MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  return pXdvObfDereferenceObjectWithTag(a1, Tag);
}
