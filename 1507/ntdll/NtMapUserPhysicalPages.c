/*
 * XREFs of NtMapUserPhysicalPages @ 0x180094910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtMapUserPhysicalPages()
{
  __int64 result; // rax

  result = 257LL;
  __asm { syscall; Low latency system call }
  return result;
}
