/*
 * XREFs of RtlpControlFlowGuardEnforced @ 0x1800EAA80
 * Callers:
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpControlFlowGuardEnforced()
{
  return qword_1801572F0 != 0;
}
