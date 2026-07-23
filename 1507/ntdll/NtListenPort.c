/*
 * XREFs of NtListenPort @ 0x180094840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  NTSTATUS result; // eax

  result = 244;
  __asm { syscall; Low latency system call }
  return result;
}
