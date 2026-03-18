/*
 * XREFs of PopSqmThermalCriticalShutdown @ 0x140676A40
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140146EF4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     <none>
 */

char __fastcall PopSqmThermalCriticalShutdown(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 268), 1);
}
