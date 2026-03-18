/*
 * XREFs of VerifierSeDeassignSecurity @ 0x14074251C
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
