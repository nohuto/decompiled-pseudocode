/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C00077A0
 * Callers:
 *     RaidRestartIoQueue @ 0x1C0003964 (RaidRestartIoQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002BD38 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAllocateIoResource @ 0x1C0039688 (RaAllocateIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0039714 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, _QWORD *a3)
{
  int v6; // ecx
  PSLIST_ENTRY IoResource; // rcx
  PSLIST_ENTRY v8; // rbx
  void *v9; // rax
  size_t v10; // rdx
  char result; // al
  __int64 v12; // rax
  int v13; // ebp
  unsigned int v14; // r8d
  unsigned int v15; // r12d
  PSLIST_ENTRY v16; // rax
  PKSPIN_LOCK *v17; // rcx
  PKSPIN_LOCK *v18; // rax
  PKSPIN_LOCK v19; // rbx
  PKSPIN_LOCK *v20; // rcx
  PKSPIN_LOCK *v21; // rcx
  PKSPIN_LOCK *QosEntryForDeviceEntry; // rax
  PKSPIN_LOCK v23; // rbx
  PKSPIN_LOCK *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
    {
      v21 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v21 != SpinLock + 1 )
        __fastfail(3u);
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v21;
      *v21 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      if ( (*(_BYTE *)(a2 + 22) & 0x20) != 0 )
      {
        QosEntryForDeviceEntry = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
        v23 = SpinLock + 33;
        v24 = (PKSPIN_LOCK *)v23[1];
        if ( *v24 != v23 )
          __fastfail(3u);
        *QosEntryForDeviceEntry = v23;
        QosEntryForDeviceEntry[1] = (PKSPIN_LOCK)v24;
        *v24 = (PKSPIN_LOCK)QosEntryForDeviceEntry;
        v23[1] = (KSPIN_LOCK)QosEntryForDeviceEntry;
      }
      goto LABEL_37;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  v6 = *((_DWORD *)SpinLock + 32);
  if ( v6 )
  {
    v12 = (unsigned int)(v6 * HIDWORD(KeGetPcr()[1].LockArray)) / *((_DWORD *)SpinLock + 33);
    v13 = v12;
    IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(SpinLock[8] + 8 * v12));
    if ( !IoResource )
    {
      v14 = *((_DWORD *)SpinLock + 32);
      v15 = 1;
      if ( v14 <= 1 )
        goto LABEL_5;
      while ( !IoResource )
      {
        v16 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(SpinLock[8] + 8LL * ((v15 + v13) % v14)));
        v14 = *((_DWORD *)SpinLock + 32);
        ++v15;
        IoResource = v16;
        if ( v15 >= v14 )
        {
          if ( !v16 )
            goto LABEL_5;
          break;
        }
      }
    }
    LODWORD(IoResource->Next) = v13;
  }
  else
  {
    IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)SpinLock + 4);
  }
LABEL_5:
  if ( !IoResource )
  {
    if ( *((_DWORD *)SpinLock + 34) >= *((_DWORD *)SpinLock + 36)
      || (RaAttemptHighWaterMarkIncrease(SpinLock),
          (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)SpinLock + 4)) == 0LL) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      v17 = (PKSPIN_LOCK *)SpinLock[2];
      if ( *v17 != SpinLock + 1 )
        __fastfail(3u);
      *(_QWORD *)a2 = SpinLock + 1;
      *(_QWORD *)(a2 + 8) = v17;
      *v17 = (PKSPIN_LOCK)a2;
      SpinLock[2] = a2;
      ++*((_DWORD *)SpinLock + 6);
      *((_DWORD *)SpinLock + 10) = 1;
      if ( (*(_BYTE *)(a2 + 22) & 0x20) != 0 )
      {
        v18 = (PKSPIN_LOCK *)RaidGetQosEntryForDeviceEntry(a2);
        v19 = SpinLock + 33;
        v20 = (PKSPIN_LOCK *)v19[1];
        if ( *v20 != v19 )
          __fastfail(3u);
        *v18 = v19;
        v18[1] = (PKSPIN_LOCK)v20;
        *v20 = (PKSPIN_LOCK)v18;
        v19[1] = (KSPIN_LOCK)v18;
      }
LABEL_37:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 1;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)SpinLock + 48) >= *((_DWORD *)SpinLock + 9) )
    *((_DWORD *)SpinLock + 9) = *((_DWORD *)SpinLock + 48);
  v8 = IoResource + 1;
  a3[2] = IoResource + 1;
  a3[3] = IoResource + 50;
  a3[1] = IoResource + 66;
  v9 = (void *)*((_QWORD *)&IoResource[48].Next + 1);
  v10 = *((unsigned int *)&IoResource[47].Next + 2);
  LOBYTE(IoResource[2].Next) &= 0x9Cu;
  LODWORD(IoResource[1].Next) = 523124044;
  *((_QWORD *)&IoResource[1].Next + 1) = 0LL;
  WORD1(IoResource[2].Next) = -1;
  BYTE4(IoResource[2].Next) = -1;
  *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
  *((_QWORD *)&IoResource[7].Next + 1) = 0LL;
  IoResource[8].Next = 0LL;
  *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
  *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
  IoResource[10].Next = 0LL;
  IoResource[13].Next = 0LL;
  IoResource[11].Next = 0LL;
  *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
  *((_QWORD *)&IoResource[14].Next + 1) = 0LL;
  IoResource[15].Next = 0LL;
  *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
  *((_QWORD *)&IoResource[44].Next + 1) = 0LL;
  IoResource[45].Next = 0LL;
  *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
  IoResource[46].Next = 0LL;
  *((_DWORD *)&IoResource[47].Next + 2) = v10;
  *((_QWORD *)&IoResource[48].Next + 1) = v9;
  if ( v9 )
    memset(v9, 0, v10);
  LOBYTE(v8[1].Next) &= ~0x80u;
  BYTE1(v8[1].Next) &= 0xF0u;
  result = 0;
  v8[48].Next = 0LL;
  *((_DWORD *)&v8[46].Next + 3) = 0;
  *((_DWORD *)&v8[48].Next + 2) = 0;
  return result;
}
