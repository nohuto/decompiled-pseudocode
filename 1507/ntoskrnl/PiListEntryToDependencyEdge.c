/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1401FA3A8
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1404E3C20 (PipNotifyDeviceDependencyList.c)
 *     IoClearDependency @ 0x14067B624 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14067B6DC (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14067B8E0 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14067B90C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14067BB10 (PipCheckValidNewDependencyEdge.c)
 *     PipDeleteAllDependencyRelations @ 0x14067BC3C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x14067BF3C (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
