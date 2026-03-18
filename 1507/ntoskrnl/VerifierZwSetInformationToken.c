/*
 * XREFs of VerifierZwSetInformationToken @ 0x140742624
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
