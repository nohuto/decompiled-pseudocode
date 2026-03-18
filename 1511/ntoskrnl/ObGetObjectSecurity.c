/*
 * XREFs of ObGetObjectSecurity @ 0x1404C26D4
 * Callers:
 *     VerifierObGetObjectSecurity @ 0x1406D0B04 (VerifierObGetObjectSecurity.c)
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
