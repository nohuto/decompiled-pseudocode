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

__int64 NtOpenProcessToken()
{
  __int64 result; // rax

  result = 276LL;
  __asm { syscall; Low latency system call }
  return result;
}
