/*
 * XREFs of PopSqmThermalHibernate @ 0x140676A54
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140146EF4 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     <none>
 */

char __fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 316), 0);
}
