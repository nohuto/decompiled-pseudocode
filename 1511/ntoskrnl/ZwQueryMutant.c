/*
 * XREFs of ZwQueryMutant @ 0x140152E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle, *(_QWORD *)&MutantInformationClass, MutantInformation);
}
