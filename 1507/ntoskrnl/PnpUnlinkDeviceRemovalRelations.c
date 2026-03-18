/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x140536068
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1405349D8 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14011C19C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PpDevNodeRemoveFromTree @ 0x14011C260 (PpDevNodeRemoveFromTree.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14053503C (PnpCleanupDeviceRegistryValues.c)
 *     IopEnumerateRelations @ 0x140536D78 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x140538368 (IopIsDescendantNode.c)
 *     IopRemoveCurrentRelationFromList @ 0x140695924 (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // si
  struct _KTHREAD *v9; // rdx
  __int16 v10; // cx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD v13[3]; // [rsp+50h] [rbp-18h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+38h] BYREF
  PVOID P; // [rsp+A8h] [rbp+40h] BYREF
  char v16; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+50h] BYREF

  Object = a1;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v17 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v17,
                               (unsigned int)&Object,
                               (unsigned int)&v16,
                               0LL) )
    {
      v12 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v12 + 300) - 787) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *(_QWORD *)(v12 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v12 + 40, v5, v6, v7);
        v8 = PpDevNodeRemoveFromTree(v12);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        v9 = KeGetCurrentThread();
        v10 = v9->KernelApcDisable + 1;
        v9->KernelApcDisable = v10;
        if ( !v10
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
          && !v9->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( v8 )
        {
          *(_QWORD *)(v12 + 648) = v4;
          if ( *(_QWORD *)(v12 + 48) )
          {
            PiPnpRtlBeginOperation((__int64 **)&P);
            v13[0] = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v12 + 48),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)v13,
              8u,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *(_QWORD *)(v12 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v12);
            if ( P )
            {
              PiPnpRtlEndOperation((char *)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v12 + 300) == 788 )
            IopRemoveCurrentRelationFromList(a2, Object, &v17);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  PpDevNodeUnlockTree(4);
}
