/*
 * XREFs of VerifierObfDereferenceObject @ 0x14071CE94
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObject(unsigned __int64 a1)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return pXdvObfDereferenceObject(a1);
}
