/*
 * XREFs of ZwCreateKey @ 0x180093AD0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18000E020 (RtlpGetRegistryHandle.c)
 *     RXactpOpenTargetKey @ 0x18007E484 (RXactpOpenTargetKey.c)
 *     RtlpNtCreateKey @ 0x18007EF80 (RtlpNtCreateKey.c)
 *     RtlInitializeRXact @ 0x18007F4C0 (RtlInitializeRXact.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800D6C0C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     OpenOrCreateKeyWithFlags @ 0x1800F89D8 (OpenOrCreateKeyWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  __asm { syscall; Low latency system call }
  return result;
}
