/*
 * XREFs of PnpRequestDeviceAction @ 0x14000794C
 * Callers:
 *     IoInvalidateDeviceRelations @ 0x14009ECD4 (IoInvalidateDeviceRelations.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400FAFC0 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceState @ 0x1401308E8 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x1401CCB80 (PnpInitializeProcessor.c)
 *     PiProcessQueryDeviceState @ 0x1403F13A8 (PiProcessQueryDeviceState.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x1404C54CC (PnpInvalidateRelationsInList.c)
 *     IopReleaseDeviceResources @ 0x1404C5E64 (IopReleaseDeviceResources.c)
 *     PiResetProblemDevicesWorker @ 0x14054363C (PiResetProblemDevicesWorker.c)
 *     IopDeleteDriver @ 0x140545C94 (IopDeleteDriver.c)
 *     IopReleaseFilteredBootResources @ 0x14055B33C (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405711DC (PiDevCfgProcessDeviceCallback.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     PnpBootPhaseComplete @ 0x140580834 (PnpBootPhaseComplete.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14062A2A8 (IoSynchronousInvalidateDeviceRelations.c)
 *     PipAttemptDependentStart @ 0x14062AEC8 (PipAttemptDependentStart.c)
 *     PpSystemHiveLimitCallback @ 0x14062D330 (PpSystemHiveLimitCallback.c)
 *     PiQueueDeviceRequest @ 0x14064B2F4 (PiQueueDeviceRequest.c)
 *     PipInitializeCoreDriversByGroup @ 0x14079AB28 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PnpLogActionQueueEvent @ 0x140007BFC (PnpLogActionQueueEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140007E58 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x140007EA8 (EtwActivityIdControlKernel.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRequestDeviceAction(PVOID Object, int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // r14d
  char *PoolWithTag; // rdi
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  KIRQL v15; // si
  _QWORD *v16; // rax
  _QWORD v18[2]; // [rsp+28h] [rbp-50h] BYREF
  GUID v19; // [rsp+38h] [rbp-40h]

  v19 = NullGuid;
  v10 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x32706E50u);
  v18[1] = PoolWithTag;
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
    goto LABEL_31;
  if ( a2 != 6 )
  {
    if ( a2 <= 8 )
    {
LABEL_8:
      v12 = 1;
LABEL_9:
      if ( v12 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        v18[0] = 0LL;
        EtwActivityIdControlKernel(1LL, v18);
        if ( v18[0] )
        {
          v19 = *(GUID *)v18[0];
        }
        else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb(v13)
               && KeGetPcr()->NtTib.$1A06FDC1EC270D7EC697F13D78904F04::$120F2532A465E26E2E996D9F9639858A::Self )
        {
          v19 = *(GUID *)&KeGetPcr()->NtTib.$1A06FDC1EC270D7EC697F13D78904F04::$120F2532A465E26E2E996D9F9639858A::Self[105].SubSystemTib;
        }
      }
      goto LABEL_15;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_31:
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_15:
  *(GUID *)(PoolWithTag + 56) = v19;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  PnpLogActionQueueEvent(v14, (unsigned int)a2, 0LL);
  v15 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v16 = (_QWORD *)qword_14031E528;
  if ( *(PVOID **)qword_14031E528 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v16;
  *v16 = PoolWithTag;
  qword_14031E528 = (__int64)PoolWithTag;
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KeReleaseSpinLock(&PnpSpinLock, v15);
    PnpDeviceActionWorker(0LL);
  }
  else if ( PnPBootDriversLoaded && !PnpEnumerationInProgress )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KeReleaseSpinLock(&PnpSpinLock, v15);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  else
  {
    KeReleaseSpinLock(&PnpSpinLock, v15);
  }
  return v10;
}
