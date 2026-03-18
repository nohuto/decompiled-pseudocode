/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x14049FD44
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x14049E9CC (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1400DA234 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PpDevNodeRemoveFromTree @ 0x1400DA2F8 (PpDevNodeRemoveFromTree.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     IopEnumerateRelations @ 0x1404A0438 (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x1404A0714 (IopIsDescendantNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1404A078C (PnpCleanupDeviceRegistryValues.c)
 *     IopRemoveCurrentRelationFromList @ 0x140617084 (IopRemoveCurrentRelationFromList.c)
 */

__int64 __fastcall PnpUnlinkDeviceRemovalRelations(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  char v6; // bl
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  char v13; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+48h] BYREF

  Object = a1;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v14 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v14,
                               (unsigned int)&Object,
                               (unsigned int)&v13,
                               0LL) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v9 + 300) - 787) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v5 = *(_QWORD *)(v9 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v9 + 40);
        v6 = PpDevNodeRemoveFromTree(v9);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( v6 )
        {
          v7 = *(_QWORD *)(v9 + 48) == 0LL;
          *(_QWORD *)(v9 + 648) = v5;
          if ( !v7 )
          {
            PiPnpRtlBeginOperation((__int64 **)&P);
            v10 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v9 + 48),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v10,
              8u,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(v9 + 48), 1);
            PnpSetDeviceInstanceRemovalEvent(v9);
            if ( P )
            {
              PiPnpRtlEndOperation((char *)P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v9 + 300) == 788 )
            IopRemoveCurrentRelationFromList(a2, Object, &v14);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  return PpDevNodeUnlockTree(4);
}
