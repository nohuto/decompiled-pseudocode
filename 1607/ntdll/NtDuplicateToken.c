/*
 * XREFs of NtDuplicateToken @ 0x1800A6C60
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     RtlpTpInitializeData @ 0x180064D04 (RtlpTpInitializeData.c)
 *     RtlImpersonateSelfEx @ 0x18007D5C0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800810D0 (TppCritSetThread.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 * Callees:
 *     <none>
 */

__int64 NtDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
