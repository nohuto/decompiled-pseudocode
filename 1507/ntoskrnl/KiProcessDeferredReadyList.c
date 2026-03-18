/*
 * XREFs of KiProcessDeferredReadyList @ 0x14009BE20
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeSetPriorityBoost @ 0x1400D5D90 (KeSetPriorityBoost.c)
 *     KiAbApplyWakeupBoost @ 0x1400F4204 (KiAbApplyWakeupBoost.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011B984 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x1401217F0 (KeSetSchedulingGroupRankBias.c)
 *     KeSetAffinityThread @ 0x14015B334 (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x14016DD9C (KeSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x140205964 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140205B1C (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020739C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14020AF40 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

void __fastcall KiProcessDeferredReadyList(__int64 a1, _QWORD **a2, unsigned __int8 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdi
  _BYTE *v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // rcx
  char v13; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *i; // rcx
  bool v19; // zf

  v3 = *a2;
  v5 = a1;
  while ( v3 )
  {
    v6 = v3 - 27;
    v3 = (_QWORD *)*v3;
    KiDeferredReadyThread(v5, v6);
  }
  if ( a3 >= 2u )
  {
    if ( *(_QWORD *)(v5 + 16) && !*(_BYTE *)(v5 + 11754) )
    {
      if ( *(_BYTE *)(v5 + 32) )
      {
        *(_BYTE *)(v5 + 6) = 1;
      }
      else
      {
        LOBYTE(a1) = 2;
        HalRequestSoftwareInterrupt(a1);
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v5 + 16) )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(v5 + 8), 0LL);
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( *(_QWORD *)(v5 + 48) );
      }
      v9 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      _disable();
      *(_BYTE *)(v5 + 32) = 1;
      v10 = __rdtsc();
      v11 = v10 - *(_QWORD *)(v5 + 23352);
      v12 = v11 + *(unsigned int *)(v7 + 80);
      *(_QWORD *)(v7 + 72) += v11;
      *(_QWORD *)(v5 + 23352) = v10;
      v13 = *(_BYTE *)(v7 + 2);
      if ( v12 > 0xFFFFFFFF )
        LODWORD(v12) = -1;
      *(_DWORD *)(v7 + 80) = v12;
      if ( (v13 & 0x3E) != 0 )
      {
        if ( (v13 & 0x10) != 0 )
        {
          *(_QWORD *)(v5 + 8LL * *(unsigned __int8 *)(v7 + 124) + 23368) += *(_QWORD *)(v5 + 23352)
                                                                          - *(_QWORD *)(v5 + 23360);
          v13 &= ~0x10u;
          *(_QWORD *)(v5 + 23360) = 0LL;
        }
        if ( (v13 & 0x3E) != 0 )
        {
          if ( (v13 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v7 + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(v5);
              v16 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v16 = CurrentFrequency / 0x19;
              *(_QWORD *)(v15 + 8 * (*(unsigned __int8 *)(v5 + 23858) + 2 * v16)) += v11;
            }
            v13 &= ~0x20u;
          }
          if ( (v13 & 0x3E) != 0 )
          {
            v17 = *(_QWORD *)(v7 + 104);
            if ( v17 )
            {
              for ( i = (_QWORD *)(*(unsigned int *)(v5 + 1624) + v17); i; i = (_QWORD *)i[49] )
                *i += v11;
            }
            if ( (*(_BYTE *)(v7 + 2) & 8) != 0
              && (*(_QWORD *)(v7 + 576) & *(_QWORD *)(*(_QWORD *)(v5 + 1600) + 136LL)) != *(_QWORD *)(*(_QWORD *)(v5 + 1600) + 136LL) )
            {
              *(_QWORD *)(v5 + 23392) += v11;
            }
            if ( *(_QWORD *)(v7 + 360) )
              KiEndCounterAccumulation(v7);
          }
        }
      }
      _enable();
      *(_QWORD *)(v5 + 8) = v9;
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v7 + 643) = 32;
      *(_BYTE *)(v7 + 390) = a3;
      KiQueueReadyThread(v5, v7);
      v19 = (unsigned __int8)KiSwapContext(v7, v9, a3) == 0;
    }
    else
    {
      v19 = (*(_DWORD *)(v7 + 116) & 0x40) == 0;
    }
    if ( !v19 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(v7 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    __writecr8(a3);
  }
}
