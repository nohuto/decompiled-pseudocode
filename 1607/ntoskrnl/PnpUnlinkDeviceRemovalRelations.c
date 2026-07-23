/*
 * XREFs of PnpUnlinkDeviceRemovalRelations @ 0x140485654
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1404835BC (PipRemoveDevicesInRelationList.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x140483B1C (PiEventRemovalPostSurpriseRemove.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PpDevNodeRemoveFromTree @ 0x140084FB0 (PpDevNodeRemoveFromTree.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1400850B8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140483B88 (PnpCleanupDeviceRegistryValues.c)
 *     IopEnumerateRelations @ 0x140485C7C (IopEnumerateRelations.c)
 *     IopIsDescendantNode @ 0x140485F38 (IopIsDescendantNode.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     IopRemoveCurrentRelationFromList @ 0x14064BB8C (IopRemoveCurrentRelationFromList.c)
 */

void __fastcall PnpUnlinkDeviceRemovalRelations(void *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+98h] [rbp+38h] BYREF
  char v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  Object = a1;
  P = 0LL;
  PpDevNodeLockTree(4);
  if ( a2 && *(_BYTE *)(a2 + 8) )
  {
    v16 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(
                               a2,
                               (unsigned int)&v16,
                               (unsigned int)&Object,
                               (unsigned int)&v15,
                               0LL) )
    {
      v11 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
      IopIsDescendantNode(a2);
      if ( (unsigned int)(*(_DWORD *)(v11 + 300) - 787) <= 1 )
      {
        CurrentThread = KeGetCurrentThread();
        v4 = *(_QWORD *)(v11 + 16);
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PnpCleanupDeviceRegistryValues(v11 + 40);
        v5 = PpDevNodeRemoveFromTree(v11);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
        if ( v5 )
        {
          v9 = *(_QWORD *)(v11 + 48) == 0LL;
          *(_QWORD *)(v11 + 648) = v4;
          if ( !v9 )
          {
            PiPnpRtlBeginOperation(&P);
            v12 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(v11 + 48),
              1,
              0LL,
              (__int64)&DEVPKEY_Device_LastRemovalDate,
              16,
              (__int64)&v12,
              8,
              0);
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *(_QWORD *)(v11 + 48), 1LL);
            PnpSetDeviceInstanceRemovalEvent(v11);
            if ( P )
            {
              PiPnpRtlEndOperation(P);
              P = 0LL;
            }
          }
          if ( *(_DWORD *)(v11 + 300) == 788 )
            IopRemoveCurrentRelationFromList(a2, Object, &v16);
          ObfDereferenceObject(Object);
        }
      }
    }
  }
  PpDevNodeUnlockTree(4);
}
