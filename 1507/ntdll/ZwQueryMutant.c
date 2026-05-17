/*
 * XREFs of ZwQueryMutant @ 0x180094CC0
 * Callers:
 *     PsspDumpObject_Mutant @ 0x180082D00 (PsspDumpObject_Mutant.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryMutant()
{
  __int64 result; // rax

  result = 316LL;
  __asm { syscall; Low latency system call }
  return result;
}
