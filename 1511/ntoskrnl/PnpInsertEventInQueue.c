/*
 * XREFs of PnpInsertEventInQueue @ 0x1404DEFD8
 * Callers:
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1400DA234 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14010761C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1401303D4 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetTargetDeviceRemove @ 0x14049EB40 (PnpSetTargetDeviceRemove.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1404C67B4 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetCustomTargetEvent @ 0x1404E221C (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x1404E242C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1404EEE18 (PnpSetPlugPlayEvent.c)
 *     PnpSetBlockedDriverEvent @ 0x14060E8C4 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14060E930 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14060EA28 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14060EABC (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14060EB68 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FF608 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     Template_z @ 0x1401BFA48 (Template_z.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PnpCompareGuid @ 0x1404E0E6C (PnpCompareGuid.c)
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
         && KeGetPcr()->NtTib.$0C91CFB10D28D41C3392B7C54F9CA6F4::$3E0F0F6D91C5C9A349763DE49766E812::Self )
  {
    *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)&KeGetPcr()->NtTib.$0C91CFB10D28D41C3392B7C54F9CA6F4::$3E0F0F6D91C5C9A349763DE49766E812::Self[105].SubSystemTib;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0
    && ((unsigned __int8)PnpCompareGuid(a1 + 104, &GUID_DEVICE_QUERY_AND_REMOVE)
     || (unsigned __int8)PnpCompareGuid(a1 + 104, &GUID_DEVICE_EJECT)) )
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
  *(_QWORD *)a1 = PnpDeviceEventList + 120;
  *(_QWORD *)(a1 + 8) = v7;
  if ( *v7 != v6 )
    __fastfail(3u);
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
