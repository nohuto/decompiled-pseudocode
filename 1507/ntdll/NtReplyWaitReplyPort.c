/*
 * XREFs of NtReplyWaitReplyPort @ 0x180094EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  NTSTATUS result; // eax

  result = 348;
  __asm { syscall; Low latency system call }
  return result;
}
