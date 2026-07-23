/*
 * XREFs of NtAlpcDisconnectPort @ 0x180094100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcDisconnectPort(HANDLE PortHandle, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 128;
  __asm { syscall; Low latency system call }
  return result;
}
