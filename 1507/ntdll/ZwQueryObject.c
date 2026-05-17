/*
 * XREFs of ZwQueryObject @ 0x180093A00
 * Callers:
 *     PsspWalkHandleTable @ 0x180082740 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryObject()
{
  __int64 result; // rax

  result = 16LL;
  __asm { syscall; Low latency system call }
  return result;
}
