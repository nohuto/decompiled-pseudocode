/*
 * XREFs of ZwSetInformationJobObject @ 0x1800950B0
 * Callers:
 *     TppJobpRundownJob @ 0x18007A72C (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x18007A850 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 379;
  __asm { syscall; Low latency system call }
  return result;
}
