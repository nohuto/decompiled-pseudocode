/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x1403F22F0
 * Callers:
 *     IoResolveDependency @ 0x1401428E4 (IoResolveDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1403F23C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     IoDeleteAllDependencyRelations @ 0x1403F2DD8 (IoDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoClearDependency @ 0x14062AA60 (IoClearDependency.c)
 *     IoDuplicateDependency @ 0x14062AB18 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14062AC94 (IoSetDependency.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F41C4 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1403F4CC4 (PiGetProviderList.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x1404EB820 (PipIsDeviceReadyForPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x140567ECC (PipDereferenceDependencyNode.c)
 *     PiQueryPowerRelations @ 0x140570A48 (PiQueryPowerRelations.c)
 *     PiEnumerateProviderListEntry @ 0x14062AD48 (PiEnumerateProviderListEntry.c)
 */

__int64 __fastcall PipProcessRebuildPowerRelationsQueue(__int64 a1)
{
  __int64 *v1; // r11
  __int64 *v3; // rdi
  _QWORD *v4; // rsi
  _QWORD **ProviderList; // r14
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
LABEL_2:
  v1 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( v1 != &PiRebuildPowerRelationsQueue )
  {
    v3 = v1 - 9;
    v4 = (_QWORD *)*(v1 - 3);
    if ( !v4 )
    {
      v12 = *v1;
      v13 = (__int64 **)v3[10];
      if ( *(__int64 **)(*v1 + 8) != v1 || *v13 != v1 )
        __fastfail(3u);
      *v13 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      v1[1] = (__int64)v1;
      *v1 = (__int64)v1;
      PipDereferenceDependencyNode(v3);
      return PnpReleaseDependencyRelationsLock();
    }
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(v3[6]) )
    {
      ProviderList = (_QWORD **)PiGetProviderList(v4);
      v6 = *ProviderList;
      if ( *ProviderList == ProviderList )
      {
LABEL_8:
        v7 = v3 + 9;
        v8 = v3[9];
        v9 = (__int64 *)v3[10];
        if ( *(__int64 **)(v8 + 8) != v3 + 9 || (_QWORD *)*v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v3[10] = (__int64)(v3 + 9);
        *v7 = v7;
        PipDereferenceDependencyNode(v3);
        PnpReleaseDependencyRelationsLock();
        LOBYTE(v10) = 1;
        PiQueryPowerRelations(*(_QWORD *)(v4[39] + 40LL), v10);
        ObfDereferenceObject(v4);
        LOBYTE(v11) = 1;
        PnpAcquireDependencyRelationsLock(v11);
        goto LABEL_2;
      }
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v6, &v14, 0LL);
        if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v14) )
          break;
        v6 = (_QWORD *)*v6;
        if ( v6 == ProviderList )
          goto LABEL_8;
      }
    }
  }
  return PnpReleaseDependencyRelationsLock();
}
