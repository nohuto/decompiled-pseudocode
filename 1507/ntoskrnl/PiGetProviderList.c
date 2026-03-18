/*
 * XREFs of PiGetProviderList @ 0x1404E22F4
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1404E22B4 (PipCheckForUnsatisfiedDependencies.c)
 *     PipNotifyDeviceDependencyList @ 0x1404E3C20 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404E4488 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1405356C4 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1405B3CE0 (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x14067B624 (IoClearDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x14069574C (IopCheckIfMergeRequired.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetProviderList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 16);
  else
    return &PiDependencyNodeEmptyList;
}
