/*
 * XREFs of KeAccumulateTicks @ 0x1400A9AB0
 * Callers:
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     KiUpdateRunTime @ 0x1400AC2C0 (KiUpdateRunTime.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400D3A70 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockInterval @ 0x1400D6020 (KiSetClockInterval.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1400D60A4 (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KdCheckForDebugBreak @ 0x14014E92C (KdCheckForDebugBreak.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvlInvokeHypervisorDebugger @ 0x1401E51D0 (HvlInvokeHypervisorDebugger.c)
 */

void __fastcall KeAccumulateTicks(__int64 a1, int a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int8 v5; // r12
  int v6; // edi
  unsigned __int64 v9; // rsi
  int v10; // edx
  char v11; // r10
  int v12; // edx
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  unsigned __int16 v15; // tt
  char v16; // dl
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebp
  unsigned __int8 CurrentIrql; // r14
  __int16 v20; // cx
  unsigned int v21; // edi
  __int64 v22; // rsi
  ULONG_PTR BugCheckParameter4; // r14
  ULONG_PTR v24; // rbp
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ecx
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // edx
  unsigned int v41; // eax
  bool v42; // zf
  unsigned int v43; // eax
  unsigned __int64 v44; // [rsp+38h] [rbp-50h] BYREF
  __int16 v45; // [rsp+40h] [rbp-48h]
  _QWORD v46[2]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a4;
  v6 = a3;
  v9 = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(a1 + 11756) & 8) != 0 )
    goto LABEL_24;
  a3 = MEMORY[0xFFFFF78000000008] >> 18;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
    {
LABEL_23:
      *(_DWORD *)(a1 + 11760) = a3;
      goto LABEL_24;
    }
    a4 = KiProcessorBlock[0] + 13824;
  }
  else
  {
    a4 = a1 + 13824;
  }
  if ( !a4 )
    goto LABEL_23;
  v10 = *(_DWORD *)(a1 + 11760);
  if ( (unsigned int)(a3 - v10) >= 0x100 )
    a3 = (unsigned int)(v10 + 255);
  v11 = 0;
  v12 = v10 - 1;
  while ( MEMORY[0xFFFFF78000000008] < *(_QWORD *)(32LL * (unsigned __int8)++v12 + a4 + 536) )
  {
    if ( v12 == (_DWORD)a3 )
      goto LABEL_14;
  }
  v11 = 1;
LABEL_14:
  *(_DWORD *)(a1 + 11760) = v12;
  if ( v11 || *(_BYTE *)(a1 + 33) && KiNextTimer2DueTime <= v9 )
  {
    _m_prefetchw((const void *)(a1 + 11756));
    v13 = *(_WORD *)(a1 + 11756);
    do
    {
      v14 = v13;
      BYTE1(v14) = HIBYTE(v13);
      v15 = v13;
      v13 = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11756), v13 | 8, v13);
    }
    while ( v15 != v13 );
    if ( (v13 & 0x29) == 0 )
    {
      if ( *(_BYTE *)(a1 + 32) )
      {
        *(_BYTE *)(a1 + 6) = 1;
      }
      else
      {
        LOBYTE(v14) = 2;
        HalRequestSoftwareInterrupt(v14);
      }
    }
  }
LABEL_24:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_36;
  v16 = 0;
  a3 = qword_140338DC0;
  v17 = v9 + KeMaximumIncrement;
  v18 = 0;
  if ( KiClockIntervalIsSetForHighResolutionTimers && v17 <= qword_140338DC0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( !KiClockIntervalIsSetForHighResolutionTimers )
      goto LABEL_34;
    RtlRbRemoveNode(&KiClockIntervalRequests, &KiHighResolutionTimerClockIntervalRequest);
    byte_140338E18 = 0;
    KiSetClockIntervalToMinimumRequested();
    KiClockIntervalIsSetForHighResolutionTimers = 0;
    goto LABEL_33;
  }
  if ( KiClockIntervalIsSetForHighResolutionTimers || qword_140338DC0 >= v17 )
    goto LABEL_36;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( !KiClockIntervalIsSetForHighResolutionTimers )
  {
    KiSetClockInterval((unsigned int)KeMinimumIncrement, &KiHighResolutionTimerClockIntervalRequest, a3);
    v18 = KeMinimumIncrement;
    KiClockIntervalIsSetForHighResolutionTimers = 1;
LABEL_33:
    v16 = 1;
  }
LABEL_34:
  __writecr8(CurrentIrql);
  if ( v16 )
    PoTraceSystemTimerResolutionKernel(v18, 1834242632LL, a3);
LABEL_36:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v20 = 0;
    v44 = v9;
    v45 = 0;
    if ( *(_BYTE *)(a1 + 33) )
    {
      v20 = 1;
      v45 = 1;
    }
    if ( (*(_BYTE *)(a1 + 11756) & 8) != 0 )
      v45 = v20 | 8;
    v46[1] = 16LL;
    v46[0] = &v44;
    EtwTraceKernelEvent((int)v46, 1, 0x40040000u, 0xF4Fu, 4196866);
  }
  *(_DWORD *)(a1 + 11764) = v6;
  v21 = v6 - a2;
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 33) )
    {
      if ( !--KiClockPollCycle )
      {
        KiClockPollCycle = KiClockKeepAliveCycle;
        BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
        v24 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
        v25 = (unsigned __int8)KiClockCheckSlot + 1;
        if ( v25 >= (unsigned int)KeNumberProcessors_0 )
          LOBYTE(v25) = 0;
        v26 = *(unsigned int *)(v24 + 36);
        KiClockCheckSlot = v25;
        a3 = (unsigned int)KiProcessorIndexToNumberMappingTable[v26];
        if ( (((unsigned __int64)qword_14031EA88[(unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6] >> (a3 & 0x3F)) & 1) != 0 )
        {
          v27 = (unsigned int)a3 >> 6;
          if ( (((unsigned __int64)qword_14031E9D8[v27] >> (a3 & 0x3F)) & 1) != 0 )
          {
            a4 = a3 & 0x3F;
            if ( (unsigned __int16)KiClockCheckReady > (unsigned int)v27 )
              *(_QWORD *)(8 * v27 + 3271128 + 0x140000000LL) &= ~(1LL << (a3 & 0x3F));
            v28 = (unsigned int)a3 >> 6;
            a3 &= 0x3Fu;
            if ( (unsigned __int16)KiClockCheckPending[0] > (unsigned int)v28 )
            {
              v29 = 8 * v28 + 3271304;
              v30 = *(_QWORD *)(v29 + 0x140000000LL);
              _bittestandreset64(&v30, (unsigned int)a3);
              *(_QWORD *)(v29 + 0x140000000LL) = v30;
            }
            if ( !*(_DWORD *)(v24 + 22624) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
            {
              HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4, a3, a4);
              KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v24, BugCheckParameter4);
            }
            *(_DWORD *)(v24 + 22624) = 0;
          }
          else
          {
            a3 &= 0x3Fu;
            if ( (unsigned __int16)KiClockCheckReady <= (unsigned int)v27 )
              KiClockCheckReady = v27 + 1;
            v31 = 8 * v27 + 3271128;
            v32 = *(_QWORD *)(v31 + 0x140000000LL);
            _bittestandset64(&v32, (unsigned int)a3);
            *(_QWORD *)(v31 + 0x140000000LL) = v32;
          }
        }
      }
    }
    if ( a5 )
    {
      *(_DWORD *)(a1 + 23304) += v21;
      *(_DWORD *)(v22 + 732) += v21;
    }
    else
    {
      *(_DWORD *)(a1 + 23300) += v21;
      if ( *(_BYTE *)(a1 + 32) == 2 && *(_BYTE *)(a1 + 11754) )
      {
        *(_DWORD *)(a1 + 23308) += v21;
        ++*(_DWORD *)(a1 + 23328);
        v33 = *(_DWORD *)(a1 + 23332);
        if ( *(_DWORD *)(a1 + 23328) > v33 && v33 )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(3LL, 0LL, a3, a4);
            if ( !(_BYTE)KdDebuggerEnabled )
              KeBugCheckEx(0x133u, 0LL, *(unsigned int *)(a1 + 23328), *(unsigned int *)(a1 + 23332), 0LL);
            __int2c();
          }
          *(_DWORD *)(a1 + 23328) = 0;
        }
      }
      else if ( *(_BYTE *)(a1 + 32) <= 1u )
      {
        *(_DWORD *)(v22 + 652) += v21;
      }
      else
      {
        *(_DWORD *)(a1 + 23312) += v21;
      }
      if ( v5 >= 2u )
      {
        ++*(_DWORD *)(a1 + 22636);
        v34 = *(_DWORD *)(a1 + 22632);
        if ( *(_DWORD *)(a1 + 22636) < v34 || !v34 )
          goto LABEL_81;
        if ( KeEnableWatchdogTimeout )
        {
          __rdtsc();
          HvlInvokeHypervisorDebugger(2LL, 0LL, a3, a4);
          if ( !(_BYTE)KdDebuggerEnabled )
            KeBugCheckEx(0x133u, 1uLL, *(int *)(a1 + 22632), 0LL, 0LL);
          __int2c();
        }
      }
    }
    *(_DWORD *)(a1 + 22636) = 0;
LABEL_81:
    if ( v22 != *(_QWORD *)(a1 + 24)
      && *(_BYTE *)(a1 + 32) <= 1u
      && (*(char *)(v22 + 195) < 16
       && *(_QWORD *)(v22 + 104)
       && (v35 = *(_QWORD *)(v22 + 104)) != 0
       && (v36 = *(unsigned int *)(a1 + 1624) + v35) != 0
       && (unsigned int)KiGetThreadEffectiveRankNonZero(v22, v36, 0LL)
       || *(char *)(v22 + 195) < 8) )
    {
      *(_DWORD *)(a1 + 23344) += v21;
    }
    if ( v21 >= 8 )
    {
      *(_DWORD *)(a1 + 11556) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 11556) += 15 * (*(_DWORD *)(a1 + 23296) - *(_DWORD *)(a1 + 11552));
      v37 = *(_DWORD *)(a1 + 11556);
      v38 = v21;
      do
      {
        v37 >>= 4;
        --v38;
      }
      while ( v38 );
      *(_DWORD *)(a1 + 11556) = v37;
    }
    v39 = v21;
    v40 = *(_DWORD *)(a1 + 11740) - *(_DWORD *)(a1 + 11748);
    *(_DWORD *)(a1 + 11552) = *(_DWORD *)(a1 + 23296);
    *(_DWORD *)(a1 + 11740) = (unsigned int)(*(_DWORD *)(a1 + 11676) + v40) >> v21;
    *(_DWORD *)(a1 + 11748) = *(_DWORD *)(a1 + 11676);
    if ( !*(_DWORD *)(a1 + 11672) || (v39 = *(unsigned __int16 *)(a1 + 11756), (v39 & 3) != 0) )
    {
      v42 = (*(_DWORD *)(a1 + 23316))-- == 1;
      if ( !v42
        || (*(_DWORD *)(a1 + 23316) = KiAdjustDpcThreshold, v43 = *(_DWORD *)(a1 + 11736), v43 >= KiMaximumDpcQueueDepth) )
      {
LABEL_109:
        if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) && KiPollSlot == *(_DWORD *)(a1 + 36) )
          KdCheckForDebugBreak(v39);
        return;
      }
      v41 = v43 + 1;
    }
    else
    {
      *(_DWORD *)(a1 + 23316) = KiAdjustDpcThreshold;
      if ( (v39 & 0x2F) == 0 )
      {
        if ( *(_BYTE *)(a1 + 32) )
        {
          *(_BYTE *)(a1 + 6) = 1;
        }
        else
        {
          LOBYTE(v39) = 2;
          HalRequestSoftwareInterrupt(v39);
        }
      }
      v39 = *(unsigned int *)(a1 + 11736);
      if ( *(_DWORD *)(a1 + 11740) >= (unsigned int)KiIdealDpcRate || (unsigned int)v39 <= 1 )
        goto LABEL_109;
      v41 = v39 - 1;
    }
    *(_DWORD *)(a1 + 11736) = v41;
    goto LABEL_109;
  }
}
