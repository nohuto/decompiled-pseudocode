/*
 * XREFs of NtFlushInstructionCache @ 0x180094690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtFlushInstructionCache()
{
  __int64 result; // rax

  result = 217LL;
  __asm { syscall; Low latency system call }
  return result;
}
