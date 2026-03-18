/*
 * XREFs of PiPnpRtlEndOperation @ 0x14043BCB0
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14043E724 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1404426B8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14045D640 (PiDcHandleCustomDeviceEvent.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x140460714 (PnpProcessTargetDeviceEvent.c)
 *     PiProcessQueryDeviceState @ 0x140461484 (PiProcessQueryDeviceState.c)
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PipEnumerateCompleted @ 0x1404E09B8 (PipEnumerateCompleted.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404E3C7C (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405575E8 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessClearDeviceProblem @ 0x14058C2C8 (PiProcessClearDeviceProblem.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 *     PiProcessAddBootDevices @ 0x1405B7A38 (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14067BF3C (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14067F934 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x140692AC0 (PiCMDeleteObject.c)
 *     PiProcessSetDeviceProblem @ 0x140693E04 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x140019610 (RtlIsGenericTableEmptyAvl.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043B180 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x14043BC90 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlObjectEventRelease @ 0x14043C01C (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x14043C09C (PiPnpRtlObjectEventDispatch.c)
 */

void __fastcall PiPnpRtlEndOperation(char *P)
{
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v6; // ax
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  __int64 **v9; // rdi
  HANDLE *v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
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
    CurrentThread = KeGetCurrentThread();
    v6 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v6;
    if ( !v6
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 24)) )
    {
      v10 = *(HANDLE **)(*((_QWORD *)P + 5) + 32LL);
      Buffer = v10;
      if ( v10[2] )
      {
        ZwClose(v10[2]);
        Buffer[2] = 0LL;
        v10 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v10);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 24), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    v7 = KeGetCurrentThread();
    v8 = v7->KernelApcDisable + 1;
    v7->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
      && !v7->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v9 = (__int64 **)(P + 128);
    while ( *v9 != (__int64 *)v9 )
    {
      v11 = *v9;
      v12 = **v9;
      if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v12 + 8) != v11 )
        __fastfail(3u);
      *v9 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = v9;
      Buffer = (HANDLE *)(v11 - 7);
      PiPnpRtlObjectEventRelease(v11 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
