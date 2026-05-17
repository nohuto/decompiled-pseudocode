/*
 * XREFs of ZwCreateKey @ 0x1800A67C0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x1800582AC (RtlpGetRegistryHandle.c)
 *     RXactpOpenTargetKey @ 0x1800838F4 (RXactpOpenTargetKey.c)
 *     RtlInitializeRXact @ 0x18008D180 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpNtCreateKey @ 0x180090D80 (RtlpNtCreateKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7C4C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x180102D44 (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
