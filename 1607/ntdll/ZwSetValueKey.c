/*
 * XREFs of ZwSetValueKey @ 0x1800A7010
 * Callers:
 *     RXactpCommit @ 0x1800837A4 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008D180 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlApplyRXact @ 0x18008E290 (RtlApplyRXact.c)
 *     RtlWriteRegistryValue @ 0x180090CB0 (RtlWriteRegistryValue.c)
 *     RtlpNtSetValueKey @ 0x180090D50 (RtlpNtSetValueKey.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D29E0 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800E7C4C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetValueKey()
{
  __int64 result; // rax

  result = 96LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
