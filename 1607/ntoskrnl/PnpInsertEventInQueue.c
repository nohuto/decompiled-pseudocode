/*
 * XREFs of PnpInsertEventInQueue @ 0x14048AC64
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1400850B8 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140085FF0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140139198 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetTargetDeviceRemove @ 0x140484C7C (PnpSetTargetDeviceRemove.c)
 *     PnpSetDeviceClassChange @ 0x140488DB8 (PnpSetDeviceClassChange.c)
 *     PnpSetCustomTargetEvent @ 0x1404893D8 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x14048A464 (PnpSetPlugPlayEvent.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140548410 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetBlockedDriverEvent @ 0x140642DB4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140642E20 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140642F18 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140642FAC (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140643058 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140086AA0 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     Template_z @ 0x1401CDE1C (Template_z.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpCompareGuid @ 0x14048A570 (PnpCompareGuid.c)
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
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceEventWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  return v3;
}
