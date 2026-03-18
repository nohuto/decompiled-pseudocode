/*
 * XREFs of KeClockInterruptNotify @ 0x140046990
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiEventClockStateChange @ 0x14003559C (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x1400355D8 (KiSetPendingTick.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KiForwardTick @ 0x140045900 (KiForwardTick.c)
 *     PoExecutePerfCheck @ 0x140045CE0 (PoExecutePerfCheck.c)
 *     KiUpdateRunTime @ 0x140045DB0 (KiUpdateRunTime.c)
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 *     KiShouldScanSharedReadyQueue @ 0x1400E53FC (KiShouldScanSharedReadyQueue.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     KiGenerateHeteroSets @ 0x1401C9790 (KiGenerateHeteroSets.c)
 *     KiGetHeteroCpuPolicyThread @ 0x1401C97D4 (KiGetHeteroCpuPolicyThread.c)
 */

__int64 __fastcall KeClockInterruptNotify(__int64 a1, unsigned __int8 a2)
{
  char v2; // bp
  char v3; // r12
  __int64 v4; // r13
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int128 v8; // rax
  LONGLONG v9; // rdx
  __int64 v10; // r11
  unsigned __int128 v11; // rax
  LONGLONG v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rdx
  volatile CCHAR v17; // t1
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r9
  __int16 *v21; // r8
  unsigned __int16 v22; // dx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 result; // rax
  struct _KPRCB *v28; // rbx
  __int16 v29; // ax
  int v30; // edi
  _KTHREAD *CurrentThread; // r11
  int HeteroCpuPolicyThread; // eax
  __int64 v33; // r11
  _QWORD *v34; // r10
  char v35; // cl
  unsigned __int64 v36; // rcx
  __int64 v38; // [rsp+38h] [rbp-130h] BYREF
  __int64 v39; // [rsp+40h] [rbp-128h] BYREF
  __int64 v40; // [rsp+48h] [rbp-120h]
  _QWORD *v41; // [rsp+50h] [rbp-118h]
  __int64 v42; // [rsp+58h] [rbp-110h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp-108h]
  __int64 v44; // [rsp+68h] [rbp-100h]
  char v45[16]; // [rsp+70h] [rbp-F8h] BYREF
  _WORD v46[88]; // [rsp+80h] [rbp-E8h] BYREF
  int v47; // [rsp+160h] [rbp-8h]

  v2 = *(_BYTE *)(a1 + 368) & 1;
  v38 = 0LL;
  if ( KeGetCurrentPrcb()->ClockOwner )
  {
    v41 = (_QWORD *)((char *)&KiClockTickTraces + 24 * (unsigned int)KiClockTickTraceIndex);
    KiClockTickTraceIndex = ((_BYTE)KiClockTickTraceIndex + 1) & 0xF;
    v3 = 0;
    v41[1] = MEMORY[0xFFFFF78000000008];
    v4 = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    _m_prefetchw((const void *)0xFFFFF78000000340LL);
    v5 = MEMORY[0xFFFFF78000000340];
    while ( 1 )
    {
      if ( (v5 & 1) != 0 )
      {
        v5 = MEMORY[0xFFFFF78000000340];
      }
      else
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v5 + 1, v5);
        if ( v6 == v5 )
        {
          _mm_mfence();
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          *((_QWORD *)&v8 + 1) = 0LL;
          if ( PerformanceCounter.QuadPart > MEMORY[0xFFFFF78000000348] )
          {
            v9 = PerformanceCounter.QuadPart - MEMORY[0xFFFFF78000000348];
            if ( MEMORY[0xFFFFF78000000368] )
              v9 <<= MEMORY[0xFFFFF78000000368];
            v8 = (unsigned __int64)v9 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
            v44 = *((_QWORD *)&v8 + 1);
            KiSystemTimeErrorAccumulator += v8;
            if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v8 )
              v44 = ++*((_QWORD *)&v8 + 1);
          }
          v10 = *((_QWORD *)&v8 + 1) + MEMORY[0xFFFFF78000000014];
          *((_QWORD *)&v11 + 1) = 0LL;
          if ( PerformanceCounter.QuadPart > MEMORY[0xFFFFF78000000350] )
          {
            v12 = PerformanceCounter.QuadPart - MEMORY[0xFFFFF78000000350];
            if ( MEMORY[0xFFFFF78000000369] )
              v12 <<= MEMORY[0xFFFFF78000000369];
            v11 = (unsigned __int64)v12 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
            v40 = *((_QWORD *)&v11 + 1);
            KiInterruptTimeErrorAccumulator += v11;
            if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v11 )
              v40 = ++*((_QWORD *)&v11 + 1);
          }
          v13 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v11 + 1);
          MEMORY[0xFFFFF7800000001C] = HIDWORD(v10);
          MEMORY[0xFFFFF78000000014] = v10;
          MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v11 + 1)) >> 32;
          MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v11 + 1);
          MEMORY[0xFFFFF78000000348] = PerformanceCounter.QuadPart;
          MEMORY[0xFFFFF78000000350] = PerformanceCounter.QuadPart;
          v14 = MEMORY[0xFFFFF78000000320];
          v15 = (unsigned int)KiTickOffset - *((_QWORD *)&v11 + 1);
          if ( v15 <= 0 )
          {
            v16 = 1LL;
            v15 += KeMaximumIncrement;
            if ( v15 <= 0 )
            {
              v17 = KeNumberProcessorsGroup0[1];
              v18 = ((unsigned __int64)(((unsigned __int64)-v15
                                       * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v17)
                  + 1;
              LODWORD(v15) = v18 * KeMaximumIncrement + v15;
              v16 = v18 + 1;
            }
            v14 = v16 + MEMORY[0xFFFFF78000000320];
            MEMORY[0xFFFFF78000000328] = (unsigned __int64)(v16 + MEMORY[0xFFFFF78000000320]) >> 32;
            MEMORY[0xFFFFF78000000320] += v16;
          }
          KiTickOffset = v15;
          ++MEMORY[0xFFFFF78000000340];
          if ( (v47 & 0x200) != 0 )
            _enable();
          if ( v14 != v4 && !--KiBalanceSetManagerCount )
          {
            KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
            KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
          }
          PoExecutePerfCheck();
          v19 = v13 >> 18;
          if ( KiGroupSchedulingEnabled && v14 > KiGenerationEndTick )
          {
            v3 = 1;
            KiGenerationEndTick += (unsigned int)KiGenerationTicks;
          }
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
            KiForwardTick((__int64)CurrentPrcb, KeNumberProcessors_0, v19, v3, (char *)v46);
            LOWORD(v20) = KiClockCheckPending[0];
            if ( KiClockCheckPending[0] >= v46[0] )
            {
              v21 = KiClockCheckPending;
              LOWORD(v20) = v46[0];
            }
            else
            {
              v21 = v46;
            }
            v22 = 0;
            word_1402CFA22 = 20;
            KiClockCheckPending[0] = *v21;
            if ( (_WORD)v20 )
            {
              v22 = v20;
              v23 = 0LL;
              v20 = (unsigned __int16)v20;
              do
              {
                *(_QWORD *)&KiClockCheckPending[v23 + 4] |= *(_QWORD *)&v46[v23 + 4];
                v23 += 4LL;
                --v20;
              }
              while ( v20 );
            }
            for ( ;
                  v22 < (unsigned __int16)*v21;
                  *(_QWORD *)&KiClockCheckPending[4 * v24 + 4] = *(_QWORD *)&v21[4 * v24 + 4] )
            {
              v24 = v22++;
            }
            for ( dword_1402CFA24 = 0;
                  v22 < (unsigned __int16)word_1402CFA22;
                  *(_QWORD *)&KiClockCheckPending[4 * v25 + 4] = 0LL )
            {
              v25 = v22++;
            }
          }
          KiUpdateRunTime(v2, a2);
          v26 = v41;
          *v41 = MEMORY[0xFFFFF78000000350];
          if ( KiClockState == 2 )
          {
            v38 = (unsigned int)KiLastRequestedTimeIncrement;
            off_1402D2900();
            KiSetPendingTick(1);
            _InterlockedExchange(&KiClockState, 0);
            KiEventClockStateChange(0, 2, &v42, &v38);
          }
          result = MEMORY[0xFFFFF78000000008] + (unsigned int)KeTimeIncrement;
          v26[2] = MEMORY[0xFFFFF78000000008];
          KiClockTimerNextTickTime = result;
          return result;
        }
      }
      _mm_pause();
    }
  }
  v28 = KeGetCurrentPrcb();
  v29 = v47;
  ++v28->ClockInterrupts;
  ++v28->InterruptLastCount;
  _disable();
  v30 = MEMORY[0xFFFFF78000000320];
  if ( (v29 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks((_DWORD)v28, v28->LastTick, MEMORY[0xFFFFF78000000320], a2, v2);
  CurrentThread = v28->CurrentThread;
  v28->ClockKeepAlive = 1;
  if ( CurrentThread != v28->IdleThread
    && (CurrentThread->CycleTime >= CurrentThread->QuantumTarget
     || CurrentThread->SystemHeteroCpuPolicy
     && (HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(CurrentThread, v28),
         KiGenerateHeteroSets(
           v28->ParentNode,
           *(_QWORD *)(v33 + 576),
           HeteroCpuPolicyThread,
           (unsigned int)&v39,
           (__int64)v45),
         (v28->GroupSetMember & v39) == 0)
     && (*v34 & v39) != 0)
    || MEMORY[0xFFFFF78000000320] > v28->GenerationTarget )
  {
LABEL_65:
    v28->QuantumEnd = 1;
    return KiRequestSoftwareInterrupt(v28, 2u);
  }
  result = (__int64)CurrentThread->SchedulingGroup;
  if ( result )
  {
    for ( result += v28->ScbOffset; result; result = *(_QWORD *)(result + 392) )
    {
      v35 = *(_BYTE *)(result + 112);
      if ( (v35 & 4) != 0 )
      {
        if ( (v35 & 0x10) == 0 && *(_QWORD *)result > *(_QWORD *)(result + 16) )
          goto LABEL_65;
        v36 = *(_QWORD *)(result + 24);
      }
      else
      {
        v36 = *(_QWORD *)(result + 8);
      }
      if ( *(_QWORD *)result > v36 )
        goto LABEL_65;
    }
  }
  if ( (signed int)(v28->ReadyScanTick - v30) < 0 )
  {
    result = KiShouldScanSharedReadyQueue(v28);
    if ( !(_DWORD)result || (result = v28->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
    {
      if ( (v28->ReadySummary & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v30 + 75);
        v28->ReadyScanTick = result;
      }
    }
  }
  return result;
}
