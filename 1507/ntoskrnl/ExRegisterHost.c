/*
 * XREFs of ExRegisterHost @ 0x140594978
 * Callers:
 *     IopInitializeIoQos @ 0x14015EAF0 (IopInitializeIoQos.c)
 *     SepInitializeAuthorizationCallbacks @ 0x1407BC520 (SepInitializeAuthorizationCallbacks.c)
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 *     PsInitSystem @ 0x1407D07C8 (PsInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpFindHost @ 0x140594AFC (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1406F824C (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterHost(__int64 **a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  __int64 v6; // r9
  __int64 *v7; // rdi
  volatile signed __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rsi
  __int64 Host; // rbp
  __int64 **v16; // rax
  unsigned int v17; // esi
  struct _KTHREAD *v18; // rdx
  __int16 v19; // ax

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)a3 + 2), 0x60uLL, 0x48457845u);
  v7 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  v8 = (volatile signed __int64 *)(PoolWithTag + 64);
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)PoolWithTag + 8, 1LL, 0LL);
  if ( v9 >= 2 )
    ExfWaitForRundownProtectionRelease(v8, v9);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0LL, v6);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v14 = v11;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v11, (ULONG_PTR)&ExpHostListLock, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( Host )
  {
    v17 = -1073741771;
    ExpDereferenceHost(v7);
    ExpDereferenceHost(Host);
  }
  else
  {
    v16 = (__int64 **)qword_14077E2F8;
    *v7 = (__int64)&ExpHostList;
    v17 = 0;
    v7[1] = (__int64)v16;
    if ( *v16 != &ExpHostList )
      __fastfail(3u);
    *v16 = v7;
    qword_14077E2F8 = (__int64)v7;
    *a1 = v7;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v17;
}
