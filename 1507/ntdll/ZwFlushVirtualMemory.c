/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800946C0
 * Callers:
 *     _ResCFlushMappedView @ 0x1800F9610 (_ResCFlushMappedView.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushVirtualMemory()
{
  __int64 result; // rax

  result = 220LL;
  __asm { syscall; Low latency system call }
  return result;
}
