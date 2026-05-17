/*
 * XREFs of ZwYieldExecution @ 0x180093D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwYieldExecution()
{
  __int64 result; // rax

  result = 70LL;
  __asm { syscall; Low latency system call }
  return result;
}
