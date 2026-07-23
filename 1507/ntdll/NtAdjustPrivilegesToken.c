/*
 * XREFs of NtAdjustPrivilegesToken @ 0x180093D10
 * Callers:
 *     RtlAcquirePrivilege @ 0x18006E600 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x18006F4A0 (RtlAdjustPrivilege.c)
 *     TppCritSetThread @ 0x180070F24 (TppCritSetThread.c)
 *     RtlReleasePrivilege @ 0x1800774D0 (RtlReleasePrivilege.c)
 *     RtlpSysVolTakeOwnership @ 0x18007FC70 (RtlpSysVolTakeOwnership.c)
 *     RtlRemovePrivileges @ 0x18007FEF0 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 65;
  __asm { syscall; Low latency system call }
  return result;
}
