/*
 * XREFs of PiGetDependentList @ 0x14046145C
 * Callers:
 *     PipAttemptDependentsStart @ 0x14046142C (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x1404E3C20 (PipNotifyDeviceDependencyList.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140534A94 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x140535864 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140535B08 (PnpProcessDependencyRelations.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405B19A4 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14067B6DC (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 32);
  else
    return &PiDependencyNodeEmptyList;
}
