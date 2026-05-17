/*
 * XREFs of ZwCreatePartition @ 0x1800943A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreatePartition()
{
  __int64 result; // rax

  result = 170LL;
  __asm { syscall; Low latency system call }
  return result;
}
