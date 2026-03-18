/*
 * XREFs of PiGetProviderList @ 0x1403F4CC4
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F22F0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipNotifyDeviceDependencyList @ 0x1403F2428 (PipNotifyDeviceDependencyList.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1403F4C84 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x1404C49D0 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x140570DD4 (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x14062AA60 (IoClearDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x14064B8D0 (IopCheckIfMergeRequired.c)
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
