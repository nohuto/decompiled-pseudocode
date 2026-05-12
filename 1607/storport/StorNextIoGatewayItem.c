/*
 * XREFs of StorNextIoGatewayItem @ 0x1C00186EC
 * Callers:
 *     RaidAdapterRestartQueues @ 0x1C0018684 (RaidAdapterRestartQueues.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C00024B0 (RaidZeroXrb.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002BD38 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAllocateIoResource @ 0x1C0039688 (RaAllocateIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0039714 (RaAttemptHighWaterMarkIncrease.c)
 *     RaFreeIoResource @ 0x1C0039A04 (RaFreeIoResource.c)
 */

KSPIN_LOCK __fastcall StorNextIoGatewayItem(PKSPIN_LOCK SpinLock, _QWORD *a2)
{
  KSPIN_LOCK v2; // rsi
  union _SLIST_HEADER *v5; // r14
  __int64 IoResource; // rdi
  PKSPIN_LOCK v7; // rax
  KSPIN_LOCK v8; // rcx
  unsigned int v9; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( *((_DWORD *)SpinLock + 10) == 1 )
    return 0LL;
  if ( *((int *)SpinLock + 11) > 0 )
    return 0LL;
  v5 = (union _SLIST_HEADER *)(SpinLock + 8);
  IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4);
  if ( !IoResource )
  {
    if ( *((_DWORD *)SpinLock + 34) >= *((_DWORD *)SpinLock + 36) )
      return 0LL;
    RaAttemptHighWaterMarkIncrease(SpinLock);
    IoResource = RaAllocateIoResource(v5);
    if ( !IoResource )
      return 0LL;
  }
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 6) && *((int *)SpinLock + 10) <= 0 && *((int *)SpinLock + 11) <= 0 )
  {
    v7 = SpinLock + 1;
    v2 = SpinLock[1];
    v8 = *(_QWORD *)v2;
    if ( *(PKSPIN_LOCK *)(v2 + 8) != SpinLock + 1 || *(_QWORD *)(v8 + 8) != v2 )
      __fastfail(3u);
    *v7 = v8;
    *(_QWORD *)(v8 + 8) = v7;
    _InterlockedIncrement((volatile signed __int32 *)SpinLock + 48);
    v9 = *((_DWORD *)SpinLock + 9);
    if ( *((_DWORD *)SpinLock + 48) > v9 )
      v9 = *((_DWORD *)SpinLock + 48);
    --*((_DWORD *)SpinLock + 6);
    *((_DWORD *)SpinLock + 9) = v9;
    if ( (*(_BYTE *)(v2 + 22) & 0x20) != 0 )
    {
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2);
      v11 = *QosEntryForDeviceEntry;
      v12 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
        || (_QWORD *)*v12 != QosEntryForDeviceEntry )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    a2[3] = IoResource + 800;
    a2[2] = IoResource + 16;
    a2[1] = IoResource + 1056;
    RaidZeroXrb(IoResource + 16, v13, *(_DWORD *)(IoResource + 760), *(void **)(IoResource + 776));
  }
  else
  {
    RaFreeIoResource(v5, IoResource);
  }
  return v2;
}
