/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A8070
 * Callers:
 *     TppJobpRundownJob @ 0x18008156C (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x180081660 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 382LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
