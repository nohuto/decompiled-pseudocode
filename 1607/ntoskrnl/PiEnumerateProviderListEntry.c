/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14062ADFC
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F11B4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1403F3B48 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x1404863A8 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x140571314 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x14064B9B4 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401CCF24 (PiListEntryToDependencyEdge.c)
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
