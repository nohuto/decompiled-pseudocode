/*
 * XREFs of PsQueryStatisticsProcess @ 0x140508494
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsProcessCallback @ 0x140507354 (PspEnforceLimitsProcessCallback.c)
 *     EtwTraceAppStateChange @ 0x1405075DC (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x14054B990 (PspQueryProcessAccountingInformationCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r9
  unsigned int v10; // esi
  unsigned int v11; // r15d
  __int64 v12; // rax
  _QWORD **v13; // r14
  _QWORD *i; // r8
  __int64 v15; // r9
  _QWORD *v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(a1 + 1688);
  v8 = KeAbPreAcquire(a1 + 1688, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = *(_DWORD *)(a1 + 620);
  v11 = *(_DWORD *)(a1 + 624);
  a2[2] = *(_QWORD *)(a1 + 592);
  a2[3] = *(_QWORD *)(a1 + 600);
  a2[4] = *(_QWORD *)(a1 + 1200);
  a2[5] = *(_QWORD *)(a1 + 1208);
  a2[6] = *(_QWORD *)(a1 + 1216);
  a2[7] = *(_QWORD *)(a1 + 1224);
  a2[8] = *(_QWORD *)(a1 + 1232);
  v12 = *(_QWORD *)(a1 + 1240);
  v13 = (_QWORD **)(a1 + 1152);
  a2[9] = v12;
  for ( i = *v13; i != v13; i = (_QWORD *)*i )
  {
    v15 = 6LL;
    v16 = a2 + 4;
    v10 += *((_DWORD *)i - 257);
    v11 += *((_DWORD *)i - 237);
    a2[2] += *(i - 201);
    a2[3] += *((unsigned int *)i - 335);
    do
    {
      *v16 += *(_QWORD *)((char *)v16 + (char *)(i - 210) - (char *)a2 + 1408);
      ++v16;
      --v15;
    }
    while ( v15 );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v17 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v18 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v10;
  result = v18 * v11;
  a2[1] = result;
  return result;
}
