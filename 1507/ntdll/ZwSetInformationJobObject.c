/*
 * XREFs of ZwSetInformationJobObject @ 0x1800950B0
 * Callers:
 *     TppJobpRundownJob @ 0x18007A72C (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x18007A850 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 379LL;
  __asm { syscall; Low latency system call }
  return result;
}
