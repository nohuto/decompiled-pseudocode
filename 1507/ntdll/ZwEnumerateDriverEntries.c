/*
 * XREFs of ZwEnumerateDriverEntries @ 0x180094600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwEnumerateDriverEntries()
{
  __int64 result; // rax

  result = 208LL;
  __asm { syscall; Low latency system call }
  return result;
}
