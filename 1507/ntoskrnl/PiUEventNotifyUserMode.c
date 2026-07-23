/*
 * XREFs of PiUEventNotifyUserMode @ 0x14046027C
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14045D6DC (PnpProcessCustomDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 *     PnpProcessTargetDeviceEvent @ 0x140460714 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140536EEC (PnpNotifyUserModeDeviceRemoval.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PiUEventShouldQueueEvent @ 0x140026C98 (PiUEventShouldQueueEvent.c)
 *     KeInitializeGuardedMutex @ 0x14002B748 (KeInitializeGuardedMutex.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x14045DB04 (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x14045DBFC (PiUEventFreeEventEntry.c)
 *     PiUEventReferenceEventEntry @ 0x14045FA30 (PiUEventReferenceEventEntry.c)
 *     PnpCompareGuid @ 0x140460920 (PnpCompareGuid.c)
 *     PiUEventCacheObjectProperties @ 0x140460C1C (PiUEventCacheObjectProperties.c)
 *     PiUEventDeviceNeedsInstall @ 0x140460DF0 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14058DFD4 (PiUEventSendDeviceInstallNotification.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // r12
  char v5; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  struct _FAST_MUTEX *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int8 CurrentIrql; // r13
  int v15; // eax
  bool v16; // r13
  __int64 **v17; // rax
  unsigned __int8 v18; // r14
  signed __int32 v19; // eax
  struct _WORK_QUEUE_ITEM *v20; // rax
  __int64 v21; // r9
  NTSTATUS v22; // eax
  NTSTATUS v23; // ebx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int8 v27; // r14
  signed __int8 v28; // cf
  unsigned __int8 v29; // si
  signed __int32 v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rax
  struct _KEVENT *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int8 v46; // r14
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned __int8 v49; // si
  signed __int32 v50; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  char v52; // [rsp+98h] [rbp+48h] BYREF
  size_t Size; // [rsp+A0h] [rbp+50h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  LODWORD(Size) = 0;
  v3 = 0;
  v52 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 120) == 4 && (v34 = a1 + 152, (int)PiUEventDeviceNeedsInstall(a1 + 152, &v52) >= 0) && v52 )
  {
    PiUEventSendDeviceInstallNotification(v34);
  }
  else if ( *(_DWORD *)(a1 + 120) == 2 )
  {
    v35 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v35 )
      v35 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( !v35 )
      PiUEventSendDeviceInterfaceArrivalETWEvent(a1 + 152, a1 + 168);
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    if ( (unsigned __int8)PnpCompareGuid(a1 + 104, &GUID_TARGET_DEVICE_QUERY_REMOVE)
      || (v5 = 0, (unsigned __int8)PnpCompareGuid(a1 + 104, &GUID_DEVICE_KERNEL_INITIATED_EJECT)) )
    {
      v5 = 1;
    }
    LODWORD(Size) = *(_DWORD *)(a1 + 140) + 72;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x59706E50u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, (unsigned int)Size);
    v8 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    v7[2] = v8;
    if ( v8 )
    {
      KeInitializeGuardedMutex(v8);
      *((_DWORD *)v7 + 14) = 1;
      *((_BYTE *)v7 + 69) = v5;
      v9 = *(_DWORD **)(a1 + 48);
      if ( v5 )
      {
        v7[4] = v9;
        v43 = *(_QWORD *)(a1 + 56);
        v7[5] = v43;
        **(_WORD **)(v43 + 8) = 0;
        *(_WORD *)v7[5] = 0;
        *(_DWORD *)v7[4] = 0;
      }
      else
      {
        if ( v9 )
          *v9 = 0;
        v10 = *(_QWORD *)(a1 + 56);
        if ( v10 )
        {
          **(_WORD **)(v10 + 8) = 0;
          **(_WORD **)(a1 + 56) = 0;
        }
      }
      if ( *(_QWORD *)(a1 + 24) || v5 )
      {
        v3 = 1;
        v36 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x59706E50u);
        v7[3] = v36;
        if ( !v36 )
        {
          v2 = -1073741670;
LABEL_67:
          if ( v7[3] )
            PiUEventDereferenceEventEntry((__int64)v7, v37, v38, v39);
          goto LABEL_69;
        }
        KeInitializeEvent(v36, NotificationEvent, 0);
        PiUEventReferenceEventEntry((__int64)v7, v40, v41, v42);
      }
      *((_BYTE *)v7 + 68) = v3;
      *((_DWORD *)v7 + 16) = *(_DWORD *)(a1 + 140) + 8;
      memmove(v7 + 9, (const void *)(a1 + 104), *(unsigned int *)(a1 + 140));
      PiUEventCacheObjectProperties(v7);
      v12 = KeAbPreAcquire((ULONG_PTR)&PiUEventUsermodeEventQueueLock, 0LL, 0LL, v11);
      v13 = v12;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventUsermodeEventQueueLock, v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      qword_14034AF28 = (__int64)KeGetCurrentThread();
      v15 = CurrentIrql;
      v16 = PiUEventUsermodeEventQueue == (_QWORD)&PiUEventUsermodeEventQueue;
      dword_14034AF50 = v15;
      v17 = (__int64 **)qword_14034AF68;
      *v7 = &PiUEventUsermodeEventQueue;
      v7[1] = v17;
      if ( *v17 != &PiUEventUsermodeEventQueue )
        __fastfail(3u);
      *v17 = v7;
      qword_14034AF28 = 0LL;
      v18 = dword_14034AF50;
      qword_14034AF68 = (__int64)v7;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 1, 0);
      if ( v19 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, v19);
      __writecr8(v18);
      KeAbPostRelease((ULONG_PTR)&PiUEventUsermodeEventQueueLock);
      if ( !v16 )
        goto LABEL_27;
      v20 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
      if ( v20 )
      {
        v20->Parameter = v20;
        v20->WorkerRoutine = (void (__fastcall *)(void *))PiUEventProcessEventWorker;
        v20->List.Flink = 0LL;
        ExQueueWorkItem(v20, NormalWorkQueue);
LABEL_27:
        if ( v3 )
        {
          Timeout.QuadPart = -300000000LL;
          Object[0] = &PnpShutdownEvent;
          Object[1] = *((PVOID *)v7 + 3);
          v22 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
          LODWORD(Size) = 0;
          v23 = v22;
          ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Size, 4u, 0LL, 0LL, 0, 0);
          if ( v23 )
          {
            if ( v23 == 1 )
            {
              if ( v5 && **(_DWORD **)(a1 + 48) )
                v2 = -1073741536;
              else
                v2 = 0;
            }
            else
            {
              v2 = v23 != 258 ? 0xC0000001 : 0;
            }
          }
          else
          {
            v2 = -1073741431;
          }
          v25 = KeAbPreAcquire((ULONG_PTR)&PiUEventUsermodeEventQueueLock, 0LL, 0LL, v24);
          v26 = v25;
          v27 = KeGetCurrentIrql();
          __writecr8(1uLL);
          v28 = _interlockedbittestandreset((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 0);
          if ( !v28 )
            ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventUsermodeEventQueueLock, v25);
          if ( v26 )
            *(_BYTE *)(v26 + 26) |= 1u;
          dword_14034AF50 = v27;
          v7[4] = 0LL;
          v7[5] = 0LL;
          v29 = dword_14034AF50;
          qword_14034AF28 = 0LL;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 1, 0);
          if ( v30 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, v30);
          __writecr8(v29);
          KeAbPostRelease((ULONG_PTR)&PiUEventUsermodeEventQueueLock);
          PiUEventDereferenceEventEntry((__int64)v7, v31, v32, v33);
        }
        return v2;
      }
      v2 = -1073741670;
      v44 = KeAbPreAcquire((ULONG_PTR)&PiUEventUsermodeEventQueueLock, 0LL, 0LL, v21);
      v45 = v44;
      v46 = KeGetCurrentIrql();
      __writecr8(1uLL);
      v28 = _interlockedbittestandreset((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 0);
      if ( !v28 )
        ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventUsermodeEventQueueLock, v44);
      if ( v45 )
        *(_BYTE *)(v45 + 26) |= 1u;
      qword_14034AF28 = (__int64)KeGetCurrentThread();
      dword_14034AF50 = v46;
      v47 = *v7;
      v48 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v48 != v7 )
        __fastfail(3u);
      *v48 = v47;
      *(_QWORD *)(v47 + 8) = v48;
      v49 = dword_14034AF50;
      qword_14034AF28 = 0LL;
      v50 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, 1, 0);
      if ( v50 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventUsermodeEventQueueLock, v50);
      __writecr8(v49);
      KeAbPostRelease((ULONG_PTR)&PiUEventUsermodeEventQueueLock);
      if ( v3 )
        goto LABEL_67;
    }
    else
    {
      v2 = -1073741670;
    }
LABEL_69:
    PiUEventFreeEventEntry(v7);
  }
  return v2;
}
