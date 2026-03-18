/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x14063E2CC
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140142CE0 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     <none>
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 268), 1);
}
