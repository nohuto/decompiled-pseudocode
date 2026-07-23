/*
 * XREFs of PiUEventNotifyUserMode @ 0x14048D5A4
 * Callers:
 *     PnpNotifyUserModeDeviceRemoval @ 0x1404851F8 (PnpNotifyUserModeDeviceRemoval.c)
 *     PnpProcessCustomDeviceEvent @ 0x1404895A4 (PnpProcessCustomDeviceEvent.c)
 *     PnpProcessTargetDeviceEvent @ 0x14048A17C (PnpProcessTargetDeviceEvent.c)
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeInitializeGuardedMutex @ 0x14007D180 (KeInitializeGuardedMutex.c)
 *     PiUEventShouldQueueEvent @ 0x140086B34 (PiUEventShouldQueueEvent.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x1404898C4 (PiUEventDereferenceEventEntry.c)
 *     PiUEventFreeEventEntry @ 0x140489920 (PiUEventFreeEventEntry.c)
 *     PiUEventCacheObjectProperties @ 0x14048A27C (PiUEventCacheObjectProperties.c)
 *     PnpCompareGuid @ 0x14048A570 (PnpCompareGuid.c)
 *     PiUEventReferenceEventEntry @ 0x14048AB64 (PiUEventReferenceEventEntry.c)
 *     PiUEventDeviceNeedsInstall @ 0x1404CBA94 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404CEFD8 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14062E6E0 (PiUEventSendDeviceInstallNotification.c)
 */

__int64 __fastcall PiUEventNotifyUserMode(__int64 a1)
{
  unsigned int v2; // ebx
  char v3; // r15
  char v4; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  struct _FAST_MUTEX *v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  bool v11; // r12
  struct _WORK_QUEUE_ITEM *v12; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  struct _KEVENT *v16; // rax
  NTSTATUS v17; // eax
  NTSTATUS v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp+48h] BYREF
  size_t Size; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  LODWORD(Size) = 0;
  v3 = 0;
  LOBYTE(Timeout.LowPart) = 0;
  if ( PnpShutdownEvent.Header.SignalState )
    return (unsigned int)-1073741431;
  if ( *(_DWORD *)(a1 + 120) == 4
    && (v15 = a1 + 152, (int)PiUEventDeviceNeedsInstall(a1 + 152, &Timeout) >= 0)
    && LOBYTE(Timeout.LowPart) )
  {
    PiUEventSendDeviceInstallNotification(v15);
  }
  else if ( *(_DWORD *)(a1 + 120) == 2 )
  {
    v14 = *(_QWORD *)(a1 + 104) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v14 )
      v14 = *(_QWORD *)(a1 + 112) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( !v14 )
      PiUEventSendDeviceInterfaceArrivalETWEvent(a1 + 152, a1 + 168);
  }
  if ( PiUEventShouldQueueEvent(a1) )
  {
    if ( PnpCompareGuid((const void *)(a1 + 104), &GUID_TARGET_DEVICE_QUERY_REMOVE)
      || (v4 = 0, PnpCompareGuid((const void *)(a1 + 104), &GUID_DEVICE_KERNEL_INITIATED_EJECT)) )
    {
      v4 = 1;
    }
    LODWORD(Size) = *(_DWORD *)(a1 + 140) + 72;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x59706E50u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, (unsigned int)Size);
    v7 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    v6[2] = v7;
    if ( v7 )
    {
      KeInitializeGuardedMutex(v7);
      *((_DWORD *)v6 + 14) = 1;
      *((_BYTE *)v6 + 69) = v4;
      v8 = *(_DWORD **)(a1 + 48);
      if ( v4 )
      {
        v6[4] = v8;
        v19 = *(_QWORD *)(a1 + 56);
        v6[5] = v19;
        **(_WORD **)(v19 + 8) = 0;
        *(_WORD *)v6[5] = 0;
        *(_DWORD *)v6[4] = 0;
      }
      else
      {
        if ( v8 )
          *v8 = 0;
        v9 = *(_QWORD *)(a1 + 56);
        if ( v9 )
        {
          **(_WORD **)(v9 + 8) = 0;
          **(_WORD **)(a1 + 56) = 0;
        }
      }
      if ( *(_QWORD *)(a1 + 24) || v4 )
      {
        v3 = 1;
        v16 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x59706E50u);
        v6[3] = v16;
        if ( !v16 )
        {
          v2 = -1073741670;
LABEL_47:
          if ( v6[3] )
            PiUEventDereferenceEventEntry((__int64)v6);
          goto LABEL_49;
        }
        KeInitializeEvent(v16, NotificationEvent, 0);
        PiUEventReferenceEventEntry((__int64)v6);
      }
      *((_BYTE *)v6 + 68) = v3;
      *((_DWORD *)v6 + 16) = *(_DWORD *)(a1 + 140) + 8;
      memmove(v6 + 9, (const void *)(a1 + 104), *(unsigned int *)(a1 + 140));
      PiUEventCacheObjectProperties((__int64)v6);
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v10 = (_QWORD *)qword_140320028;
      v11 = PiUEventUsermodeEventQueue == (_QWORD)&PiUEventUsermodeEventQueue;
      if ( *(__int64 **)qword_140320028 != &PiUEventUsermodeEventQueue )
        __fastfail(3u);
      *v6 = &PiUEventUsermodeEventQueue;
      v6[1] = v10;
      *v10 = v6;
      qword_140320028 = (__int64)v6;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      if ( !v11 )
        goto LABEL_20;
      v12 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
      if ( v12 )
      {
        v12->Parameter = v12;
        v12->WorkerRoutine = PiUEventProcessEventWorker;
        v12->List.Flink = 0LL;
        ExQueueWorkItem(v12, NormalWorkQueue);
LABEL_20:
        if ( v3 )
        {
          Timeout.QuadPart = -300000000LL;
          Object[0] = &PnpShutdownEvent;
          Object[1] = *((PVOID *)v6 + 3);
          v17 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 1u, &Timeout, 0LL);
          LODWORD(Size) = 0;
          v18 = v17;
          ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, &Size, 4u, 0LL, 0LL, 0, 0);
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              if ( v4 && **(_DWORD **)(a1 + 48) )
                v2 = -1073741536;
              else
                v2 = 0;
            }
            else
            {
              v2 = v18 != 258 ? 0xC0000001 : 0;
            }
          }
          else
          {
            v2 = -1073741431;
          }
          ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
          v6[4] = 0LL;
          v6[5] = 0LL;
          KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
          PiUEventDereferenceEventEntry((__int64)v6);
        }
        return v2;
      }
      v2 = -1073741670;
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v20 = *v6;
      v21 = (_QWORD *)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v21 != v6 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
      if ( v3 )
        goto LABEL_47;
    }
    else
    {
      v2 = -1073741670;
    }
LABEL_49:
    PiUEventFreeEventEntry(v6);
  }
  return v2;
}
