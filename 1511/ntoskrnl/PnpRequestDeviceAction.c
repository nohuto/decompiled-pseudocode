/*
 * XREFs of PnpRequestDeviceAction @ 0x1400D1618
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140097FFC (IopAttachDeviceToDeviceStackSafe.c)
 *     IoInvalidateDeviceRelations @ 0x1400D1570 (IoInvalidateDeviceRelations.c)
 *     IoInvalidateDeviceState @ 0x140125EB4 (IoInvalidateDeviceState.c)
 *     PnpInitializeProcessor @ 0x1401BE5E8 (PnpInitializeProcessor.c)
 *     PiControlGetSetDeviceStatus @ 0x140458AB4 (PiControlGetSetDeviceStatus.c)
 *     PiResetProblemDevicesWorker @ 0x140495C90 (PiResetProblemDevicesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x1404A00B8 (PnpInvalidateRelationsInList.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     IopDeleteDriver @ 0x1404C5944 (IopDeleteDriver.c)
 *     PiProcessQueryDeviceState @ 0x1404ECBB8 (PiProcessQueryDeviceState.c)
 *     PnpBootPhaseComplete @ 0x140523EA0 (PnpBootPhaseComplete.c)
 *     IopReleaseFilteredBootResources @ 0x1405289C0 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14053B0A0 (PiDevCfgProcessDeviceCallback.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x140600254 (IoSynchronousInvalidateDeviceRelations.c)
 *     PipAttemptDependentStart @ 0x140600E7C (PipAttemptDependentStart.c)
 *     PpSystemHiveLimitCallback @ 0x140602F98 (PpSystemHiveLimitCallback.c)
 *     PiQueueDeviceRequest @ 0x1406168D0 (PiQueueDeviceRequest.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x1400D18D4 (PnpLogActionQueueEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FF608 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRequestDeviceAction(PVOID Object, int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // r14d
  char *PoolWithTag; // rdi
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  KIRQL v15; // si
  PVOID **v16; // rax
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
    goto LABEL_32;
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
               && KeGetPcr()->NtTib.$0C91CFB10D28D41C3392B7C54F9CA6F4::$3E0F0F6D91C5C9A349763DE49766E812::Self )
        {
          v19 = *(GUID *)&KeGetPcr()->NtTib.$0C91CFB10D28D41C3392B7C54F9CA6F4::$3E0F0F6D91C5C9A349763DE49766E812::Self[105].SubSystemTib;
        }
      }
      goto LABEL_13;
    }
    if ( a2 > 10 && a2 != 14 )
    {
      if ( a2 <= 16 || a2 > 18 )
        goto LABEL_8;
LABEL_32:
      v12 = 0;
      goto LABEL_9;
    }
  }
LABEL_13:
  *(GUID *)(PoolWithTag + 56) = v19;
  if ( Object )
    v14 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v14 = 0LL;
  PnpLogActionQueueEvent(v14, (unsigned int)a2, 0LL);
  v15 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v16 = (PVOID **)qword_1402F9008;
  *(_QWORD *)PoolWithTag = &PnpEnumerationRequestList;
  *((_QWORD *)PoolWithTag + 1) = v16;
  if ( *v16 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *v16 = (PVOID *)PoolWithTag;
  qword_1402F9008 = (__int64)PoolWithTag;
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KeReleaseSpinLock(&PnpSpinLock, v15);
    PnpDeviceActionWorker();
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
