/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A9AF0
 * Callers:
 *     RtlLockMemoryZone @ 0x180001A40 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180001C70 (RtlUnlockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180001EA0 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180002270 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180002330 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180002430 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 439;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
