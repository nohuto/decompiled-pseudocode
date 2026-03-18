/*
 * XREFs of PnpInsertEventInQueue @ 0x1403F0BD4
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14009F544 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400B2E78 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140138C28 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceClassChange @ 0x1403EEEB4 (PnpSetDeviceClassChange.c)
 *     PnpSetCustomTargetEvent @ 0x1403EF18C (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1403F01EC (PnpSetPlugPlayEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x1404C3F44 (PnpSetTargetDeviceRemove.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140547ED0 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetBlockedDriverEvent @ 0x140642CD0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140642D3C (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140642E34 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140642EC8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140642F74 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140007E58 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x140007EA8 (EtwActivityIdControlKernel.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     Template_z @ 0x1401CDFD0 (Template_z.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpCompareGuid @ 0x1403F02F8 (PnpCompareGuid.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // esi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  _OWORD *v5; // r9
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  _BYTE v13[48]; // [rsp+90h] [rbp+90h] BYREF

  v1 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL;
  *(GUID *)(v1 + 24) = NullGuid;
  *(_QWORD *)(v1 + 8) = 0LL;
  v3 = 0;
  *(_DWORD *)v1 = 0;
  PoolWithTag = 0LL;
  EtwActivityIdControlKernel(1, (PVOID *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v5 = *(_OWORD **)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( v5 )
  {
    *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v5;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$1A06FDC1EC270D7EC697F13D78904F04::$120F2532A465E26E2E996D9F9639858A::Self )
  {
    *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)&KeGetPcr()->NtTib.$1A06FDC1EC270D7EC697F13D78904F04::$120F2532A465E26E2E996D9F9639858A::Self[105].SubSystemTib;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0
    && (PnpCompareGuid((const void *)(a1 + 104), &GUID_DEVICE_QUERY_AND_REMOVE)
     || PnpCompareGuid((const void *)(a1 + 104), &GUID_DEVICE_EJECT)) )
  {
    v11 = *(_QWORD *)(a1 + 144);
    v12 = v11 ? *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL) : 0LL;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_z(v9, &KMPnPEvt_DeviceRemoval_Queue, v10, *(const wchar_t **)(v12 + 48));
  }
  ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( !PnpNotificationInProgress )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4C706E50u);
    if ( PoolWithTag )
    {
      PnpNotificationInProgress = 1;
      KeResetEvent(&PnpEventQueueEmpty);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  v6 = PnpDeviceEventList + 120;
  v7 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v7 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  *(_QWORD *)(v6 + 8) = a1;
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( PoolWithTag )
  {
    PoolWithTag->WorkerRoutine = PnpDeviceEventWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  return v3;
}
