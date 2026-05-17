/*
 * XREFs of ZwQueryInformationTransaction @ 0x180094C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationTransaction()
{
  __int64 result; // rax

  result = 308LL;
  __asm { syscall; Low latency system call }
  return result;
}
