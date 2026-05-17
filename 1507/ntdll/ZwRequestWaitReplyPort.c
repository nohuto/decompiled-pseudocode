/*
 * XREFs of ZwRequestWaitReplyPort @ 0x180093B20
 * Callers:
 *     CsrClientCallServer @ 0x180007C10 (CsrClientCallServer.c)
 * Callees:
 *     <none>
 */

__int64 ZwRequestWaitReplyPort()
{
  __int64 result; // rax

  result = 34LL;
  __asm { syscall; Low latency system call }
  return result;
}
