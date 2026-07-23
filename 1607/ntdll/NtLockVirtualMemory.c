/*
 * XREFs of NtLockVirtualMemory @ 0x1800A8430
 * Callers:
 *     RtlpModuleEnumeratorCallback @ 0x180001430 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockMemoryZone @ 0x180001A40 (RtlLockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180002270 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800023BC (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800E3100 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 257;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
