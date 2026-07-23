/*
 * XREFs of ZwImpersonateThread @ 0x1800947E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateThread(
        HANDLE ServerThreadHandle,
        HANDLE ClientThreadHandle,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos)
{
  NTSTATUS result; // eax

  result = 238;
  __asm { syscall; Low latency system call }
  return result;
}
