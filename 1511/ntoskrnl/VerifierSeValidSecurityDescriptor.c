/*
 * XREFs of VerifierSeValidSecurityDescriptor @ 0x1406C0D0C
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
