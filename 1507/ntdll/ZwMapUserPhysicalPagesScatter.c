/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x180093930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwMapUserPhysicalPagesScatter()
{
  __int64 result; // rax

  result = 3LL;
  __asm { syscall; Low latency system call }
  return result;
}
