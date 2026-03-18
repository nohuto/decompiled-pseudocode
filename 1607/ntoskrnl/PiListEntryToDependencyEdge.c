/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1401CD0D8
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1403F2428 (PipNotifyDeviceDependencyList.c)
 *     IoClearDependency @ 0x14062AA60 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14062AB18 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14062AD1C (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14062AD48 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14062AF4C (PipCheckValidNewDependencyEdge.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B078 (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14062B378 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
