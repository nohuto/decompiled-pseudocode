/*
 * XREFs of ZwReleaseSemaphore @ 0x1800A5200
 * Callers:
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x18006F520 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x1800820E0 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseSemaphore()
{
  __int64 result; // rax

  result = 10LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
