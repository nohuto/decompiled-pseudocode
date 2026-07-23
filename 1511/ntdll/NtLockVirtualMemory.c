/*
 * XREFs of NtLockVirtualMemory @ 0x1800A7090
 * Callers:
 *     RtlpModuleEnumeratorCallback @ 0x180001A00 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockMemoryZone @ 0x180001CE0 (RtlLockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180002390 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800024DC (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800DA390 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 255;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
