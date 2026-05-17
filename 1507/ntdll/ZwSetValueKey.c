/*
 * XREFs of ZwSetValueKey @ 0x180093F00
 * Callers:
 *     RtlApplyRXact @ 0x18007E210 (RtlApplyRXact.c)
 *     RXactpCommit @ 0x18007E334 (RXactpCommit.c)
 *     RtlWriteRegistryValue @ 0x18007EE60 (RtlWriteRegistryValue.c)
 *     RtlpNtSetValueKey @ 0x18007EF00 (RtlpNtSetValueKey.c)
 *     RtlInitializeRXact @ 0x18007F4C0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800D6C0C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetValueKey()
{
  __int64 result; // rax

  result = 96LL;
  __asm { syscall; Low latency system call }
  return result;
}
