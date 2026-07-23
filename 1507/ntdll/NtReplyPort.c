/*
 * XREFs of NtReplyPort @ 0x1800939C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  NTSTATUS result; // eax

  result = 12;
  __asm { syscall; Low latency system call }
  return result;
}
