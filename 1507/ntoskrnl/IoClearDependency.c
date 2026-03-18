/*
 * XREFs of IoClearDependency @ 0x14067B624
 * Callers:
 *     <none>
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FA3A8 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401FA5B0 (PipFreeDependencyEdge.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404E16A0 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1404E22F4 (PiGetProviderList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404E4488 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140554ED8 (PipAddtoRebuildPowerRelationsQueue.c)
 */

__int64 __fastcall IoClearDependency(__int64 a1, __int64 a2)
{
  char v4; // bp
  unsigned int v5; // ebx
  __int64 *ProviderList; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 *v10; // r8
  char *v11; // r14

  if ( a1 && a2 )
  {
    v4 = 0;
    v5 = -1073741811;
    PnpAcquireDependencyRelationsLock(1);
    ProviderList = PiGetProviderList(a1);
    v7 = *ProviderList;
    if ( (__int64 *)*ProviderList != ProviderList )
    {
      while ( 1 )
      {
        v8 = PiListEntryToDependencyEdge(v7, 0);
        v7 = *v10;
        v11 = (char *)v8;
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 32) + 48LL) == a2 )
          break;
        if ( v7 == v9 )
          goto LABEL_8;
      }
      v4 = 1;
      PipAddtoRebuildPowerRelationsQueue(a1);
      PipFreeDependencyEdge(v11, 0LL);
      v5 = 0;
    }
LABEL_8:
    PnpReleaseDependencyRelationsLock();
    if ( v4 )
      PipProcessRebuildPowerRelationsQueue();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
