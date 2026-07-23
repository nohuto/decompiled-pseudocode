/*
 * XREFs of ExRegisterExtension @ 0x140553780
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpFindHost @ 0x140553AB8 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1406B6AE8 (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 Host; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // ax
  unsigned int v12; // edx
  struct _KTHREAD *v13; // rax
  volatile signed __int64 *v14; // rsi
  _BYTE *v15; // rax
  _BYTE *v16; // rbp
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  void (__fastcall *v18)(__int64, _QWORD); // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpHostListLock, v6, (ULONG_PTR)&ExpHostListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( !Host )
    return 3221226021LL;
  v11 = a3[2];
  if ( v11 < *(_WORD *)(Host + 28) )
  {
    v24 = -1073741811;
LABEL_35:
    ExpDereferenceHost(Host);
    return v24;
  }
  v12 = 0;
  if ( v11 )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v12) )
    {
      if ( ++v12 >= v11 )
        goto LABEL_14;
    }
    v24 = -1073741790;
    goto LABEL_35;
  }
LABEL_14:
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = (volatile signed __int64 *)(Host + 72);
  v15 = (_BYTE *)KeAbPreAcquire(Host + 72, 0LL, 0);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Host + 72), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Host + 72), v15, Host + 72);
  if ( v16 )
    v16[26] |= 1u;
  if ( *(_QWORD *)(Host + 80) || (*(_BYTE *)(Host + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
    KeAbPostRelease(Host + 72);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
    v24 = -1073741771;
    goto LABEL_35;
  }
  v17 = *(void (__fastcall **)(_QWORD, _QWORD))(Host + 48);
  if ( v17 )
    v17(0LL, *(_QWORD *)(Host + 56));
  *(_QWORD *)(Host + 80) = *((_QWORD *)a3 + 1);
  _InterlockedExchange64((volatile __int64 *)(Host + 64), 0LL);
  v18 = *(void (__fastcall **)(__int64, _QWORD))(Host + 48);
  if ( v18 )
    v18(1LL, *(_QWORD *)(Host + 56));
  if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
  KeAbPostRelease(Host + 72);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
  v22 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v22 )
    *v22 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
