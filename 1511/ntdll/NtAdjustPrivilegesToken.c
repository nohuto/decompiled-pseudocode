/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1800A58E0
 * Callers:
 *     TppCritSetThread @ 0x18000A380 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x180078990 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x180078F20 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x180082A10 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x180083C80 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x1800878F4 (RtlpSysVolTakeOwnership.c)
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
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
