/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A86D0
 * Callers:
 *     RtlLockMemoryZone @ 0x180001CE0 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180001F10 (RtlUnlockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x180002140 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180002390 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180002450 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180002550 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnlockVirtualMemory()
{
  __int64 result; // rax

  result = 433LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
