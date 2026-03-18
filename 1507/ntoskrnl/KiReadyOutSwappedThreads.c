/*
 * XREFs of KiReadyOutSwappedThreads @ 0x1401106FC
 * Callers:
 *     KiOutSwapProcesses @ 0x1401100B8 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140110624 (KiInSwapProcesses.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiAbProcessContextSwitch @ 0x1400A1D30 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiReadyThread @ 0x1401109F0 (KiReadyThread.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     EtwTraceReadyThread @ 0x14025D4F0 (EtwTraceReadyThread.c)
 */

unsigned __int8 __fastcall KiReadyOutSwappedThreads(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  volatile unsigned __int8 v4; // r15
  _QWORD *v6; // rsi
  volatile signed __int32 *v7; // rdi
  unsigned int v8; // ebp
  volatile unsigned __int8 result; // al
  __int64 v10; // rcx
  __int64 CurrentThread; // rdi
  unsigned __int64 v12; // r8
  unsigned int v13; // esi
  _KTHREAD *NextThread; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  char v18; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *i; // rcx
  __int64 v24; // r8
  bool v25; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v6 = a1;
  do
  {
    v7 = (volatile signed __int32 *)(v6 - 27);
    v8 = 0;
    v6 = (_QWORD *)*v6;
    while ( _interlockedbittestandset64(v7 + 16, 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
      while ( *((_QWORD *)v7 + 8) );
    }
    *((_BYTE *)v7 + 388) = 7;
    *((_QWORD *)v7 + 8) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    {
      LOBYTE(a3) = *((_BYTE *)v7 + 567);
      LOBYTE(a2) = *((_BYTE *)v7 + 566);
      EtwTraceReadyThread(v7, a2, a3, 0LL);
    }
    result = KiReadyThread(CurrentPrcb, v7);
  }
  while ( v6 != a1 );
  if ( v4 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(v10) = 2;
          return HalRequestSoftwareInterrupt(v10);
        }
      }
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v13);
        }
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v15 = __rdtsc();
      v16 = v15 - CurrentPrcb->StartCycles;
      v17 = v16 + *(unsigned int *)(CurrentThread + 80);
      *(_QWORD *)(CurrentThread + 72) += v16;
      CurrentPrcb->StartCycles = v15;
      v18 = *(_BYTE *)(CurrentThread + 2);
      if ( v17 > 0xFFFFFFFF )
        LODWORD(v17) = -1;
      *(_DWORD *)(CurrentThread + 80) = v17;
      if ( (v18 & 0x3E) != 0 )
      {
        if ( (v18 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(CurrentThread + 124)] += CurrentPrcb->StartCycles
                                                                                - CurrentPrcb->TaggedCyclesStart;
          CurrentPrcb->TaggedCyclesStart = 0LL;
          v18 &= ~0x10u;
        }
        if ( (v18 & 0x3E) != 0 )
        {
          if ( (v18 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(CurrentThread + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
              v21 = 3LL;
              v12 = CurrentFrequency;
              if ( CurrentFrequency / 0x19 < 3 )
                v21 = CurrentFrequency / 0x19;
              *(_QWORD *)(v20 + 8 * (CurrentPrcb->PowerState.Class + 2 * v21)) += v16;
            }
            v18 &= ~0x20u;
          }
          if ( (v18 & 0x3E) != 0 )
          {
            v22 = *(_QWORD *)(CurrentThread + 104);
            if ( v22 )
            {
              for ( i = (_QWORD *)(CurrentPrcb->ScbOffset + v22); i; i = (_QWORD *)i[49] )
                *i += v16;
            }
            if ( (*(_BYTE *)(CurrentThread + 2) & 8) != 0
              && (*(_QWORD *)(CurrentThread + 576) & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
            {
              CurrentPrcb->AffinitizedCycles += v16;
            }
            if ( *(_QWORD *)(CurrentThread + 360) )
              KiEndCounterAccumulation(CurrentThread);
          }
        }
      }
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v4;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v12);
      LOBYTE(v24) = v4;
      v25 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v24) == 0;
    }
    else
    {
      v25 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v25 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
