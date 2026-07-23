/*
 * XREFs of PsQueryStatisticsProcess @ 0x14044DA90
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     PspEnforceLimitsProcessCallback @ 0x1404684A4 (PspEnforceLimitsProcessCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140468A1C (PspQueryProcessAccountingInformationCallback.c)
 *     ExpCopyProcessInfo @ 0x1404EA2E0 (ExpCopyProcessInfo.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeQueryValuesThread @ 0x1400698D0 (KeQueryValuesThread.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v4; // r13
  __int64 v5; // rbx
  _QWORD *v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  _QWORD *i; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // [rsp+60h] [rbp+8h] BYREF
  char v15; // [rsp+64h] [rbp+Ch]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (unsigned __int64 *)(a1 + 1712);
  v5 = KeAbPreAcquire(a1 + 1712, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v5, (ULONG_PTR)v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = (_QWORD *)(a1 + 1160);
  v7 = *(_DWORD *)(a1 + 620);
  v8 = *(_DWORD *)(a1 + 624);
  v9 = *(_DWORD *)(a1 + 1960);
  a2[3] = *(_QWORD *)(a1 + 592);
  a2[4] = *(_QWORD *)(a1 + 600);
  a2[5] = *(_QWORD *)(a1 + 1208);
  a2[6] = *(_QWORD *)(a1 + 1216);
  a2[7] = *(_QWORD *)(a1 + 1224);
  a2[8] = *(_QWORD *)(a1 + 1232);
  a2[9] = *(_QWORD *)(a1 + 1240);
  a2[10] = *(_QWORD *)(a1 + 1248);
  for ( i = *(_QWORD **)(a1 + 1160); i != v6; i = (_QWORD *)*i )
  {
    v7 += *((_DWORD *)i - 259);
    v11 = i - 211;
    v8 += *((_DWORD *)i - 239);
    v9 += *((_DWORD *)i + 80);
    KeQueryValuesThread((__int64)(i - 211), (__int64)&v14);
    if ( v15 == 1 )
      v9 = MEMORY[0xFFFFF78000000320] + v9 - v14;
    a2[3] += v11[9];
    a2[4] += *((unsigned int *)v11 + 85);
    a2[5] += v11[181];
    a2[6] += v11[182];
    a2[7] += v11[183];
    a2[8] += v11[184];
    a2[9] += v11[185];
    a2[10] += v11[186];
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v12 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v7;
  a2[1] = v12 * v8;
  result = v12 * v9;
  a2[2] = result;
  return result;
}
