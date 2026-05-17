/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x180094180
 * Callers:
 *     SendMessageToWERService @ 0x180001D58 (SendMessageToWERService.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C3A4 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x180080AA0 (RtlSendMsgToSm.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 136LL;
  __asm { syscall; Low latency system call }
  return result;
}
