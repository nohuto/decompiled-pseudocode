/*
 * XREFs of ZwResetWriteWatch @ 0x180094EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwResetWriteWatch()
{
  __int64 result; // rax

  result = 351LL;
  __asm { syscall; Low latency system call }
  return result;
}
