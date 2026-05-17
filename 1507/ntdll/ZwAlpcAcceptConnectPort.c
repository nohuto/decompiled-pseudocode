/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x180094030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlpcAcceptConnectPort()
{
  __int64 result; // rax

  result = 115LL;
  __asm { syscall; Low latency system call }
  return result;
}
