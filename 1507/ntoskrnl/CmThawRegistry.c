/*
 * XREFs of CmThawRegistry @ 0x14065A074
 * Callers:
 *     NtThawRegistry @ 0x1401DFA90 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x14065A3A0 (CmpFreezeThawWorker.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x1400D2744 (CmpEnableLazyFlush.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 */

__int64 CmThawRegistry()
{
  unsigned int v0; // r15d
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rtt
  BOOLEAN v6; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  unsigned __int64 v10; // rtt
  struct _KTHREAD *v11; // rdx
  __int16 v12; // ax
  __int64 v14; // rax
  ULONG_PTR v15; // rsi
  struct _KTHREAD *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdi
  ULONG_PTR v19; // rdi
  signed __int32 v20; // eax
  __int64 *NextActiveHive; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  signed __int8 v26; // cf
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  signed __int64 v30; // rcx
  ULONG_PTR v31; // rtt

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CmpLockRegistryExclusive();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v5 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v6 = 1;
  }
  else
  {
    v6 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v6 )
    {
      v8 = KeGetCurrentThread();
      v9 = v8->KernelApcDisable + 1;
      v8->KernelApcDisable = v9;
      if ( !v9
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
        && !v8->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_10;
    }
  }
  if ( CmpFreezeThawState != 1 )
  {
LABEL_10:
    v0 = -1073741431;
    goto LABEL_11;
  }
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v22 )
  {
    NextActiveHive = CmpGetNextActiveHive(i, v1, v2, v3);
    v22 = (__int64)NextActiveHive;
    if ( !NextActiveHive )
      break;
    v14 = NextActiveHive[8];
    if ( !*(_DWORD *)(v14 + 164) )
    {
      *(_OWORD *)(v14 + 112) = *(_OWORD *)(v14 + 4056);
      *(_OWORD *)(*(_QWORD *)(v22 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v22 + 64) + 4040LL);
      *(_OWORD *)(*(_QWORD *)(v22 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v22 + 64) + 4072LL);
      *(_DWORD *)(*(_QWORD *)(v22 + 64) + 164LL) = 1836346738;
      if ( (*(_DWORD *)(v22 + 5360) & 0x300) != 0x100 && !*(_DWORD *)(v22 + 88) )
      {
        v15 = *(_QWORD *)(v22 + 2840);
        v16 = KeGetCurrentThread();
        v17 = KeAbPreAcquire(v15, 0LL, 0LL, v3);
        v18 = v17;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
          ExpAcquireFastMutexContended(v15, v17);
        if ( v18 )
          *(_BYTE *)(v18 + 26) |= 1u;
        *(_QWORD *)(v15 + 8) = v16;
        HvMarkBaseBlockDirty(v22);
        v19 = *(_QWORD *)(v22 + 2840);
        *(_QWORD *)(v19 + 8) = 0LL;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
        if ( v20 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v20);
        KeAbPostRelease(v19);
      }
    }
  }
  while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
  {
    v23 = KeAbPreAcquire((ULONG_PTR)&CmpFreezeListLock, 0LL, 0LL, v3);
    v26 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v27 = v23;
    if ( v26 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v23, (ULONG_PTR)&CmpFreezeListLock, v25);
    if ( v27 )
      *(_BYTE *)(v27 + 26) |= 1u;
    v28 = CmpFreezeThawWaitListHead;
    v29 = *(_QWORD *)CmpFreezeThawWaitListHead;
    if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
      || *(_QWORD *)(v29 + 8) != CmpFreezeThawWaitListHead )
    {
      __fastfail(3u);
    }
    CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
    *(_QWORD *)(v29 + 8) = &CmpFreezeThawWaitListHead;
    _m_prefetchw(&CmpFreezeListLock);
    v30 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v30 = 0LL;
    if ( (CmpFreezeListLock & 2) != 0
      || (v31 = CmpFreezeListLock,
          v31 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v30, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock, v24);
    }
    KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
    KeSetEvent((PRKEVENT)(v28 + 16), 0, 0);
  }
  CmpFreezeThawState = 0;
  CmpEnableLazyFlush(2);
LABEL_11:
  CmpUnlockRegistry();
  if ( v6 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v0;
}
