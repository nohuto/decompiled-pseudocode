/*
 * XREFs of ZwReplyWaitReceivePortEx @ 0x180093BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 43;
  __asm { syscall; Low latency system call }
  return result;
}
