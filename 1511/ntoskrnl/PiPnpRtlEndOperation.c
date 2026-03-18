/*
 * XREFs of PiPnpRtlEndOperation @ 0x140440BC0
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140441A6C (PiDqQueryEvaluateFilter.c)
 *     PipEnumerateCompleted @ 0x140457A40 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14045EED8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x140460C90 (PiDqActionDataGetChangedProperties.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PnpProcessTargetDeviceEvent @ 0x1404E0D6C (PnpProcessTargetDeviceEvent.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessQueryDeviceState @ 0x1404ECBB8 (PiProcessQueryDeviceState.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404ECDAC (PiDcUpdateDeviceContainerMembership.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404EEF24 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiDqIrpPropertySet @ 0x14050DD30 (PiDqIrpPropertySet.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x140540368 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14060132C (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140604BD0 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x140612C9C (PiCMDeleteObject.c)
 *     PiProcessClearDeviceProblem @ 0x140614CE0 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x140614F9C (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlIsGenericTableEmptyAvl @ 0x140090418 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043F934 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x140440DF0 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140440E78 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x140440EBC (PiPnpRtlOperationListAcquireExclusiveLock.c)
 */

void __fastcall PiPnpRtlEndOperation(char *P)
{
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  HANDLE *v5; // rcx
  __int64 **v6; // rdi
  __int64 *v7; // rcx
  __int64 v8; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    PiPnpRtlDisableRemoveOperationDispatch();
    PiPnpRtlOperationListAcquireExclusiveLock();
    v3 = *(_QWORD **)P;
    v4 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || *v4 != P )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 24)) )
    {
      v5 = *(HANDLE **)(*((_QWORD *)P + 5) + 32LL);
      Buffer = v5;
      if ( v5[2] )
      {
        ZwClose(v5[2]);
        Buffer[2] = 0LL;
        v5 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v5);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 24), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v6 = (__int64 **)(P + 128);
    while ( *v6 != (__int64 *)v6 )
    {
      v7 = *v6;
      v8 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      *v6 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v6;
      Buffer = (HANDLE *)(v7 - 7);
      PiPnpRtlObjectEventRelease(v7 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
