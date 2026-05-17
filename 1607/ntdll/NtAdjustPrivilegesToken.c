/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1800A6C40
 * Callers:
 *     RtlAdjustPrivilege @ 0x18007B990 (RtlAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x18007D360 (RtlAcquirePrivilege.c)
 *     TppCritSetThread @ 0x1800810D0 (TppCritSetThread.c)
 *     RtlReleasePrivilege @ 0x180087830 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x1800880F0 (RtlRemovePrivileges.c)
 *     RtlpSysVolTakeOwnership @ 0x18008B698 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
