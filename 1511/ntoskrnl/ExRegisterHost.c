/*
 * XREFs of ExRegisterHost @ 0x140527A90
 * Callers:
 *     IopInitializeIoQos @ 0x1401427EC (IopInitializeIoQos.c)
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 *     SepInitializeAuthorizationCallbacks @ 0x14075BABC (SepInitializeAuthorizationCallbacks.c)
 *     PsInitSystem @ 0x140763DCC (PsInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExpFindHost @ 0x140527BE8 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x140673C30 (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterHost(__int64 **a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  unsigned int v6; // esi
  __int64 *v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  __int64 Host; // rbp
  __int64 **v13; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)a3 + 2), 0x60uLL, 0x48457845u);
  v6 = 0;
  v7 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (ULONG_PTR)&ExpHostListLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( Host )
  {
    v6 = -1073741771;
    ExpDereferenceHost(v7);
    ExpDereferenceHost(Host);
  }
  else
  {
    v13 = (__int64 **)qword_1406FB310;
    *v7 = (__int64)&ExpHostList;
    v7[1] = (__int64)v13;
    if ( *v13 != &ExpHostList )
      __fastfail(3u);
    *v13 = v7;
    qword_1406FB310 = (__int64)v7;
    *a1 = v7;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
