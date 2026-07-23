/*
 * XREFs of ZwSetInformationToken @ 0x140153660
 * Callers:
 *     VerifierZwSetInformationToken @ 0x1406C0DE4 (VerifierZwSetInformationToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
