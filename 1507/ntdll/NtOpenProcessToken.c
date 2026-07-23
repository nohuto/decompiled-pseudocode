/*
 * XREFs of NtOpenProcessToken @ 0x180094A40
 * Callers:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18004A4F8 (RtlpValidOwnerSubjectContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18004E35C (RtlpGetDefaultsSubjectContext.c)
 *     RtlAdjustPrivilege @ 0x18006F4A0 (RtlAdjustPrivilege.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 *     WerEscalationLazyInit @ 0x1800C83D8 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 276;
  __asm { syscall; Low latency system call }
  return result;
}
