/*
 * XREFs of ZwCreateIRTimer @ 0x1800942F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateIRTimer()
{
  __int64 result; // rax

  result = 159LL;
  __asm { syscall; Low latency system call }
  return result;
}
