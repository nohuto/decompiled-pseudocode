/*
 * XREFs of PiGetProviderList @ 0x140458F10
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x140455F90 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140458ED0 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x14049F054 (IopSortRelationListForRemove.c)
 *     PipNotifyDeviceDependencyList @ 0x1404EEF84 (PipNotifyDeviceDependencyList.c)
 *     PiQueryPowerDependencyRelations @ 0x14053EB5C (PiQueryPowerDependencyRelations.c)
 *     IoClearDependency @ 0x140600A14 (IoClearDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 *     IopCheckIfMergeRequired @ 0x140616EAC (IopCheckIfMergeRequired.c)
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
