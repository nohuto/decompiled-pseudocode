/*
 * XREFs of VerifierObfReferenceObject @ 0x14071CEE8
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObfReferenceObject(unsigned __int64 a1)
{
  __int64 v2; // rbx

  VfUtilCheckKernelAddress(a1, 8LL);
  v2 = pXdvObfReferenceObject(a1);
  if ( v2 == 1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, a1, 1uLL, 0LL);
  return v2;
}
