/*
 * XREFs of VerifierObReleaseObjectSecurity @ 0x1406D0CE4
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
