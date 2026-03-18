/*
 * XREFs of PiPnpRtlEndOperation @ 0x14050147C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x1403EF8F0 (PnpProcessTargetDeviceEvent.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1403F0DB0 (PiDcHandleCustomDeviceEvent.c)
 *     PiProcessQueryDeviceState @ 0x1403F13A8 (PiProcessQueryDeviceState.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1403F23C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140485DB8 (PiDcUpdateDeviceContainerMembership.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x140487AA0 (PiSwPropertySet.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14048C370 (PiDqActionDataGetRequestedProperties.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1404C5220 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1404C5BDC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404C5E0C (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404ED5CC (PiDqActionDataGetChangedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x140502614 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x1405748F0 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14062B378 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062E9D0 (PiPnpRtlEnsureObjectCached.c)
 *     PiDqIrpPropertySet @ 0x1406318E0 (PiDqIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1406471E0 (PiCMDeleteObject.c)
 *     PiProcessClearDeviceProblem @ 0x14064973C (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x1406499F8 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x1400C3E40 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C3FD4 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x140501BC4 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x140501E18 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlObjectEventRelease @ 0x140501E38 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140501F50 (PiPnpRtlObjectEventDispatch.c)
 */

void __fastcall PiPnpRtlEndOperation(char *P)
{
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 **v11; // rdi
  HANDLE *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 24)) )
    {
      v12 = *(HANDLE **)(*((_QWORD *)P + 5) + 32LL);
      Buffer = v12;
      if ( v12[2] )
      {
        ZwClose(v12[2]);
        Buffer[2] = 0LL;
        v12 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v12);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 24), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
    v11 = (__int64 **)(P + 128);
    while ( *v11 != (__int64 *)v11 )
    {
      v13 = *v11;
      v14 = **v11;
      if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v14 + 8) != v13 )
        __fastfail(3u);
      *v11 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v11;
      Buffer = (HANDLE *)(v13 - 7);
      PiPnpRtlObjectEventRelease(v13 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
