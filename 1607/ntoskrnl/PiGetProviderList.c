/*
 * XREFs of PiGetProviderList @ 0x1403F3B88
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F11B4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x1403F12EC (PipNotifyDeviceDependencyList.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1403F3B48 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x1404863A8 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x140571314 (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x14062AB14 (IoClearDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14062B704 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x14064B9B4 (IopCheckIfMergeRequired.c)
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
