/*
 * XREFs of NtOpenProcessToken @ 0x1800A8730
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x18006B014 (RtlpGetDefaultsSubjectContext.c)
 *     RtlAdjustPrivilege @ 0x18007B990 (RtlAdjustPrivilege.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 *     WerEscalationLazyInit @ 0x1800D91C8 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 281LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
