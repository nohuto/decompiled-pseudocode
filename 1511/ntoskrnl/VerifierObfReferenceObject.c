/*
 * XREFs of VerifierObfReferenceObject @ 0x1406D0D40
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

LONG_PTR __fastcall VerifierObfReferenceObject(void *a1)
{
  LONG_PTR v2; // rbx

  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  v2 = pXdvObfReferenceObject(a1);
  if ( v2 == 1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, (ULONG_PTR)a1, 1uLL, 0LL);
  return v2;
}
