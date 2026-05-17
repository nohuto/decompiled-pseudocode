/*
 * XREFs of ZwManagePartition @ 0x1800948F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwManagePartition()
{
  __int64 result; // rax

  result = 255LL;
  __asm { syscall; Low latency system call }
  return result;
}
