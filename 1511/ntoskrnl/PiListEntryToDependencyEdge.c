/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1401BEB40
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1404EEF84 (PipNotifyDeviceDependencyList.c)
 *     IoClearDependency @ 0x140600A14 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x140600ACC (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x140600CD0 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140600CFC (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140600F00 (PipCheckValidNewDependencyEdge.c)
 *     PipDeleteAllDependencyRelations @ 0x14060102C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14060132C (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
