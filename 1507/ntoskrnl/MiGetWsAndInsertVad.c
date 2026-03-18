/*
 * XREFs of MiGetWsAndInsertVad @ 0x14008A9F0
 * Callers:
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x140467DD0 (MiInsertProcessVads.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1405C008C (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertVad @ 0x14008AC30 (MiInsertVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetWsAndInsertVad(__int64 a1)
{
  _KPROCESS *Process; // rsi
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v5; // ebx
  signed __int32 i; // edx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rdi
  __int64 v17; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v5 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    for ( i = *v3; (*v3 & 0xBFFFFFFF) != 0x80000000; i = *v3 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, i | 0x40000000, i);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  MiInsertVad(a1, Process);
  result = MiUnlockWorkingSetExclusive(&Process[1].IdealNode[8], CurrentIrql);
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 )
  {
    v9 = *(__int64 **)(a1 + 72);
    *(_QWORD *)(a1 + 112) = (unsigned __int64)Process | 1;
    v10 = (_QWORD *)(a1 + 96);
    v11 = *v9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = KeAbPreAcquire(v11 + 112, 0LL, 0LL, v8);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 112), 0LL) )
      ExfAcquirePushLockExclusiveEx(v11 + 112, v13, v11 + 112);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = *(_QWORD *)(v11 + 8);
    *v10 = v15;
    v10[1] = v11 + 8;
    if ( *(_QWORD *)(v15 + 8) != v11 + 8 )
      __fastfail(3u);
    *(_QWORD *)(v15 + 8) = v10;
    *(_QWORD *)(v11 + 8) = v10;
    v16 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11 + 112);
    KeAbPostRelease(v11 + 112);
    result = (unsigned int)++v16->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&v16->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery(v17);
    }
  }
  return result;
}
