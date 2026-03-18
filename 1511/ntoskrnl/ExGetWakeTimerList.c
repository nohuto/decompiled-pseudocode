/*
 * XREFs of ExGetWakeTimerList @ 0x14021457C
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     KeQueryTimerDueTime @ 0x1401C35D8 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x1401E662C (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v3; // rbp
  void *v4; // r14
  _DWORD *v5; // r15
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rdi
  __int64 v10; // rcx
  SIZE_T v11; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  int v13; // edi
  unsigned __int64 *v14; // r15
  __int64 *v15; // r12
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r13
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 TimerDueTime; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r15
  unsigned __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *v26; // [rsp+28h] [rbp-60h]
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  int v32; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v26 = CurrentThread;
  v5 = a2;
  v6 = a1;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
      {
        v25 = 0LL;
        PoStoreDiagnosticContext(v10, 0LL, &v25);
        v3 = (v25 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v13 = -1073741789;
          goto LABEL_31;
        }
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != &ExpWakeTimerList );
    v11 = v3;
    if ( v3 )
      goto LABEL_11;
  }
  v11 = 64LL;
LABEL_11:
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x734C6B57u);
  v4 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v13 = 0;
    v14 = PoolWithQuotaTag;
    if ( v3 )
    {
      v15 = (__int64 *)ExpWakeTimerList;
      v16 = 0LL;
      v25 = 0LL;
      v17 = v3;
      while ( v15 != &ExpWakeTimerList )
      {
        if ( v17 < 0x40 )
          goto LABEL_36;
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 - 24);
        v20 = *((unsigned int *)v15 - 4);
        NewIrql = v18;
        v28 = *(v15 - 1);
        v32 = v20;
        if ( v28 )
          TimerDueTime = KeQueryTimerDueTime((__int64)(v15 - 32), v20, v19);
        else
          TimerDueTime = 0LL;
        v27 = TimerDueTime;
        KeReleaseSpinLock((PKSPIN_LOCK)v15 - 24, NewIrql);
        if ( v27 )
        {
          v22 = v28;
          v14[1] = v27 - MEMORY[0xFFFFF78000000008];
          *((_DWORD *)v14 + 4) = v32;
          v25 = v17 - 24;
          v13 = PoStoreDiagnosticContext(v22, v14 + 3, &v25);
          if ( v13 < 0 )
            goto LABEL_29;
          v16 = (v25 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v25 = v16;
          if ( v17 < v16 )
          {
LABEL_36:
            v13 = -1073741789;
            goto LABEL_29;
          }
          v17 -= v16;
          *v14 = v16;
          v14 = (unsigned __int64 *)((char *)v14 + v16);
        }
        v15 = (__int64 *)*v15;
      }
      v23 = (unsigned __int64 *)((char *)v14 - v16);
      *v23 = 0LL;
      if ( !v16 )
        v23[1] = 0LL;
LABEL_29:
      CurrentThread = v26;
      v6 = a1;
    }
    else
    {
      PoolWithQuotaTag[1] = 0LL;
      LODWORD(v3) = 64;
      *PoolWithQuotaTag = 0LL;
    }
    v5 = a2;
  }
  else
  {
    v13 = -1073741670;
  }
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v13 >= 0 )
  {
    *v6 = v4;
    *v5 = v3;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x734C6B57u);
  }
  return (unsigned int)v13;
}
