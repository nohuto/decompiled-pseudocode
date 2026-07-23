/*
 * XREFs of NtAlpcCancelMessage @ 0x180094040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  NTSTATUS result; // eax

  result = 116;
  __asm { syscall; Low latency system call }
  return result;
}
