/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x14022C9F8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiWsSwapPageFileNumber @ 0x1400DCEE4 (MiWsSwapPageFileNumber.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v12; // rcx
  unsigned int v13; // esi
  __int16 v14; // ax
  _QWORD v15[12]; // [rsp+38h] [rbp-29h] BYREF
  void *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 5344);
  memset(v15, 0, sizeof(v15));
  v15[3] = a1;
  v15[4] = -1LL;
  v6 = *(_BYTE *)(v5 + 164);
  v15[5] = 0x10000LL;
  BYTE4(v15[9]) = v6 & 0xF;
  v15[8] = &v15[7];
  v15[7] = &v15[7];
  LOWORD(v15[6]) = 0;
  BYTE2(v15[6]) = 6;
  HIDWORD(v15[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 1016, 0LL, 0LL, v7);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1016), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1016), v8, a1 + 1016, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
  }
  v12 = *(_QWORD **)(a1 + 1264);
  v15[1] = a1 + 1256;
  v15[2] = v12;
  if ( *v12 != a1 + 1256 )
    __fastfail(3u);
  *v12 = &v15[1];
  *(_QWORD *)(a1 + 1264) = &v15[1];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  __writecr8(CurrentIrql);
  KeReleaseSemaphoreEx(a1 + 1224, 0, 1, v9, 1);
  KeWaitForSingleObject(&v15[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1016), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1016));
  KeAbPostRelease(a1 + 1016);
  v14 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v14;
  if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  _InterlockedExchange((volatile __int32 *)(a1 + 1008), 0);
}
