/*
 * XREFs of NtRequestPort @ 0x180094ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  NTSTATUS result; // eax

  result = 349;
  __asm { syscall; Low latency system call }
  return result;
}
