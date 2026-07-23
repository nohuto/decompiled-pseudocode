/*
 * XREFs of ZwQuerySemaphore @ 0x180094D30
 * Callers:
 *     PsspDumpObject_Semaphore @ 0x180082E70 (PsspDumpObject_Semaphore.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySemaphore(
        HANDLE SemaphoreHandle,
        SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
        PVOID SemaphoreInformation,
        ULONG SemaphoreInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 323;
  __asm { syscall; Low latency system call }
  return result;
}
