/*
 * XREFs of ZwQueryInformationToken @ 0x14015A0A0
 * Callers:
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F7A20 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle, *(_QWORD *)&TokenInformationClass, TokenInformation);
}
