/*
 * XREFs of ZwSetInformationToken @ 0x140181FD0
 * Callers:
 *     VerifierZwSetInformationToken @ 0x140742624 (VerifierZwSetInformationToken.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass, TokenInformation);
}
