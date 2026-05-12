/*
 * XREFs of StorNextIoGatewayItem @ 0x1C001322C
 * Callers:
 *     RaidAdapterRestartQueues @ 0x1C00131A0 (RaidAdapterRestartQueues.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C0013348 (RaAllocateIoResource.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00286B8 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0036568 (RaAttemptHighWaterMarkIncrease.c)
 *     RaFreeIoResource @ 0x1C00367D0 (RaFreeIoResource.c)
 */

KSPIN_LOCK __fastcall StorNextIoGatewayItem(PKSPIN_LOCK SpinLock, _QWORD *a2)
{
  KSPIN_LOCK v2; // rsi
  union _SLIST_HEADER *v6; // r14
  __int64 IoResource; // rdi
  PKSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( !*((_DWORD *)SpinLock + 6) )
    return 0LL;
  if ( *((_DWORD *)SpinLock + 10) == 1 )
    return 0LL;
  if ( *((int *)SpinLock + 11) > 0 )
    return 0LL;
  v6 = (union _SLIST_HEADER *)(SpinLock + 8);
  IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4);
  if ( !IoResource )
  {
    if ( *((_DWORD *)SpinLock + 34) >= *((_DWORD *)SpinLock + 36) )
      return 0LL;
    RaAttemptHighWaterMarkIncrease(SpinLock);
    IoResource = RaAllocateIoResource(v6);
    if ( !IoResource )
      return 0LL;
  }
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 6) && *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 )
  {
    v8 = SpinLock + 1;
    v2 = SpinLock[1];
    v9 = *(_QWORD *)v2;
    if ( *(PKSPIN_LOCK *)(v2 + 8) != SpinLock + 1 || *(_QWORD *)(v9 + 8) != v2 )
      __fastfail(3u);
    *v8 = v9;
    *(_QWORD *)(v9 + 8) = v8;
    _InterlockedIncrement((volatile signed __int32 *)SpinLock + 48);
    v10 = *((_DWORD *)SpinLock + 9);
    if ( *((_DWORD *)SpinLock + 48) > v10 )
      v10 = *((_DWORD *)SpinLock + 48);
    --*((_DWORD *)SpinLock + 6);
    *((_DWORD *)SpinLock + 9) = v10;
    if ( (*(_BYTE *)(v2 + 22) & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2);
      v13 = *QosEntryForDeviceEntry;
      v14 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
        || (_QWORD *)*v14 != QosEntryForDeviceEntry )
      {
        __fastfail(3u);
      }
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    a2[3] = IoResource + 800;
    a2[2] = IoResource + 16;
    a2[1] = IoResource + 1056;
    RaidZeroXrb(IoResource + 16, v11, *(_DWORD *)(IoResource + 760), *(void **)(IoResource + 776));
  }
  else
  {
    RaFreeIoResource(v6, IoResource);
  }
  return v2;
}
