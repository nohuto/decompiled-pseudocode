/*
 * XREFs of NtLockVirtualMemory @ 0x1800A8430
 * Callers:
 *     RtlpModuleEnumeratorCallback @ 0x180001430 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockMemoryZone @ 0x180001A40 (RtlLockMemoryZone.c)
 *     RtlLockCurrentThread @ 0x180002270 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x1800023BC (RtlpLockStack.c)
 *     RtlExtendMemoryZone @ 0x1800E3040 (RtlExtendMemoryZone.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 257LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
