/*
 * XREFs of CmThawRegistry @ 0x140602DE0
 * Callers:
 *     NtThawRegistry @ 0x1401B3194 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x140602BC0 (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x14060300C (CmpFreezeThawWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     CmpEnableLazyFlush @ 0x140131B00 (CmpEnableLazyFlush.c)
 *     CmpGetNextActiveHive @ 0x1403FB6D0 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x140564650 (HvMarkBaseBlockDirty.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  BOOLEAN v3; // si
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v11; // rax
  __int64 *NextActiveHive; // rax
  __int64 v13; // rbx
  _BYTE *v14; // rax
  signed __int8 v15; // cf
  _BYTE *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  signed __int64 v19; // rcx
  ULONG_PTR v20; // rtt

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v3 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v4, v5);
LABEL_3:
    v0 = -1073741431;
    goto LABEL_4;
  }
  if ( CmpFreezeThawState != 1 )
    goto LABEL_3;
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v13 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v13 = (__int64)NextActiveHive;
    if ( !NextActiveHive )
      break;
    v11 = NextActiveHive[8];
    if ( !*(_DWORD *)(v11 + 164) )
    {
      *(_OWORD *)(v11 + 112) = *(_OWORD *)(v11 + 4056);
      *(_OWORD *)(*(_QWORD *)(v13 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v13 + 64) + 4040LL);
      *(_OWORD *)(*(_QWORD *)(v13 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v13 + 64) + 4072LL);
      *(_DWORD *)(*(_QWORD *)(v13 + 64) + 164LL) = 1836346738;
      if ( (*(_DWORD *)(v13 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v13 + 88) )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 2840));
        HvMarkBaseBlockDirty(v13);
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v13 + 2840));
      }
    }
  }
  while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
  {
    v14 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpFreezeListLock, 0LL, 0);
    v15 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v16 = v14;
    if ( v15 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v14, (ULONG_PTR)&CmpFreezeListLock);
    if ( v16 )
      v16[26] |= 1u;
    v17 = CmpFreezeThawWaitListHead;
    v18 = *(_QWORD *)CmpFreezeThawWaitListHead;
    if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
      || *(_QWORD *)(v18 + 8) != CmpFreezeThawWaitListHead )
    {
      __fastfail(3u);
    }
    CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
    *(_QWORD *)(v18 + 8) = &CmpFreezeThawWaitListHead;
    _m_prefetchw(&CmpFreezeListLock);
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = 0LL;
    else
      v19 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 2) != 0
      || (v20 = CmpFreezeListLock,
          v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v19, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
    KeSetEvent((PRKEVENT)(v17 + 16), 0, 0);
  }
  CmpFreezeThawState = 0;
  CmpEnableLazyFlush(2);
LABEL_4:
  CmpUnlockRegistry();
  if ( v3 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  }
  return v0;
}
