/*
 * XREFs of ZwGetWriteWatch @ 0x1800947C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwGetWriteWatch()
{
  __int64 result; // rax

  result = 236LL;
  __asm { syscall; Low latency system call }
  return result;
}
