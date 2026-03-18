/*
 * XREFs of VerifierObfReferenceObjectWithTag @ 0x1406D0D94
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

LONG_PTR __fastcall VerifierObfReferenceObjectWithTag(PVOID Object, ULONG Tag)
{
  VfUtilCheckKernelAddress((unsigned __int64)Object, 8LL);
  return pXdvObfReferenceObjectWithTag(Object, Tag);
}
