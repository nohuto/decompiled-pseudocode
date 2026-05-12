/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C0009F7C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C000C030 (RaidRestartIoQueue.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     RaAllocateIoResource @ 0x1C0013348 (RaAllocateIoResource.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00286B8 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0036568 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, _QWORD *a3)
{
  __int64 IoResource; // rdx
  PKSPIN_LOCK *v8; // rcx
  PKSPIN_LOCK *QosEntryForDeviceEntry; // rax
  PKSPIN_LOCK v10; // rbx
  PKSPIN_LOCK *v11; // rcx
  PKSPIN_LOCK *v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
    {
      v12 = (PKSPIN_LOCK *)SpinLock[2];
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v12;
      if ( *v12 != SpinLock + 1 )
        __fastfail(3u);
      *v12 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
        goto LABEL_23;
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
      v10 = SpinLock + 33;
      v11 = (PKSPIN_LOCK *)v10[1];
      *QosEntryForDeviceEntry = v10;
      QosEntryForDeviceEntry[1] = (PKSPIN_LOCK)v11;
      if ( *v11 != v10 )
        __fastfail(3u);
      goto LABEL_22;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4);
  if ( !IoResource )
  {
    if ( *((_DWORD *)SpinLock + 34) >= *((_DWORD *)SpinLock + 36)
      || (RaAttemptHighWaterMarkIncrease(SpinLock), (IoResource = RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4)) == 0) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      v8 = (PKSPIN_LOCK *)SpinLock[2];
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v8;
      if ( *v8 != SpinLock + 1 )
        __fastfail(3u);
      *v8 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      *((_DWORD *)SpinLock + 10) = 1;
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
        goto LABEL_23;
      QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
      v10 = SpinLock + 33;
      v11 = (PKSPIN_LOCK *)v10[1];
      *QosEntryForDeviceEntry = v10;
      QosEntryForDeviceEntry[1] = (PKSPIN_LOCK)v11;
      if ( *v11 != v10 )
        __fastfail(3u);
LABEL_22:
      *v11 = (PKSPIN_LOCK)QosEntryForDeviceEntry;
      v10[1] = (KSPIN_LOCK)QosEntryForDeviceEntry;
LABEL_23:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 1;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)SpinLock + 48) >= *((_DWORD *)SpinLock + 9) )
    *((_DWORD *)SpinLock + 9) = *((_DWORD *)SpinLock + 48);
  a3[3] = IoResource + 800;
  a3[2] = IoResource + 16;
  a3[1] = IoResource + 1056;
  RaidZeroXrb(IoResource + 16, IoResource, *(unsigned int *)(IoResource + 760), *(_QWORD *)(IoResource + 776));
  return 0;
}
