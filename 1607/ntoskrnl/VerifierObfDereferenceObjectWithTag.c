/*
 * XREFs of VerifierObfDereferenceObjectWithTag @ 0x14071CEB8
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObjectWithTag(unsigned __int64 a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return pXdvObfDereferenceObjectWithTag(a1, a2);
}
