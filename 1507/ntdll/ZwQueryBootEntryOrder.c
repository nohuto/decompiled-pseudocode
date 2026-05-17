/*
 * XREFs of ZwQueryBootEntryOrder @ 0x180094B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryBootEntryOrder()
{
  __int64 result; // rax

  result = 296LL;
  __asm { syscall; Low latency system call }
  return result;
}
