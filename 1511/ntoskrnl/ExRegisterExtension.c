/*
 * XREFs of ExRegisterExtension @ 0x1405278B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpFindHost @ 0x140527BE8 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x140673C30 (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 Host; // rdi
  unsigned __int16 v8; // ax
  unsigned int v9; // edx
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  void (__fastcall *v14)(_QWORD, _QWORD); // rax
  void (__fastcall *v15)(__int64, _QWORD); // r8
  _QWORD *v16; // rcx
  unsigned int v18; // ebx

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpHostListLock, v6, (ULONG_PTR)&ExpHostListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !Host )
    return 3221226021LL;
  v8 = a3[2];
  if ( v8 < *(_WORD *)(Host + 28) )
  {
    v18 = -1073741811;
LABEL_35:
    ExpDereferenceHost(Host);
    return v18;
  }
  v9 = 0;
  if ( v8 )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v9) )
    {
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
    v18 = -1073741790;
    goto LABEL_35;
  }
LABEL_14:
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = (volatile signed __int64 *)(Host + 72);
  v12 = KeAbPreAcquire(Host + 72, 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Host + 72), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Host + 72), v12, Host + 72);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( *(_QWORD *)(Host + 80) || (*(_BYTE *)(Host + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
    KeAbPostRelease(Host + 72);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v18 = -1073741771;
    goto LABEL_35;
  }
  v14 = *(void (__fastcall **)(_QWORD, _QWORD))(Host + 48);
  if ( v14 )
    v14(0LL, *(_QWORD *)(Host + 56));
  *(_QWORD *)(Host + 80) = *((_QWORD *)a3 + 1);
  _InterlockedExchange64((volatile __int64 *)(Host + 64), 0LL);
  v15 = *(void (__fastcall **)(__int64, _QWORD))(Host + 48);
  if ( v15 )
    v15(1LL, *(_QWORD *)(Host + 56));
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
  KeAbPostRelease(Host + 72);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v16 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v16 )
    *v16 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
