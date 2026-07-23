/*
 * XREFs of ZwCreateKey @ 0x1800A67C0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18005829C (RtlpGetRegistryHandle.c)
 *     RXactpOpenTargetKey @ 0x1800838E4 (RXactpOpenTargetKey.c)
 *     RtlInitializeRXact @ 0x18008D170 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D880 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpNtCreateKey @ 0x180090D70 (RtlpNtCreateKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7D0C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x180102C84 (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  NTSTATUS result; // eax

  result = 29;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
