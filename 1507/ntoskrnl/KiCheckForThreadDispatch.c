/*
 * XREFs of KiCheckForThreadDispatch @ 0x14000DCB4
 * Callers:
 *     KiFastReadyThread @ 0x14000DBF8 (KiFastReadyThread.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KeGenericProcessorCallback @ 0x1400D4D9C (KeGenericProcessorCallback.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14010BF10 (KeWaitForAlertByThreadId.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 *     KiWaitForAllObjects @ 0x14011ECE8 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2)
{
  _UNKNOWN **v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  char v11; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *i; // rcx
  __int64 v17; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v4 = a1;
  if ( a2 < 2u )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0LL);
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
        while ( *(_QWORD *)(v4 + 48) );
      }
      v7 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      _disable();
      *(_BYTE *)(v4 + 32) = 1;
      v8 = __rdtsc();
      v9 = v8 - *(_QWORD *)(v4 + 23352);
      v10 = v9 + *(unsigned int *)(v5 + 80);
      *(_QWORD *)(v5 + 72) += v9;
      *(_QWORD *)(v4 + 23352) = v8;
      v11 = *(_BYTE *)(v5 + 2);
      if ( v10 > 0xFFFFFFFF )
        LODWORD(v10) = -1;
      *(_DWORD *)(v5 + 80) = v10;
      if ( (v11 & 0x3E) != 0 )
      {
        if ( (v11 & 0x10) != 0 )
        {
          *(_QWORD *)(v4 + 8LL * *(unsigned __int8 *)(v5 + 124) + 23368) += *(_QWORD *)(v4 + 23352)
                                                                          - *(_QWORD *)(v4 + 23360);
          *(_QWORD *)(v4 + 23360) = 0LL;
          v11 &= ~0x10u;
        }
        if ( (v11 & 0x3E) != 0 )
        {
          if ( (v11 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v5 + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(v4);
              v14 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v14 = CurrentFrequency / 0x19;
              *(_QWORD *)(v13 + 8 * (*(unsigned __int8 *)(v4 + 23858) + 2 * v14)) += v9;
            }
            v11 &= ~0x20u;
          }
          if ( (v11 & 0x3E) != 0 )
          {
            v15 = *(_QWORD *)(v5 + 104);
            if ( v15 )
            {
              for ( i = (_QWORD *)(*(unsigned int *)(v4 + 1624) + v15); i; i = (_QWORD *)i[49] )
                *i += v9;
            }
            if ( (*(_BYTE *)(v5 + 2) & 8) != 0
              && (*(_QWORD *)(v5 + 576) & *(_QWORD *)(*(_QWORD *)(v4 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(v4 + 1600) + 136LL) )
            {
              *(_QWORD *)(v4 + 23392) += v9;
            }
            if ( *(_QWORD *)(v5 + 360) )
              KiEndCounterAccumulation(v5);
          }
        }
      }
      _enable();
      *(_QWORD *)(v4 + 8) = v7;
      *(_BYTE *)(v7 + 388) = 2;
      *(_BYTE *)(v5 + 643) = 32;
      *(_BYTE *)(v5 + 390) = a2;
      KiQueueReadyThread(v4, v5);
      LOBYTE(v17) = a2;
      if ( !(unsigned __int8)KiSwapContext(v5, v7, v17) )
        goto LABEL_37;
    }
    else if ( (*(_DWORD *)(v5 + 116) & 0x40) == 0 )
    {
LABEL_37:
      LOBYTE(v2) = a2;
      __writecr8(a2);
      return (char)v2;
    }
    __writecr8(1uLL);
    *(_DWORD *)(v5 + 116) &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
    goto LABEL_37;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 11754);
    if ( !(_BYTE)v2 )
    {
      if ( *(_BYTE *)(a1 + 32) )
      {
        *(_BYTE *)(a1 + 6) = 1;
      }
      else
      {
        LOBYTE(a1) = 2;
        LOBYTE(v2) = HalRequestSoftwareInterrupt(a1);
      }
    }
  }
  return (char)v2;
}
