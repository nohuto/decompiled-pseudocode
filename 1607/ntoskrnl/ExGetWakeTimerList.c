/*
 * XREFs of ExGetWakeTimerList @ 0x14022E018
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryTimerDueTime @ 0x1401D3604 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x1401FEDF8 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v3; // rbp
  void *v4; // r14
  _DWORD *v5; // r15
  _QWORD *v6; // r12
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
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
  int v19; // edx
  __int64 TimerDueTime; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v28 = CurrentThread;
  v5 = a2;
  v6 = a1;
  --CurrentThread->KernelApcDisable;
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v8 )
    v8[26] |= 1u;
  v9 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
      {
        v27 = 0LL;
        PoStoreDiagnosticContext(v10, 0LL, &v27);
        v3 = (v27 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
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
      v27 = 0LL;
      v17 = v3;
      while ( v15 != &ExpWakeTimerList )
      {
        if ( v17 < 0x40 )
          goto LABEL_36;
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 - 24);
        v19 = *((_DWORD *)v15 - 4);
        NewIrql = v18;
        v30 = *(v15 - 1);
        v34 = v19;
        if ( v30 )
          TimerDueTime = KeQueryTimerDueTime((__int64)(v15 - 32));
        else
          TimerDueTime = 0LL;
        v29 = TimerDueTime;
        KeReleaseSpinLock((PKSPIN_LOCK)v15 - 24, NewIrql);
        if ( v29 )
        {
          v21 = v30;
          v14[1] = v29 - MEMORY[0xFFFFF78000000008];
          *((_DWORD *)v14 + 4) = v34;
          v27 = v17 - 24;
          v13 = PoStoreDiagnosticContext(v21, v14 + 3, &v27);
          if ( v13 < 0 )
            goto LABEL_29;
          v16 = (v27 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v27 = v16;
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
      v22 = (unsigned __int64 *)((char *)v14 - v16);
      *v22 = 0LL;
      if ( !v16 )
        v22[1] = 0LL;
LABEL_29:
      CurrentThread = v28;
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
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v23, v24, v25);
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
