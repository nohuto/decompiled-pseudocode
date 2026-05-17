/*
 * XREFs of ZwAllocateUserPhysicalPages @ 0x180094010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAllocateUserPhysicalPages()
{
  __int64 result; // rax

  result = 113LL;
  __asm { syscall; Low latency system call }
  return result;
}
