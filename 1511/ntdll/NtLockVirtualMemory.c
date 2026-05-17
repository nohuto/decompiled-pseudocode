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

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 255LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
