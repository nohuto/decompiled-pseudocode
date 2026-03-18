/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x14015A4A0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1404DBF50 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1404E5400 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x14053BDE0 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(TokenHandle, DisableAllPrivileges, NewState);
}
