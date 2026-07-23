/*
 * XREFs of VerifierObfReferenceObjectWithTag @ 0x14071CF3C
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfReferenceObjectWithTag(unsigned __int64 a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return pXdvObfReferenceObjectWithTag(a1, a2);
}
