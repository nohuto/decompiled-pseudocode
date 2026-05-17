/*
 * XREFs of ZwSetLdtEntries @ 0x180095170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetLdtEntries()
{
  __int64 result; // rax

  result = 391LL;
  __asm { syscall; Low latency system call }
  return result;
}
