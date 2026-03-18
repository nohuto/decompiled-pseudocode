/*
 * XREFs of VerifierZwSetInformationToken @ 0x1406C0DE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  return pXdvZwSetInformationToken(TokenHandle, TokenInformationClass, TokenInformation, TokenInformationLength);
}
