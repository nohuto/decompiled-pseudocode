/*
 * XREFs of ExRegisterExtension @ 0x140594750
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpFindHost @ 0x140594AFC (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1406F824C (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 Host; // rdi
  __int64 v10; // r9
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  unsigned int v14; // edx
  struct _KTHREAD *v15; // rax
  volatile signed __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rbp
  void (__fastcall *v20)(_QWORD, _QWORD); // rax
  void (__fastcall *v21)(__int64, _QWORD); // r8
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  _QWORD *v24; // rcx
  unsigned int v26; // ebx
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpHostListLock, v7, (ULONG_PTR)&ExpHostListLock, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !Host )
    return 3221226021LL;
  v13 = a3[2];
  if ( v13 < *(_WORD *)(Host + 28) )
  {
    v26 = -1073741811;
LABEL_48:
    ExpDereferenceHost(Host);
    return v26;
  }
  v14 = 0;
  if ( v13 )
  {
    v10 = *((_QWORD *)a3 + 1);
    while ( *(_QWORD *)(v10 + 8LL * v14) )
    {
      if ( ++v14 >= v13 )
        goto LABEL_17;
    }
    v26 = -1073741790;
    goto LABEL_48;
  }
LABEL_17:
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v16 = (volatile signed __int64 *)(Host + 72);
  v17 = KeAbPreAcquire(Host + 72, 0LL, 0LL, v10);
  v19 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Host + 72), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Host + 72), v17, Host + 72, v18);
  if ( v19 )
    *(_BYTE *)(v19 + 26) |= 1u;
  if ( *(_QWORD *)(Host + 80) || (*(_BYTE *)(Host + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
    KeAbPostRelease(Host + 72);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v26 = -1073741771;
    goto LABEL_48;
  }
  v20 = *(void (__fastcall **)(_QWORD, _QWORD))(Host + 48);
  if ( v20 )
    v20(0LL, *(_QWORD *)(Host + 56));
  *(_QWORD *)(Host + 80) = *((_QWORD *)a3 + 1);
  _InterlockedExchange64((volatile __int64 *)(Host + 64), 0LL);
  v21 = *(void (__fastcall **)(__int64, _QWORD))(Host + 48);
  if ( v21 )
    v21(1LL, *(_QWORD *)(Host + 56));
  if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
  KeAbPostRelease(Host + 72);
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v24 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v24 )
    *v24 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
