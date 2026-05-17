/*
 * XREFs of NtAlpcConnectPort @ 0x180094050
 * Callers:
 *     SendMessageToWERService @ 0x180001D58 (SendMessageToWERService.c)
 *     RtlConnectToSm @ 0x180080910 (RtlConnectToSm.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcConnectPort()
{
  __int64 result; // rax

  result = 117LL;
  __asm { syscall; Low latency system call }
  return result;
}
