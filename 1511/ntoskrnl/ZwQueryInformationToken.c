/*
 * XREFs of ZwQueryInformationToken @ 0x140150A40
 * Callers:
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403BD5A0 (RtlFormatCurrentUserKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140699A24 (_SysCtxRegOpenCurrentUserKey.c)
 *     VfZwQueryInformationToken @ 0x1406D38B8 (VfZwQueryInformationToken.c)
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
