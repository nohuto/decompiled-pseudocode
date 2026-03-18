/*
 * XREFs of VerifierObGetObjectSecurity @ 0x1407545D0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

NTSTATUS __fastcall VerifierObGetObjectSecurity(
        char *a1,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  if ( a1 < MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  return pXdvObGetObjectSecurity(a1, SecurityDescriptor, MemoryAllocated);
}
