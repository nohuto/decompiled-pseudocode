/*
 * XREFs of NtOpenProcessToken @ 0x1800A7390
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005DC30 (RtlpValidOwnerSubjectContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800614F4 (RtlpGetDefaultsSubjectContext.c)
 *     RtlAdjustPrivilege @ 0x180078F20 (RtlAdjustPrivilege.c)
 *     WerEscalationLazyInit @ 0x18008C318 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 279;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
