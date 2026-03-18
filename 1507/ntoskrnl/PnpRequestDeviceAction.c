/*
 * XREFs of PnpRequestDeviceAction @ 0x1400268B0
 * Callers:
 *     IoInvalidateDeviceRelations @ 0x140026498 (IoInvalidateDeviceRelations.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400D19EC (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceState @ 0x1401599BC (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x1401F9E50 (PnpInitializeProcessor.c)
 *     PiResetProblemDevicesWorker @ 0x14045C1D8 (PiResetProblemDevicesWorker.c)
 *     PiProcessQueryDeviceState @ 0x140461484 (PiProcessQueryDeviceState.c)
 *     PiControlGetSetDeviceStatus @ 0x1404E1D68 (PiControlGetSetDeviceStatus.c)
 *     IopDeleteDriver @ 0x1404F380C (IopDeleteDriver.c)
 *     PnpInvalidateRelationsInList @ 0x140535D44 (PnpInvalidateRelationsInList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     PiQueueDeviceRequest @ 0x14058AF74 (PiQueueDeviceRequest.c)
 *     IopReleaseFilteredBootResources @ 0x14059B274 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405B1FA0 (PiDevCfgProcessDeviceCallback.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     PnpBootPhaseComplete @ 0x1405C217C (PnpBootPhaseComplete.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14067AE38 (IoSynchronousInvalidateDeviceRelations.c)
 *     PipAttemptDependentStart @ 0x14067BA8C (PipAttemptDependentStart.c)
 *     PpSystemHiveLimitCallback @ 0x14067DE04 (PpSystemHiveLimitCallback.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x140026BD0 (PnpLogActionQueueEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140026CF4 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRequestDeviceAction(PVOID Object, int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // r12d
  char *PoolWithTag; // rsi
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // r15
  PVOID **v17; // rax
  _QWORD v19[2]; // [rsp+28h] [rbp-50h] BYREF
  GUID v20; // [rsp+38h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v20 = NullGuid;
  v10 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x32706E50u);
  v19[1] = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  if ( !Object )
    Object = *(PVOID *)(IopRootDeviceNode + 32);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *((_QWORD *)PoolWithTag + 2) = Object;
  *((_DWORD *)PoolWithTag + 6) = a2;
  PoolWithTag[28] = a3;
  *((_QWORD *)PoolWithTag + 4) = a4;
  *((_QWORD *)PoolWithTag + 5) = a5;
  *((_QWORD *)PoolWithTag + 6) = a6;
  if ( !a2 )
    goto LABEL_41;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
    {
LABEL_8:
      v12 = 1;
LABEL_9:
      if ( v12 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        v19[0] = 0LL;
        EtwActivityIdControlKernel(1LL, v19);
        if ( v19[0] )
        {
          v20 = *(GUID *)v19[0];
        }
        else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb(v13)
               && KeGetPcr()->NtTib.$AF8612CD83A736763F879D38CB10FD36::$24B86187094815B389AF40DF8BA8CE4C::Self )
        {
          v20 = *(GUID *)&KeGetPcr()->NtTib.$AF8612CD83A736763F879D38CB10FD36::$24B86187094815B389AF40DF8BA8CE4C::Self[105].SubSystemTib;
        }
      }
      goto LABEL_13;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_41:
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_13:
  *(GUID *)(PoolWithTag + 56) = v20;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  PnpLogActionQueueEvent(v14, (unsigned int)a2, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PnpSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(&PnpSpinLock);
  }
  v17 = (PVOID **)qword_140349488;
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v17;
  if ( *v17 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *v17 = (PVOID *)PoolWithTag;
  qword_140349488 = (__int64)PoolWithTag;
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
    else
      _InterlockedAnd64(&PnpSpinLock, 0LL);
    __writecr8(CurrentIrql);
    PnpDeviceActionWorker();
  }
  else if ( PnPBootDriversLoaded && !PnpEnumerationInProgress )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
    else
      _InterlockedAnd64(&PnpSpinLock, 0LL);
    __writecr8(CurrentIrql);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
    else
      _InterlockedAnd64(&PnpSpinLock, 0LL);
    __writecr8(CurrentIrql);
  }
  return v10;
}
