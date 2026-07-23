/*
 * XREFs of ZwSetValueKey @ 0x1800A5CB0
 * Callers:
 *     RtlApplyRXact @ 0x180086800 (RtlApplyRXact.c)
 *     RXactpCommit @ 0x180086924 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x180087D30 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180088F80 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlWriteRegistryValue @ 0x18008E240 (RtlWriteRegistryValue.c)
 *     RtlpNtSetValueKey @ 0x18008E320 (RtlpNtSetValueKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800DEA1C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
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
