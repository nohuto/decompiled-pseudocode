/*
 * XREFs of VerifierSeDeassignSecurity @ 0x1406C0CDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierSeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  return pXdvSeDeassignSecurity(SecurityDescriptor);
}
