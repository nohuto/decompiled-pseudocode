/*
 * XREFs of ZwFreeUserPhysicalPages @ 0x1800946E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFreeUserPhysicalPages()
{
  __int64 result; // rax

  result = 222LL;
  __asm { syscall; Low latency system call }
  return result;
}
