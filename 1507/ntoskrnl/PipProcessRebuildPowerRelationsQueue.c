/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x1404E4488
 * Callers:
 *     IoResolveDependency @ 0x1401681EC (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404E3C7C (PnpNewDeviceNodeDependencyCheck.c)
 *     IoDeleteAllDependencyRelations @ 0x140534DB0 (IoDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoClearDependency @ 0x14067B624 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14067B6DC (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14067B858 (IoSetDependency.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404E16A0 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1404E22F4 (PiGetProviderList.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140554F58 (PipIsDeviceReadyForPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x1405B1AE4 (PipDereferenceDependencyNode.c)
 *     PiQueryPowerRelations @ 0x1405B3954 (PiQueryPowerRelations.c)
 *     PiEnumerateProviderListEntry @ 0x14067B90C (PiEnumerateProviderListEntry.c)
 */

__int64 PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // r11
  __int64 *v2; // rdi
  _QWORD *v3; // rsi
  __int64 *ProviderList; // r14
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 **v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  PnpAcquireDependencyRelationsLock(1);
LABEL_2:
  v0 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( v0 != &PiRebuildPowerRelationsQueue )
  {
    v2 = v0 - 9;
    v3 = (_QWORD *)*(v0 - 3);
    if ( !v3 )
    {
      v10 = *v0;
      v11 = (__int64 **)v2[10];
      if ( *(__int64 **)(*v0 + 8) != v0 || *v11 != v0 )
        __fastfail(3u);
      *v11 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      v0[1] = (__int64)v0;
      *v0 = (__int64)v0;
      PipDereferenceDependencyNode(v2);
      return PnpReleaseDependencyRelationsLock();
    }
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v2[6]) )
    {
      ProviderList = PiGetProviderList((__int64)v3);
      v5 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList == ProviderList )
      {
LABEL_8:
        v6 = v2 + 9;
        v7 = v2[9];
        v8 = (__int64 *)v2[10];
        if ( *(__int64 **)(v7 + 8) != v2 + 9 || (_QWORD *)*v8 != v6 )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        v2[10] = (__int64)(v2 + 9);
        *v6 = v6;
        PipDereferenceDependencyNode(v2);
        PnpReleaseDependencyRelationsLock();
        LOBYTE(v9) = 1;
        PiQueryPowerRelations(*(_QWORD *)(v3[39] + 40LL), v9);
        ObfDereferenceObject(v3);
        PnpAcquireDependencyRelationsLock(1);
        goto LABEL_2;
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v5, &v12, 0LL);
        if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v12) )
          break;
        v5 = (__int64 *)*v5;
        if ( v5 == ProviderList )
          goto LABEL_8;
      }
    }
  }
  return PnpReleaseDependencyRelationsLock();
}
