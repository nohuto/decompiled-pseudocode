/*
 * XREFs of CmThawRegistry @ 0x140519210
 * Callers:
 *     NtThawRegistry @ 0x14012F5AC (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x1405E3654 (CmpFreezeThawWorker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x140126C94 (CmpEnableLazyFlush.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // edi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // si
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v2 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_16;
  }
  if ( CmpFreezeThawState != 1 )
  {
LABEL_16:
    v0 = -1073741431;
    goto LABEL_12;
  }
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v5 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v5 = (__int64)NextActiveHive;
    if ( !NextActiveHive )
      break;
    v6 = NextActiveHive[8];
    if ( !*(_DWORD *)(v6 + 164) )
    {
      *(_OWORD *)(v6 + 112) = *(_OWORD *)(v6 + 4056);
      *(_OWORD *)(*(_QWORD *)(v5 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v5 + 64) + 4040LL);
      *(_OWORD *)(*(_QWORD *)(v5 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v5 + 64) + 4072LL);
      *(_DWORD *)(*(_QWORD *)(v5 + 64) + 164LL) = 1836346738;
      if ( (*(_DWORD *)(v5 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v5 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v5 + 2840));
        HvMarkBaseBlockDirty(v5);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v5 + 2840));
      }
    }
  }
  while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
  {
    v8 = KeAbPreAcquire((ULONG_PTR)&CmpFreezeListLock, 0LL, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v8, (ULONG_PTR)&CmpFreezeListLock);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = CmpFreezeThawWaitListHead;
    v12 = *(_QWORD *)CmpFreezeThawWaitListHead;
    if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
      || *(_QWORD *)(v12 + 8) != CmpFreezeThawWaitListHead )
    {
      __fastfail(3u);
    }
    CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
    *(_QWORD *)(v12 + 8) = &CmpFreezeThawWaitListHead;
    _m_prefetchw(&CmpFreezeListLock);
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    else
      v13 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 2) != 0
      || (v14 = CmpFreezeListLock,
          v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v13, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
    KeSetEvent((PRKEVENT)(v11 + 16), 0, 0);
  }
  CmpFreezeThawState = 0;
  CmpEnableLazyFlush(2);
LABEL_12:
  CmpUnlockRegistry();
  if ( v2 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v0;
}
