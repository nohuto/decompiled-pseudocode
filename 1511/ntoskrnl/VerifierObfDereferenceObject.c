/*
 * XREFs of VerifierObfDereferenceObject @ 0x1406D0CEC
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

LONG_PTR __fastcall VerifierObfDereferenceObject(PVOID Object)
{
  VfUtilCheckKernelAddress((unsigned __int64)Object, 8LL);
  return pXdvObfDereferenceObject(Object);
}
