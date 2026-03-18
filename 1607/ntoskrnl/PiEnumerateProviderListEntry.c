/*
 * XREFs of PiEnumerateProviderListEntry @ 0x14062AD48
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F22F0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1403F4C84 (PipCheckForUnsatisfiedDependencies.c)
 *     IopSortRelationListForRemove @ 0x1404C49D0 (IopSortRelationListForRemove.c)
 *     PiQueryPowerDependencyRelations @ 0x140570DD4 (PiQueryPowerDependencyRelations.c)
 *     IopCheckIfMergeRequired @ 0x14064B8D0 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401CD0D8 (PiListEntryToDependencyEdge.c)
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
