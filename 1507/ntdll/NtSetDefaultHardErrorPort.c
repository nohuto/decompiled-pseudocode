/*
 * XREFs of NtSetDefaultHardErrorPort @ 0x180095010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  NTSTATUS result; // eax

  result = 369;
  __asm { syscall; Low latency system call }
  return result;
}
