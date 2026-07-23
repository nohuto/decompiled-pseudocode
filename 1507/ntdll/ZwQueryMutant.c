/*
 * XREFs of ZwQueryMutant @ 0x180094CC0
 * Callers:
 *     PsspDumpObject_Mutant @ 0x180082D00 (PsspDumpObject_Mutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG MutantInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 316;
  __asm { syscall; Low latency system call }
  return result;
}
