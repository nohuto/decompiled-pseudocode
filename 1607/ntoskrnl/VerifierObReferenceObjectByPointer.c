/*
 * XREFs of VerifierObReferenceObjectByPointer @ 0x14071CDC8
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByPointer(unsigned __int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v8; // r9

  VfUtilCheckKernelAddress(a1, 8LL);
  if ( !*(_QWORD *)(a1 - 48) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, a1, 1uLL, 0LL);
  LOBYTE(v8) = a4;
  return pXdvObReferenceObjectByPointer(a1, a2, a3, v8);
}
