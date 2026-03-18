/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14067B90C
 * Callers:
 *     PipCheckForUnsatisfiedDependencies @ 0x1404E22B4 (PipCheckForUnsatisfiedDependencies.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404E4488 (PipProcessRebuildPowerRelationsQueue.c)
 *     IopSortRelationListForRemove @ 0x1405356C4 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x1405B3CE0 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x14069574C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FA3A8 (PiListEntryToDependencyEdge.c)
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
