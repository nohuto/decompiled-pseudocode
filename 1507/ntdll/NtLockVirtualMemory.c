/*
 * XREFs of NtLockVirtualMemory @ 0x1800948C0
 * Callers:
 *     RtlLockMemoryZone @ 0x180075370 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x180075980 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180077EF0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x18007803C (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800D1E70 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 252LL;
  __asm { syscall; Low latency system call }
  return result;
}
