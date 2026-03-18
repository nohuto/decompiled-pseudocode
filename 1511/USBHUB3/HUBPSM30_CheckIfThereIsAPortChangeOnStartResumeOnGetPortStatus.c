/*
 * XREFs of HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus @ 0x1C000F0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckIfThereIsAPortChangeOnStartResumeOnGetPortStatus(__int64 a1)
{
  return HUBHTX_CheckAndSelectIfAny30PortChangeSet(*(_QWORD *)(a1 + 960));
}
