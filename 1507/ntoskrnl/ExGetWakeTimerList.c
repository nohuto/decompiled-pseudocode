/*
 * XREFs of ExGetWakeTimerList @ 0x140264560
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeQueryTimerDueTime @ 0x1401FF550 (KeQueryTimerDueTime.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PoStoreDiagnosticContext @ 0x140233764 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v5; // rsi
  _QWORD *v6; // r15
  unsigned __int64 v7; // rbp
  void *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 *v12; // rdi
  __int64 v13; // rcx
  SIZE_T v14; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  int v16; // edi
  unsigned __int64 *v17; // r15
  __int64 *v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r12
  __int64 v21; // rcx
  volatile signed __int32 *v22; // r12
  __int64 TimerDueTime; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r15
  __int16 v26; // ax
  unsigned __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 **v30; // [rsp+30h] [rbp-68h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 *v36; // [rsp+B0h] [rbp+18h]
  int v37; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v38; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v9, (ULONG_PTR)&ExpWakeTimerLock, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v13 = *(v12 - 1);
      if ( v13 )
      {
        v38 = 0LL;
        PoStoreDiagnosticContext(v13, 0LL, &v38);
        v7 = (v38 + 31 + v7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v7 > 0xFFFFFFFF )
        {
          v16 = -1073741789;
          goto LABEL_39;
        }
      }
      v12 = (__int64 *)*v12;
    }
    while ( v12 != &ExpWakeTimerList );
    v14 = v7;
    if ( v7 )
      goto LABEL_11;
  }
  v14 = 64LL;
LABEL_11:
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v14, 0x734C6B57u);
  v8 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v16 = 0;
    v17 = PoolWithQuotaTag;
    if ( v7 )
    {
      v18 = (__int64 *)ExpWakeTimerList;
      v19 = 0LL;
      v38 = 0LL;
      v20 = v7;
      v28 = v7;
      while ( 1 )
      {
        v30 = (__int64 **)v18;
        if ( v18 == &ExpWakeTimerList )
          break;
        if ( v20 < 0x40 )
          goto LABEL_36;
        v21 = (__int64)(v18 - 32);
        v36 = v18 - 32;
        v22 = (volatile signed __int32 *)(v18 - 24);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v22);
          v21 = (__int64)v36;
        }
        else
        {
          if ( _interlockedbittestandset64(v22, 0LL) )
          {
            KxWaitForSpinLockAndAcquire(v22);
            v21 = (__int64)v36;
          }
          v19 = v38;
        }
        TimerDueTime = *(_QWORD *)(v21 + 248);
        v32 = TimerDueTime;
        v37 = *(_DWORD *)(v21 + 240);
        if ( TimerDueTime )
          TimerDueTime = KeQueryTimerDueTime(v21);
        v29 = TimerDueTime;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)v22, retaddr);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
          v19 = v38;
        }
        __writecr8(CurrentIrql);
        v20 = v28;
        if ( v29 )
        {
          v24 = v29 - MEMORY[0xFFFFF78000000008];
          *((_DWORD *)v17 + 4) = v37;
          v17[1] = v24;
          v38 = v28 - 24;
          v16 = PoStoreDiagnosticContext(v32, v17 + 3, &v38);
          if ( v16 < 0 )
            goto LABEL_37;
          v19 = (v38 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v38 = v19;
          if ( v28 < v19 )
          {
LABEL_36:
            v16 = -1073741789;
            goto LABEL_37;
          }
          v20 = v28 - v19;
          *v17 = v19;
          v28 -= v19;
          v17 = (unsigned __int64 *)((char *)v17 + v19);
        }
        v18 = *v30;
      }
      v25 = (unsigned __int64 *)((char *)v17 - v19);
      *v25 = 0LL;
      if ( !v19 )
        v25[1] = 0LL;
LABEL_37:
      v5 = a2;
    }
    else
    {
      PoolWithQuotaTag[1] = 0LL;
      LODWORD(v7) = 64;
      *PoolWithQuotaTag = 0LL;
    }
    v6 = a1;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_39:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  v26 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v16 >= 0 )
  {
    *v6 = v8;
    *v5 = v7;
  }
  else if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x734C6B57u);
  }
  return (unsigned int)v16;
}
