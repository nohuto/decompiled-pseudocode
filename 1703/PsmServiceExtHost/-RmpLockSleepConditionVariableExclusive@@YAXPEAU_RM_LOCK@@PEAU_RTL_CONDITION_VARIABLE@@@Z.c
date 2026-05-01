/*
 * XREFs of ?RmpLockSleepConditionVariableExclusive@@YAXPEAU_RM_LOCK@@PEAU_RTL_CONDITION_VARIABLE@@@Z @ 0x18002AC94
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001376C (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     RmpDestroyResourceManagerServer @ 0x18002A6E4 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpLockSleepConditionVariableExclusive(struct _RM_LOCK *a1, struct _RTL_CONDITION_VARIABLE *a2)
{
  *((_DWORD *)a1 + 2) = 0;
  RtlSleepConditionVariableSRW(a2, a1, 0LL, 0LL);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
}
