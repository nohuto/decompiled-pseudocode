/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1800939B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  NTSTATUS result; // eax

  result = 11;
  __asm { syscall; Low latency system call }
  return result;
}
