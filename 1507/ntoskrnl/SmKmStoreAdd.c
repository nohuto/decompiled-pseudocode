/*
 * XREFs of SmKmStoreAdd @ 0x1404F97FC
 * Callers:
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 * Callees:
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SmWdStartMonitoring @ 0x140258848 (SmWdStartMonitoring.c)
 *     SmKmEtwLogStoreChange @ 0x1406DC70C (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // edi
  unsigned int v6; // r13d
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r14
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  __int16 v19; // cx
  int v20; // eax
  __int64 v21; // r14
  unsigned __int64 v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  _DWORD *v32; // [rsp+50h] [rbp-68h]

  v4 = 0;
  v6 = 0;
  v32 = *(_DWORD **)a3;
  while ( 1 )
  {
    v7 = a1 + 176LL * v6;
    if ( !*(_QWORD *)v7 )
      break;
LABEL_3:
    if ( ++v6 >= 0x20 )
      return (unsigned int)-1073741671;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)(v7 + 168);
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire(v7 + 168, 0LL, 0LL, (__int64)a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 168), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 168), v10, v7 + 168, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( *(_QWORD *)v7 )
  {
    v21 = a2;
    goto LABEL_28;
  }
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  v14 = KeAbPreAcquire(a1 + 5792, 0LL, 0LL, v11);
  v16 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5792), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5792), v14, a1 + 5792, v15);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  if ( (*v32 & 0x100) == 0 )
  {
LABEL_15:
    *(_WORD *)(v7 + 24) ^= (*(_WORD *)(v7 + 24) ^ (((unsigned __int8)*v32 == 1) << 11)) & 0x800;
    if ( (*(_WORD *)(v7 + 24) & 0x800) != 0 && ++*(_DWORD *)(a1 + 5804) == 1 )
    {
      SmWdStartMonitoring(a1 + 5640);
      (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 5632))(a1, 1LL, 3LL);
    }
    *(_BYTE *)(v7 + 26) &= 0xFCu;
    *(_WORD *)(v7 + 24) ^= (*(_WORD *)(v7 + 24) ^ (*v32 >> 18 << 12)) & 0x1000;
    *(_QWORD *)(v7 + 64) = *(_QWORD *)(a3 + 16);
    ++*(_DWORD *)(a1 + 5800);
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(a3 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5792), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5792));
    KeAbPostRelease(a1 + 5792);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    *(_QWORD *)v7 = a2;
    do
    {
      v19 = *(_WORD *)(v7 + 24) ^ (*(_WORD *)(v7 + 24) ^ (*(_WORD *)(v7 + 24) + 1)) & 0x7FF;
      *(_WORD *)(v7 + 24) = v19;
      v20 = v6 | (32 * (v19 & 0x7FF));
      *a4 = v20;
    }
    while ( v20 == 65567 );
    v9 = (volatile signed __int64 *)(v7 + 168);
    a2 = 0LL;
    v21 = 0LL;
    if ( (dword_140353094 & 0x10) != 0 )
      SmKmEtwLogStoreChange(&qword_140353088, *(_QWORD *)v7, &SmEventStoreCreate);
    if ( (*(_WORD *)(v7 + 24) & 0x800) != 0 )
    {
      KeInitializeApc(
        v7 + 72,
        *(_QWORD *)(a3 + 8),
        0,
        (__int64)SmWdWritesApcRoutine,
        (__int64)PopPoCoalescinCallback,
        0LL,
        0,
        0LL);
      _InterlockedExchange64((volatile __int64 *)(v7 + 16), 0LL);
    }
    _InterlockedExchange64((volatile __int64 *)(v7 + 8), 0LL);
    _m_prefetchw((const void *)(v7 + 8));
    v22 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v22 + 2, v22) )
      ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8));
LABEL_28:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable + 1;
    v23->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v21 )
      return v4;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 5808) == -1 )
  {
    *(_DWORD *)(a1 + 5808) = v6;
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5792), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5792));
  KeAbPostRelease(a1 + 5792);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 168), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 168));
  KeAbPostRelease(v7 + 168);
  v28 = KeGetCurrentThread();
  v29 = v28->KernelApcDisable + 1;
  v28->KernelApcDisable = v29;
  if ( !v29
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
    && !v28->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)-1073740757;
}
