/*
 * XREFs of ZwQueryInformationToken @ 0x14017F410
 * Callers:
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404FF914 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140719880 (_SysCtxRegOpenCurrentUserKey.c)
 *     VfZwQueryInformationToken @ 0x140757480 (VfZwQueryInformationToken.c)
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
