/*
 * XREFs of ZwQueryDirectoryObject @ 0x180094BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryDirectoryObject()
{
  __int64 result; // rax

  result = 299LL;
  __asm { syscall; Low latency system call }
  return result;
}
