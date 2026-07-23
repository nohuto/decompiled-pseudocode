/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1800EAA80
 * Callers:
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpControlFlowGuardEnforced()
{
  return LdrSystemDllInitBlock.Wow64SharedInformation[9] != 0;
}
