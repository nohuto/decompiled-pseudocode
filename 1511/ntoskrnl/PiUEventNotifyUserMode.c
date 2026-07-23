/*
 * XREFs of PiUEventNotifyUserMode @ 0x1404E09F4
 * Callers:
 *     PnpNotifyUserModeDeviceRemoval @ 0x1404A07E0 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpDeviceEventWorker @ 0x1404E0578 (PnpDeviceEventWorker.c)
 *     PnpProcessTargetDeviceEvent @ 0x1404E0D6C (PnpProcessTargetDeviceEvent.c)
 *     PnpProcessCustomDeviceEvent @ 0x1404E2138 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeInitializeGuardedMutex @ 0x140093730 (KeInitializeGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PiUEventShouldQueueEvent @ 0x1401024CC (PiUEventShouldQueueEvent.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PnpCompareGuid @ 0x1404E0E6C (PnpCompareGuid.c)
 *     PiUEventReferenceEventEntry @ 0x1404E1464 (PiUEventReferenceEventEntry.c)
 *     PiUEventCacheObjectProperties @ 0x1404E15C4 (PiUEventCacheObjectProperties.c)
 *     PiUEventDereferenceEventEntry @ 0x1404E19A8 (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x1404E1A04 (PiUEventFreeEventEntry.c)
 *     PiUEventDeviceNeedsInstall @ 0x1404E6028 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x1406042FC (PiUEventSendDeviceInstallNotification.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // r15
  char v5; // r14
  PVOID PoolWithTag; // rax
  __int64 v7; // rdi
  struct _FAST_MUTEX *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 **v11; // rax
  bool v12; // zf
  bool v13; // r12
  struct _WORK_QUEUE_ITEM *v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  __int64 v17; // rdi
  __int64 v18; // rax
  struct _KEVENT *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  char v24; // [rsp+98h] [rbp+48h] BYREF
  size_t Size; // [rsp+A0h] [rbp+50h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  LODWORD(Size) = 0;
  v3 = 0;
  Timeout.QuadPart = 0LL;
  v24 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 120) == 4 && (v17 = a1 + 152, (int)PiUEventDeviceNeedsInstall(a1 + 152, &v24) >= 0) && v24 )
  {
    PiUEventSendDeviceInstallNotification(v17);
  }
  else if ( *(_DWORD *)(a1 + 120) == 2 )
  {
    v18 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v18 )
      v18 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( !v18 )
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
    v7 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, (unsigned int)Size);
    v8 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    *(_QWORD *)(v7 + 16) = v8;
    if ( v8 )
    {
      KeInitializeGuardedMutex(v8);
      *(_DWORD *)(v7 + 56) = 1;
      *(_BYTE *)(v7 + 69) = v5;
      v9 = *(_DWORD **)(a1 + 48);
      if ( v5 )
      {
        *(_QWORD *)(v7 + 32) = v9;
        v20 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(v7 + 40) = v20;
        **(_WORD **)(v20 + 8) = 0;
        **(_WORD **)(v7 + 40) = 0;
        **(_DWORD **)(v7 + 32) = 0;
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
        v19 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x59706E50u);
        *(_QWORD *)(v7 + 24) = v19;
        if ( !v19 )
        {
          v2 = -1073741670;
LABEL_47:
          if ( *(_QWORD *)(v7 + 24) )
            PiUEventDereferenceEventEntry(v7);
          goto LABEL_49;
        }
        KeInitializeEvent(v19, NotificationEvent, 0);
        PiUEventReferenceEventEntry(v7);
      }
      *(_BYTE *)(v7 + 68) = v3;
      *(_DWORD *)(v7 + 64) = *(_DWORD *)(a1 + 140) + 8;
      memmove((void *)(v7 + 72), (const void *)(a1 + 104), *(unsigned int *)(a1 + 140));
      PiUEventCacheObjectProperties(v7);
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v11 = (__int64 **)qword_1402FAAE8;
      v12 = PiUEventUsermodeEventQueue == (_QWORD)&PiUEventUsermodeEventQueue;
      *(_QWORD *)v7 = &PiUEventUsermodeEventQueue;
      v13 = v12;
      *(_QWORD *)(v7 + 8) = v11;
      if ( *v11 != &PiUEventUsermodeEventQueue )
        __fastfail(3u);
      *v11 = (__int64 *)v7;
      qword_1402FAAE8 = v7;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      if ( !v13 )
        goto LABEL_21;
      v14 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
      if ( v14 )
      {
        v14->Parameter = v14;
        v14->WorkerRoutine = (void (__fastcall *)(void *))PiUEventProcessEventWorker;
        v14->List.Flink = 0LL;
        ExQueueWorkItem(v14, NormalWorkQueue);
LABEL_21:
        if ( v3 )
        {
          Object[0] = &PnpShutdownEvent;
          Object[1] = *(PVOID *)(v7 + 24);
          Timeout.QuadPart = -300000000LL;
          v15 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
          LODWORD(Size) = 0;
          v16 = v15;
          ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Size, 4u, 0LL, 0LL, 0, 0);
          if ( v16 )
          {
            if ( v16 == 1 )
            {
              if ( v5 && **(_DWORD **)(a1 + 48) )
                v2 = -1073741536;
              else
                v2 = 0;
            }
            else
            {
              v2 = v16 != 258 ? 0xC0000001 : 0;
            }
          }
          else
          {
            v2 = -1073741431;
          }
          ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
          *(_QWORD *)(v7 + 32) = 0LL;
          *(_QWORD *)(v7 + 40) = 0LL;
          KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
          PiUEventDereferenceEventEntry(v7);
        }
        return v2;
      }
      v2 = -1073741670;
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v21 = *(_QWORD *)v7;
      v22 = *(_QWORD **)(v7 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v22 != v7 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      if ( v3 )
        goto LABEL_47;
    }
    else
    {
      v2 = -1073741670;
    }
LABEL_49:
    PiUEventFreeEventEntry(v7);
  }
  return v2;
}
