/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C000319C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C0009DF8 (RaidRestartIoQueue.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0003300 (RaAllocateIoResource.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00348E0 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(PKSPIN_LOCK SpinLock, KSPIN_LOCK *a2, _QWORD *a3)
{
  __int64 IoResource; // rdx
  __int64 v7; // rbx
  void *v8; // rcx
  size_t v9; // rax
  char result; // al
  PKSPIN_LOCK *v11; // rcx
  PKSPIN_LOCK *v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
    if ( *((int *)SpinLock + 11) > 0 || *((int *)SpinLock + 10) > 0 )
    {
      v12 = (PKSPIN_LOCK *)SpinLock[2];
      *a2 = (KSPIN_LOCK)(SpinLock + 1);
      a2[1] = (KSPIN_LOCK)v12;
      if ( *v12 != SpinLock + 1 )
        __fastfail(3u);
      *v12 = a2;
      SpinLock[2] = (KSPIN_LOCK)a2;
      goto LABEL_20;
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
      v11 = (PKSPIN_LOCK *)SpinLock[2];
      *a2 = (KSPIN_LOCK)(SpinLock + 1);
      a2[1] = (KSPIN_LOCK)v11;
      if ( *v11 != SpinLock + 1 )
        __fastfail(3u);
      *v11 = a2;
      SpinLock[2] = (KSPIN_LOCK)a2;
      *((_DWORD *)SpinLock + 10) = 1;
LABEL_20:
      ++*((_DWORD *)SpinLock + 6);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      return 1;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)SpinLock + 48) >= *((_DWORD *)SpinLock + 9) )
    *((_DWORD *)SpinLock + 9) = *((_DWORD *)SpinLock + 48);
  v7 = IoResource + 16;
  a3[2] = IoResource + 16;
  a3[3] = IoResource + 784;
  a3[1] = IoResource + 1040;
  v8 = *(void **)(IoResource + 760);
  v9 = *(unsigned int *)(IoResource + 744);
  *(_BYTE *)(IoResource + 32) &= 0x9Cu;
  *(_DWORD *)(IoResource + 16) = 523124044;
  *(_QWORD *)(IoResource + 24) = 0LL;
  *(_WORD *)(IoResource + 34) = -1;
  *(_BYTE *)(IoResource + 36) = -1;
  *(_QWORD *)(IoResource + 40) = 0LL;
  *(_QWORD *)(IoResource + 112) = 0LL;
  *(_QWORD *)(IoResource + 120) = 0LL;
  *(_QWORD *)(IoResource + 144) = 0LL;
  *(_QWORD *)(IoResource + 160) = 0LL;
  *(_QWORD *)(IoResource + 152) = 0LL;
  *(_QWORD *)(IoResource + 200) = 0LL;
  *(_QWORD *)(IoResource + 168) = 0LL;
  *(_QWORD *)(IoResource + 176) = 0LL;
  *(_QWORD *)(IoResource + 224) = 0LL;
  *(_QWORD *)(IoResource + 232) = 0LL;
  *(_QWORD *)(IoResource + 128) = 0LL;
  *(_QWORD *)(IoResource + 696) = 0LL;
  *(_QWORD *)(IoResource + 704) = 0LL;
  *(_QWORD *)(IoResource + 712) = 0LL;
  *(_QWORD *)(IoResource + 720) = 0LL;
  *(_DWORD *)(IoResource + 744) = v9;
  *(_QWORD *)(IoResource + 760) = v8;
  if ( v8 )
    memset(v8, 0, v9);
  *(_BYTE *)(v7 + 16) &= ~0x80u;
  *(_BYTE *)(v7 + 17) &= 0xF0u;
  result = 0;
  *(_QWORD *)(v7 + 752) = 0LL;
  *(_DWORD *)(v7 + 732) = 0;
  *(_DWORD *)(v7 + 32) = 0;
  return result;
}
