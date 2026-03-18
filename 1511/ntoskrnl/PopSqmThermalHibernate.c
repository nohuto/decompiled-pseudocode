/*
 * XREFs of PopSqmThermalHibernate @ 0x14063E2E0
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140142CE0 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     <none>
 */

char __fastcall PopSqmThermalHibernate(__int64 a1)
{
  return PopSqmThermalCriticalEvent(a1, *(_DWORD *)(a1 + 316), 0);
}
