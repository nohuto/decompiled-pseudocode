/*
 * XREFs of NtOpenProcessTokenEx @ 0x1800A56C0
 * Callers:
 *     TppCritSetThread @ 0x18000A380 (TppCritSetThread.c)
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlAcquirePrivilege @ 0x180078990 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078BF0 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x1800878F4 (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800CE580 (AVrfpAppendCurrentUserSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
