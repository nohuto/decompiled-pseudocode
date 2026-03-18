/*
 * XREFs of PiEnumerateProviderListEntry @ 0x140600CFC
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x140455F90 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140458ED0 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x14049F054 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x14053EB5C (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x140616EAC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401BEB40 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateProviderListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 0);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
