/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x180093FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAllocateLocallyUniqueId()
{
  __int64 result; // rax

  result = 111LL;
  __asm { syscall; Low latency system call }
  return result;
}
