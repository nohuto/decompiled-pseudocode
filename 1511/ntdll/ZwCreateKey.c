/*
 * XREFs of ZwCreateKey @ 0x1800A5460
 * Callers:
 *     RtlpGetRegistryHandle @ 0x180046F68 (RtlpGetRegistryHandle.c)
 *     RXactpOpenTargetKey @ 0x180086A74 (RXactpOpenTargetKey.c)
 *     RtlInitializeRXact @ 0x180087D30 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180088F80 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpNtCreateKey @ 0x18008E350 (RtlpNtCreateKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800DEA1C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x1800F83B0 (OpenOrCreateKeyWithFlags.c)
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
