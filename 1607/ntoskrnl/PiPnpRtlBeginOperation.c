/*
 * XREFs of PiPnpRtlBeginOperation @ 0x14050173C
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
 *     RtlInitializeGenericTableAvl @ 0x1400C3F7C (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1404FFAA0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x140501E18 (PiPnpRtlOperationListAcquireExclusiveLock.c)
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
