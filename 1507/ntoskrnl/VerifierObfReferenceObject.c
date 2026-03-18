/*
 * XREFs of VerifierObfReferenceObject @ 0x1407548C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

LONG_PTR __fastcall VerifierObfReferenceObject(char *a1)
{
  LONG_PTR v2; // rdi

  if ( a1 < MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  v2 = pXdvObfReferenceObject(a1);
  if ( v2 == 1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, (ULONG_PTR)a1, 1uLL, 0LL);
  return v2;
}
