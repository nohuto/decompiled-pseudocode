/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x1406BEBA4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     <none>
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 268), 1);
}
