/*
 * XREFs of NtOpenThreadToken @ 0x180093B40
 * Callers:
 *     RtlAdjustPrivilege @ 0x18006F4A0 (RtlAdjustPrivilege.c)
 *     RtlpTpRevertCapture @ 0x18007CB50 (RtlpTpRevertCapture.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 *     BaseGetNamedObjectDirectory @ 0x1800F8BA8 (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 36;
  __asm { syscall; Low latency system call }
  return result;
}
