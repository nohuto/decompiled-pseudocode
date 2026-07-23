/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x140150E40
 * Callers:
 *     RtlAcquirePrivilege @ 0x1404B404C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1404BB858 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x1404FB56C (BiAdjustPrivilege.c)
 *     VfZwAdjustPrivilegesToken @ 0x1406D1144 (VfZwAdjustPrivilegesToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
