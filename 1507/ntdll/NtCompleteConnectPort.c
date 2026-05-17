/*
 * XREFs of NtCompleteConnectPort @ 0x180094270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCompleteConnectPort()
{
  __int64 result; // rax

  result = 151LL;
  __asm { syscall; Low latency system call }
  return result;
}
