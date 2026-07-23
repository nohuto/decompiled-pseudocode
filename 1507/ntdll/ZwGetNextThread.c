/*
 * XREFs of ZwGetNextThread @ 0x180094790
 * Callers:
 *     PsspCaptureThreadInformation @ 0x180082EEC (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  NTSTATUS result; // eax

  result = 233;
  __asm { syscall; Low latency system call }
  return result;
}
