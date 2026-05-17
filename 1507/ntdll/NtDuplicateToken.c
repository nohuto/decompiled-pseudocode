/*
 * XREFs of NtDuplicateToken @ 0x180093D20
 * Callers:
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlImpersonateSelfEx @ 0x18006E860 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x180070F24 (TppCritSetThread.c)
 *     RtlpTpInitializeData @ 0x18007CADC (RtlpTpInitializeData.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     <none>
 */

__int64 NtDuplicateToken()
{
  __int64 result; // rax

  result = 66LL;
  __asm { syscall; Low latency system call }
  return result;
}
