/*
 * XREFs of IoClearDependency @ 0x14062AB14
 * Callers:
 *     <none>
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401CCF24 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401CD0E0 (PipFreeDependencyEdge.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1403F11B4 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F3058 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F3088 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1403F3B88 (PiGetProviderList.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1404CD828 (PipAddtoRebuildPowerRelationsQueue.c)
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
  __int64 v12; // rcx

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
      PipProcessRebuildPowerRelationsQueue(v12);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
