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

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 252;
  __asm { syscall; Low latency system call }
  return result;
}
