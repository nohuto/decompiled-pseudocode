/*
 * XREFs of HUBPSM20_CheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect @ 0x1C000EFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_CheckIfThereIsAPortChangeOnPortStatusWhileWaitingForReconnect(__int64 a1)
{
  return HUBHTX_CheckAndSelectIfAny20PortChangeSet(*(_QWORD *)(a1 + 960));
}
