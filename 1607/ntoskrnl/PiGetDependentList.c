/*
 * XREFs of PiGetDependentList @ 0x14048893C
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1403F12EC (PipNotifyDeviceDependencyList.c)
 *     PnpProcessDependencyRelations @ 0x140486338 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404864A4 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x1404865E8 (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x14048890C (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405682CC (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14062ABCC (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14062B704 (PnpGetDeviceDependencyList.c)
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
