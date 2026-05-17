/*
 * XREFs of ZwSetBootEntryOrder @ 0x180094FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetBootEntryOrder()
{
  __int64 result; // rax

  result = 364LL;
  __asm { syscall; Low latency system call }
  return result;
}
