/*
 * XREFs of StorNextIoGatewayItem @ 0x1C0010CD4
 * Callers:
 *     RaidAdapterRestartQueues @ 0x1C0010C48 (RaidAdapterRestartQueues.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0003300 (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaFreeIoResource @ 0x1C0010C34 (RaFreeIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00348E0 (RaAttemptHighWaterMarkIncrease.c)
 */

KSPIN_LOCK __fastcall StorNextIoGatewayItem(PKSPIN_LOCK SpinLock, _QWORD *a2)
{
  KSPIN_LOCK v2; // rsi
  union _SLIST_HEADER *v6; // r14
  PSLIST_ENTRY IoResource; // rdi
  PKSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rdx
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
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v2 )
  {
    a2[3] = IoResource + 49;
    a2[2] = IoResource + 1;
    a2[1] = IoResource + 65;
    RaidZeroXrb(
      (__int64)&IoResource[1],
      v11,
      *((_DWORD *)&IoResource[46].Next + 2),
      *((void **)&IoResource[47].Next + 1));
  }
  else
  {
    RaFreeIoResource((__int64)v6, IoResource);
  }
  return v2;
}
