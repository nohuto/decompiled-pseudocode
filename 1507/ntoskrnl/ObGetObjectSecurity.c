/*
 * XREFs of ObGetObjectSecurity @ 0x14055827C
 * Callers:
 *     VerifierObGetObjectSecurity @ 0x1407545D0 (VerifierObGetObjectSecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
