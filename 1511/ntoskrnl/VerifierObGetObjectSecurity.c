/*
 * XREFs of VerifierObGetObjectSecurity @ 0x1406D0B04
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

NTSTATUS __fastcall VerifierObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  VfUtilCheckKernelAddress((unsigned __int64)Object, 8LL);
  return pXdvObGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated);
}
