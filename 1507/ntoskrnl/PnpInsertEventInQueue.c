/*
 * XREFs of PnpInsertEventInQueue @ 0x14046093C
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1400267F0 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14011C19C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14015FDCC (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceClassChange @ 0x14045F3A4 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x140460814 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140461C58 (PnpSetCustomTargetEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140569AC0 (PnpSynchronizeDeviceEventQueue.c)
 *     PnpSetBlockedDriverEvent @ 0x14068E5D0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x14068E63C (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14068E734 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14068E7C8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x14068E874 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140026CF4 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     Template_z @ 0x14015CA44 (Template_z.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpCompareGuid @ 0x140460920 (PnpCompareGuid.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r12d
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r14
  unsigned __int8 CurrentIrql; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int8 v14; // r15
  __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned __int8 v18; // di
  signed __int32 v19; // eax
  __int64 v20; // rdi
  unsigned __int8 v21; // r14
  signed __int32 v22; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  _BYTE v27[48]; // [rsp+90h] [rbp+90h] BYREF

  v1 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL;
  *(GUID *)(v1 + 24) = NullGuid;
  *(_QWORD *)(v1 + 8) = 0LL;
  v3 = 0;
  *(_DWORD *)v1 = 0;
  PoolWithTag = 0LL;
  EtwActivityIdControlKernel(1, (PVOID *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v6 = *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( v6 )
  {
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)v6;
  }
  else if ( PnpIsSafeToExamineUserModeTeb(v5)
         && KeGetPcr()->NtTib.$AF8612CD83A736763F879D38CB10FD36::$24B86187094815B389AF40DF8BA8CE4C::Self )
  {
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)&KeGetPcr()->NtTib.$AF8612CD83A736763F879D38CB10FD36::$24B86187094815B389AF40DF8BA8CE4C::Self[105].SubSystemTib;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0
    && (PnpCompareGuid((const void *)(a1 + 104), &GUID_DEVICE_QUERY_AND_REMOVE)
     || PnpCompareGuid((const void *)(a1 + 104), &GUID_DEVICE_EJECT)) )
  {
    v26 = *(_QWORD *)(a1 + 144);
    v6 = v26 ? *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) : 0LL;
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_z(v24, &KMPnPEvt_DeviceRemoval_Queue, v25, *(const wchar_t **)(v6 + 48));
  }
  v7 = PnpDeviceEventList;
  v8 = KeAbPreAcquire(PnpDeviceEventList + 64, 0LL, 0LL, v6);
  v10 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(v7 + 64), 0) )
    ExpAcquireFastMutexContended(v7 + 64, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v7 + 72) = KeGetCurrentThread();
  *(_DWORD *)(v7 + 112) = CurrentIrql;
  v12 = KeAbPreAcquire((ULONG_PTR)&PnpNotificationInProgressLock, 0LL, 0LL, v9);
  v13 = v12;
  v14 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpNotificationInProgressLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpNotificationInProgressLock, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  qword_140349348 = (__int64)KeGetCurrentThread();
  dword_140349370 = v14;
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
  v16 = PnpDeviceEventList + 120;
  v17 = *(_QWORD **)(PnpDeviceEventList + 128);
  *(_QWORD *)a1 = PnpDeviceEventList + 120;
  *(_QWORD *)(a1 + 8) = v17;
  if ( *v17 != v16 )
    __fastfail(3u);
  *v17 = a1;
  *(_QWORD *)(v16 + 8) = a1;
  qword_140349348 = 0LL;
  v18 = dword_140349370;
  v19 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpNotificationInProgressLock, 1, 0);
  if ( v19 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpNotificationInProgressLock, v19);
  __writecr8(v18);
  KeAbPostRelease((ULONG_PTR)&PnpNotificationInProgressLock);
  v20 = PnpDeviceEventList;
  *(_QWORD *)(PnpDeviceEventList + 72) = 0LL;
  v21 = *(_BYTE *)(v20 + 112);
  v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 64), 1, 0);
  if ( v22 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v20 + 64), v22);
  __writecr8(v21);
  KeAbPostRelease(v20 + 64);
  if ( PoolWithTag )
  {
    PoolWithTag->WorkerRoutine = PnpDeviceEventWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  return v3;
}
