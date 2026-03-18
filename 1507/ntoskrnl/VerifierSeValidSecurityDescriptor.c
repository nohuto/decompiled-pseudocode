/*
 * XREFs of VerifierSeValidSecurityDescriptor @ 0x14074254C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierSeValidSecurityDescriptor(ULONG Length, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  return pXdvSeValidSecurityDescriptor(Length, SecurityDescriptor);
}
