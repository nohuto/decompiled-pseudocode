/*
 * XREFs of VerifierObReleaseObjectSecurity @ 0x14075481C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  pXdvObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
}
