/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14017F810
 * Callers:
 *     RtlAcquirePrivilege @ 0x1405484C0 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1405538A8 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14056DB04 (BiAdjustPrivilege.c)
 *     VfZwAdjustPrivilegesToken @ 0x140754D0C (VfZwAdjustPrivilegesToken.c)
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
