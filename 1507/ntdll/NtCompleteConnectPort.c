/*
 * XREFs of NtCompleteConnectPort @ 0x180094270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompleteConnectPort(HANDLE PortHandle)
{
  NTSTATUS result; // eax

  result = 151;
  __asm { syscall; Low latency system call }
  return result;
}
