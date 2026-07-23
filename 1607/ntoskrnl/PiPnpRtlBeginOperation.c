/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1404E46CC
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
 *     RtlInitializeGenericTableAvl @ 0x1400C1E1C (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1404E2A30 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1404E4DA8 (PiPnpRtlOperationListAcquireExclusiveLock.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // ebx
  __int64 *v5; // rax
  char *PoolWithTag; // rax
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v13 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v13);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = v13;
  if ( v13 )
  {
    ++*((_DWORD *)v13 + 36);
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x41706E50u);
    v13 = (__int64 *)PoolWithTag;
    v7 = (__int64 *)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *((_DWORD *)PoolWithTag + 36) = 1;
    *((_QWORD *)PoolWithTag + 2) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(PoolWithTag + 24),
      PiPnpRtlObjectEventCompareObjects,
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    v7[17] = (__int64)(v7 + 16);
    v7[16] = (__int64)(v7 + 16);
    PiPnpRtlOperationListAcquireExclusiveLock();
    v8 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    v7[1] = (__int64)&PiPnpRtlActiveOperations;
    *v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    PiPnpRtlActiveOperations = (__int64)v7;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    v5 = v13;
  }
  *a1 = v5;
  return v4;
}
