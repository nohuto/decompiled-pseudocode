/*
 * XREFs of NtFreezeRegistry @ 0x1800946F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtFreezeRegistry()
{
  __int64 result; // rax

  result = 223LL;
  __asm { syscall; Low latency system call }
  return result;
}
