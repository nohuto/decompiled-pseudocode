/*
 * XREFs of IoDeleteAllDependencyRelations @ 0x1403F2DD8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x1403F2C78 (IopDeleteDevice.c)
 * Callees:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F22F0 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F41C4 (PnpReleaseDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140567D8C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x14062B078 (PipDeleteAllDependencyRelations.c)
 */

__int64 __fastcall IoDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL);
    if ( v3 )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(v2);
      PipDeleteAllDependencyRelations(v2);
    }
    PnpReleaseDependencyRelationsLock();
    if ( v3 )
      PipProcessRebuildPowerRelationsQueue(v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
