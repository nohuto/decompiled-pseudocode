/*
 * XREFs of VerifierObfDereferenceObjectWithTag @ 0x1406D0D10
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

LONG_PTR __fastcall VerifierObfDereferenceObjectWithTag(PVOID Object, ULONG Tag)
{
  VfUtilCheckKernelAddress((unsigned __int64)Object, 8LL);
  return pXdvObfDereferenceObjectWithTag(Object, Tag);
}
