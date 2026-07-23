/*
 * XREFs of PiPnpRtlEndOperation @ 0x1404E440C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1403F026C (PiProcessQueryDeviceState.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1403F128C (PnpNewDeviceNodeDependencyCheck.c)
 *     PipEnumerateCompleted @ 0x1403F1FB0 (PipEnumerateCompleted.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140489514 (PiDcHandleCustomDeviceEvent.c)
 *     PnpProcessTargetDeviceEvent @ 0x14048A17C (PnpProcessTargetDeviceEvent.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14048C8D4 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404CF684 (PiDqActionDataGetChangedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x1404E55A4 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14050FABC (PiDcUpdateDeviceContainerMembership.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x140510214 (PiSwPropertySet.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PiProcessAddBootDevices @ 0x140574E30 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x140578358 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14062B42C (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062EA84 (PiPnpRtlEnsureObjectCached.c)
 *     PiDqIrpPropertySet @ 0x140631994 (PiDqIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1406472C4 (PiCMDeleteObject.c)
 *     PiProcessClearDeviceProblem @ 0x140649820 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x140649ADC (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x1400C1CE0 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1404E4B54 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1404E4DA8 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlObjectEventRelease @ 0x1404E4DC8 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1404E4EE0 (PiPnpRtlObjectEventDispatch.c)
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
