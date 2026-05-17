/*
 * XREFs of ZwConnectPort @ 0x180094290
 * Callers:
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 153LL;
  __asm { syscall; Low latency system call }
  return result;
}
