/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1800A6C40
 * Callers:
 *     RtlAdjustPrivilege @ 0x18007B980 (RtlAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x18007D350 (RtlAcquirePrivilege.c)
 *     TppCritSetThread @ 0x1800810C0 (TppCritSetThread.c)
 *     RtlReleasePrivilege @ 0x180087820 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x1800880E0 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x18008B688 (RtlpSysVolTakeOwnership.c)
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
