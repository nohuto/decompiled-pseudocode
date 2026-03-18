/*
 * XREFs of SmKmStoreAdd @ 0x1404D1C00
 * Callers:
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     SmWdStartMonitoring @ 0x1402096B8 (SmWdStartMonitoring.c)
 *     SmKmEtwLogStoreChange @ 0x140659FC8 (SmKmEtwLogStoreChange.c)
 */

__int64 __fastcall SmKmStoreAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // edi
  unsigned int v6; // r13d
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  struct _KTHREAD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int16 v15; // cx
  int v16; // eax
  __int64 v17; // r14
  ULONGLONG *v18; // rax
  _DWORD *v20; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v20 = *(_DWORD **)a3;
  v6 = 0;
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
  v10 = KeAbPreAcquire(v7 + 168, 0LL, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 168), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 168), v10, v7 + 168);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( *(_QWORD *)v7 )
  {
    v17 = a2;
    goto LABEL_25;
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  v13 = KeAbPreAcquire(a1 + 5792, 0LL, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 5792), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 5792), v13, a1 + 5792);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  if ( (*v20 & 0x100) == 0 )
  {
LABEL_15:
    *(_WORD *)(v7 + 24) ^= (*(_WORD *)(v7 + 24) ^ (((unsigned __int8)*v20 == 1) << 11)) & 0x800;
    if ( (*(_WORD *)(v7 + 24) & 0x800) != 0 && ++*(_DWORD *)(a1 + 5804) == 1 )
    {
      SmWdStartMonitoring(a1 + 5640);
      (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 5632))(a1, 1LL, 3LL);
    }
    *(_BYTE *)(v7 + 26) &= 0xFCu;
    *(_WORD *)(v7 + 24) ^= (*(_WORD *)(v7 + 24) ^ (*v20 >> 18 << 12)) & 0x1000;
    *(_QWORD *)(v7 + 64) = *(_QWORD *)(a3 + 16);
    ++*(_DWORD *)(a1 + 5800);
    *(_DWORD *)(v7 + 28) = *(_DWORD *)(a3 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5792), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 5792));
    KeAbPostRelease(a1 + 5792);
    KeLeaveCriticalRegion();
    *(_QWORD *)v7 = a2;
    do
    {
      v15 = *(_WORD *)(v7 + 24) ^ (*(_WORD *)(v7 + 24) ^ (*(_WORD *)(v7 + 24) + 1)) & 0x7FF;
      *(_WORD *)(v7 + 24) = v15;
      v16 = v6 | (32 * (v15 & 0x7FF));
      *a4 = v16;
    }
    while ( v16 == 65567 );
    a2 = 0LL;
    v9 = (volatile signed __int64 *)(v7 + 168);
    v17 = 0LL;
    v18 = SmEtwEnabled(0);
    if ( v18 )
      SmKmEtwLogStoreChange(v18, *(_QWORD *)v7, &SmEventStoreCreate);
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
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v7 + 8));
LABEL_25:
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    if ( !v17 )
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
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 168), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 168));
  KeAbPostRelease(v7 + 168);
  KeLeaveCriticalRegion();
  return (unsigned int)-1073740757;
}
