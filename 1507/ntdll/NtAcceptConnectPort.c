/*
 * XREFs of NtAcceptConnectPort @ 0x180093920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAcceptConnectPort()
{
  __int64 result; // rax

  result = 2LL;
  __asm { syscall; Low latency system call }
  return result;
}
