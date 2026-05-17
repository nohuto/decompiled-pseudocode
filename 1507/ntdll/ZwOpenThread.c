/*
 * XREFs of ZwOpenThread @ 0x180094A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwOpenThread()
{
  __int64 result; // rax

  result = 281LL;
  __asm { syscall; Low latency system call }
  return result;
}
