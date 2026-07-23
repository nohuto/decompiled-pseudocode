/*
 * XREFs of NtGetNextProcess @ 0x180094780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  NTSTATUS result; // eax

  result = 232;
  __asm { syscall; Low latency system call }
  return result;
}
