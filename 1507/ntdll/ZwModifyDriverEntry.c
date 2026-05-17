/*
 * XREFs of ZwModifyDriverEntry @ 0x180094930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwModifyDriverEntry()
{
  __int64 result; // rax

  result = 259LL;
  __asm { syscall; Low latency system call }
  return result;
}
