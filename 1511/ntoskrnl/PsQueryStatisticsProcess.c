/*
 * XREFs of PsQueryStatisticsProcess @ 0x1403EC180
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1403EBDD8 (PspQueryProcessAccountingInformationCallback.c)
 *     ExpCopyProcessInfo @ 0x1403EBED0 (ExpCopyProcessInfo.c)
 *     PspEnforceLimitsProcessCallback @ 0x1403EC768 (PspEnforceLimitsProcessCallback.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14044A950 (EtwTraceAppStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v5; // r14
  __int64 v6; // rdi
  unsigned int v7; // edi
  unsigned int v8; // esi
  _QWORD *i; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned __int64 *)(a1 + 1696);
  v6 = KeAbPreAcquire(a1 + 1696, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v6, (ULONG_PTR)v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = *(_DWORD *)(a1 + 620);
  v8 = *(_DWORD *)(a1 + 624);
  a2[2] = *(_QWORD *)(a1 + 592);
  a2[3] = *(_QWORD *)(a1 + 600);
  a2[4] = *(_QWORD *)(a1 + 1208);
  a2[5] = *(_QWORD *)(a1 + 1216);
  a2[6] = *(_QWORD *)(a1 + 1224);
  a2[7] = *(_QWORD *)(a1 + 1232);
  a2[8] = *(_QWORD *)(a1 + 1240);
  a2[9] = *(_QWORD *)(a1 + 1248);
  for ( i = *(_QWORD **)(a1 + 1160); i != (_QWORD *)(a1 + 1160); i = (_QWORD *)*i )
  {
    v7 += *((_DWORD *)i - 257);
    v8 += *((_DWORD *)i - 237);
    a2[2] += *(i - 201);
    a2[3] += *((unsigned int *)i - 335);
    a2[4] += *(i - 30);
    a2[5] += *(i - 29);
    a2[6] += *(i - 28);
    a2[7] += *(i - 27);
    a2[8] += *(i - 26);
    a2[9] += *(i - 25);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v10 = KeMaximumIncrement;
  *a2 = KeMaximumIncrement * (unsigned __int64)v7;
  result = v10 * v8;
  a2[1] = result;
  return result;
}
