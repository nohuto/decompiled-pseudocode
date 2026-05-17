/*
 * XREFs of NtOpenProcessTokenEx @ 0x1800A6A20
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlAcquirePrivilege @ 0x18007D360 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007D5C0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800810D0 (TppCritSetThread.c)
 *     RtlpSysVolTakeOwnership @ 0x18008B698 (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800D64D0 (AVrfpAppendCurrentUserSid.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcessTokenEx()
{
  __int64 result; // rax

  result = 48LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
