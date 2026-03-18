/*
 * XREFs of PipNotifyDeviceDependencyList @ 0x1404E3C20
 * Callers:
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404E3C7C (PnpNewDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FA3A8 (PiListEntryToDependencyEdge.c)
 *     PiGetDependentList @ 0x14046145C (PiGetDependentList.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1404E22F4 (PiGetProviderList.c)
 *     PipNotifyDependenciesChanged @ 0x14067C0E0 (PipNotifyDependenciesChanged.c)
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
