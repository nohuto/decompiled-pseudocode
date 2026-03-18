/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x1404EEF84
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404EEF24 (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401BEB40 (PiListEntryToDependencyEdge.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x140458F10 (PiGetProviderList.c)
 *     PiGetDependentList @ 0x14049F368 (PiGetDependentList.c)
 *     PipNotifyDependenciesChanged @ 0x1406014D0 (PipNotifyDependenciesChanged.c)
 */

__int64 __fastcall PipNotifyDeviceDependencyList(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 *DependentList; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  PnpAcquireDependencyRelationsLock(0);
  if ( a2 )
  {
    if ( a2 != 1 )
      return PnpReleaseDependencyRelationsLock();
    DependentList = PiGetDependentList(v2);
  }
  else
  {
    DependentList = PiGetProviderList(v2);
  }
  v5 = (__int64 *)*DependentList;
  v6 = DependentList;
  while ( v5 != v6 )
  {
    v8 = PiListEntryToDependencyEdge((__int64)v5, a2);
    v5 = (__int64 *)*v5;
    if ( a2 )
    {
      v10 = *(_QWORD *)(v8 + 40);
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 32);
      v10 = 0LL;
    }
    PipNotifyDependenciesChanged(v10, v9);
  }
  return PnpReleaseDependencyRelationsLock();
}
