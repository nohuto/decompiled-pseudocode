/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1401CCF24
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1403F12EC (PipNotifyDeviceDependencyList.c)
 *     IoClearDependency @ 0x14062AB14 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14062ABCC (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14062ADD0 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14062ADFC (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14062B000 (PipCheckValidNewDependencyEdge.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B12C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14062B42C (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14062B704 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
