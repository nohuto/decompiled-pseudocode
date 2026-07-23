/*
 * XREFs of ZwSetValueKey @ 0x1800A7010
 * Callers:
 *     RXactpCommit @ 0x180083794 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008D170 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D880 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlApplyRXact @ 0x18008E280 (RtlApplyRXact.c)
 *     RtlWriteRegistryValue @ 0x180090CA0 (RtlWriteRegistryValue.c)
 *     RtlpNtSetValueKey @ 0x180090D40 (RtlpNtSetValueKey.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2AA0 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7D0C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
