/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1800EE92C
 * Callers:
 *     RtlRemoteCall @ 0x1800E74C0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpControlFlowGuardEnforced()
{
  return LdrSystemDllInitBlock.Wow64SharedInformation[9] != 0;
}
