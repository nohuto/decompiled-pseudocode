/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800953E0
 * Callers:
 *     RtlLockMemoryZone @ 0x180075370 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180075510 (RtlUnlockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180077EF0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180077FB0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x1800780B0 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 430;
  __asm { syscall; Low latency system call }
  return result;
}
