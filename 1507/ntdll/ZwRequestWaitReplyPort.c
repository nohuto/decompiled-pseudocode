/*
 * XREFs of ZwRequestWaitReplyPort @ 0x180093B20
 * Callers:
 *     CsrClientCallServer @ 0x180007C10 (CsrClientCallServer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  NTSTATUS result; // eax

  result = 34;
  __asm { syscall; Low latency system call }
  return result;
}
