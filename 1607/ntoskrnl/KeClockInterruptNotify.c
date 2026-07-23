/*
 * XREFs of KeClockInterruptNotify @ 0x1400D7710
 * Callers:
 *     <none>
 * Callees:
 *     KiEventClockStateChange @ 0x14009D8BC (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14009D8F8 (KiSetPendingTick.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400A2758 (KiShouldScanSharedReadyQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     KiForwardTick @ 0x1400D6860 (KiForwardTick.c)
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x1400DB0E0 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400DB160 (KiCheckPreferredHeteroProcessor.c)
 *     KiComputeNewSystemTime @ 0x1400DB180 (KiComputeNewSystemTime.c)
 *     PoExecutePerfCheck @ 0x1400DB200 (PoExecutePerfCheck.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 */

__int64 __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  bool v3; // zf
  char v4; // cl
  struct _KPRCB *v5; // rbx
  int v6; // esi
  _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  char v9; // r12
  struct _KPRCB *v10; // r13
  __int64 v11; // r15
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rbx
  unsigned __int16 v23; // cx
  __int16 *v24; // r8
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  struct _KPRCB *v29; // rbx
  int v30; // esi
  _KTHREAD *v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  volatile CCHAR v34; // t1
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // [rsp+30h] [rbp-118h]
  __int64 v39; // [rsp+38h] [rbp-110h] BYREF
  __int64 v40; // [rsp+40h] [rbp-108h]
  _QWORD *v41; // [rsp+48h] [rbp-100h]
  __int64 v42; // [rsp+50h] [rbp-F8h] BYREF
  _WORD v43[88]; // [rsp+60h] [rbp-E8h] BYREF
  int v44; // [rsp+140h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = (*(_BYTE *)(a1 + 368) & 1) == 0;
  v39 = 0LL;
  v4 = !v3;
  v37 = v4;
  if ( !CurrentPrcb->ClockOwner )
  {
    v5 = KeGetCurrentPrcb();
    ++v5->ClockInterrupts;
    ++v5->InterruptLastCount;
    _disable();
    v6 = MEMORY[0xFFFFF78000000320];
    if ( (v44 & 0x200) != 0 )
      _enable();
    KeAccumulateTicks((_DWORD)v5, v5->LastTick, MEMORY[0xFFFFF78000000320], a2, v4);
    CurrentThread = v5->CurrentThread;
    v5->ClockKeepAlive = 1;
    if ( CurrentThread != v5->IdleThread
      && (CurrentThread->CycleTime >= CurrentThread->QuantumTarget
       || (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, v5))
      || (result = KiCheckGroupSchedulingQuantumEnd(v5, CurrentThread), (_BYTE)result) )
    {
      v5->QuantumEnd = 1;
      return KiRequestSoftwareInterrupt(v5, 2u);
    }
    else if ( (signed int)(v5->ReadyScanTick - v6) < 0 )
    {
      result = KiShouldScanSharedReadyQueue((__int64)v5);
      if ( !(_DWORD)result || (result = v5->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
      {
        if ( (v5->ReadySummary & 0x7FFE) == 0 )
        {
          result = (unsigned int)(v6 + 75);
          v5->ReadyScanTick = result;
        }
      }
    }
    return result;
  }
  v41 = (_QWORD *)((char *)&KiClockTickTraces + 24 * (unsigned int)KiClockTickTraceIndex);
  KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
  v9 = 0;
  v41[1] = MEMORY[0xFFFFF78000000008];
  v10 = KeGetCurrentPrcb();
  v11 = MEMORY[0xFFFFF78000000320];
  _disable();
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v12 = MEMORY[0xFFFFF78000000340];
  while ( (v12 & 1) != 0 )
  {
    v12 = MEMORY[0xFFFFF78000000340];
LABEL_67:
    _mm_pause();
  }
  v13 = v12;
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v12 + 1, v12);
  if ( v13 != v12 )
    goto LABEL_67;
  _mm_mfence();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)PerformanceCounter.QuadPart);
  *((_QWORD *)&v17 + 1) = 0LL;
  if ( v16 > MEMORY[0xFFFFF78000000350] )
  {
    v18 = v16 - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v18 <<= MEMORY[0xFFFFF78000000369];
    v17 = v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v40 = *((_QWORD *)&v17 + 1);
    KiInterruptTimeErrorAccumulator += v17;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v17 )
      v40 = ++*((_QWORD *)&v17 + 1);
  }
  v19 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v17 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v15);
  MEMORY[0xFFFFF78000000014] = v15;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v17 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v17 + 1);
  MEMORY[0xFFFFF78000000348] = v16;
  MEMORY[0xFFFFF78000000350] = v16;
  v20 = MEMORY[0xFFFFF78000000320];
  v21 = (unsigned int)KiTickOffset - *((_QWORD *)&v17 + 1);
  if ( v21 <= 0 )
  {
    v33 = 1LL;
    v21 += KeMaximumIncrement;
    if ( v21 <= 0 )
    {
      v34 = KeNumberProcessorsGroup0[1];
      v35 = ((unsigned __int64)(((unsigned __int64)-v21
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v34)
          + 1;
      LODWORD(v21) = v35 * KeMaximumIncrement + v21;
      v33 = v35 + 1;
    }
    v20 = v33 + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (unsigned __int64)(v33 + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += v33;
  }
  KiTickOffset = v21;
  ++MEMORY[0xFFFFF78000000340];
  if ( (v44 & 0x200) != 0 )
    _enable();
  if ( KeMinimumIncrement - 1 + (int)v19 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v19;
  if ( v20 != v11 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
  }
  PoExecutePerfCheck();
  v22 = v19 >> 18;
  if ( KiGroupSchedulingEnabled && v20 > KiGenerationEndTick )
  {
    v9 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    KiForwardTick((__int64)v10, KeNumberProcessors_0, v22, v9, (char *)v43);
    v23 = KiClockCheckPending[0];
    if ( KiClockCheckPending[0] < v43[0] )
    {
      v24 = v43;
    }
    else
    {
      v24 = KiClockCheckPending;
      v23 = v43[0];
    }
    word_1402F6B62 = 20;
    KiClockCheckPending[0] = *v24;
    v25 = 0;
    if ( v23 )
    {
      v25 = v23;
      v26 = 0LL;
      v27 = v23;
      do
      {
        *(_QWORD *)&KiClockCheckPending[v26 + 4] |= *(_QWORD *)&v43[v26 + 4];
        v26 += 4LL;
        --v27;
      }
      while ( v27 );
    }
    for ( ; v25 < (unsigned __int16)*v24; *(_QWORD *)&KiClockCheckPending[4 * v28 + 4] = *(_QWORD *)&v24[4 * v28 + 4] )
      v28 = v25++;
    for ( dword_1402F6B64 = 0; v25 < (unsigned __int16)word_1402F6B62; *(_QWORD *)&KiClockCheckPending[4 * v36 + 4] = 0LL )
      v36 = v25++;
  }
  v29 = KeGetCurrentPrcb();
  ++v29->ClockInterrupts;
  ++v29->InterruptLastCount;
  _disable();
  v30 = MEMORY[0xFFFFF78000000320];
  if ( (v44 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)v29, v29->LastTick, MEMORY[0xFFFFF78000000320], a2, v37);
  v31 = v29->CurrentThread;
  v29->ClockKeepAlive = 1;
  if ( v31 != v29->IdleThread
    && (v31->CycleTime >= v31->QuantumTarget || (unsigned int)KiCheckPreferredHeteroProcessor(v31, v29))
    || (unsigned __int8)KiCheckGroupSchedulingQuantumEnd(v29, v31) )
  {
    v29->QuantumEnd = 1;
    KiRequestSoftwareInterrupt(v29, 2u);
  }
  else if ( (signed int)(v29->ReadyScanTick - v30) < 0
         && (!KiShouldScanSharedReadyQueue((__int64)v29) || (v29->SharedReadyQueue->ReadySummary & 0x7FFE) == 0)
         && (v29->ReadySummary & 0x7FFE) == 0 )
  {
    v29->ReadyScanTick = v30 + 75;
  }
  v32 = v41;
  *v41 = MEMORY[0xFFFFF78000000350];
  if ( KiClockState == 2 )
  {
    v39 = (unsigned int)KiLastRequestedTimeIncrement;
    off_1402F25A0();
    KiSetPendingTick(1);
    _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, 2, &v42, &v39);
  }
  result = MEMORY[0xFFFFF78000000008] + (unsigned int)KeTimeIncrement;
  v32[2] = MEMORY[0xFFFFF78000000008];
  KiClockTimerNextTickTime = result;
  return result;
}
