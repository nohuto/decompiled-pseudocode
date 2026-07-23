/*
 * XREFs of NtOpenProcessTokenEx @ 0x180093C00
 * Callers:
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlAcquirePrivilege @ 0x18006E600 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18006E860 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x180070F24 (TppCritSetThread.c)
 *     RtlpSysVolTakeOwnership @ 0x18007FC70 (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800C5250 (AVrfpAppendCurrentUserSid.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
