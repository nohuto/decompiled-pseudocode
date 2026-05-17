/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1800A61B0
 * Callers:
 *     SendMessageToWERService @ 0x180002C98 (SendMessageToWERService.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18007C21C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x180088E10 (RtlSendMsgToSm.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 136LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
