/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x140132C60
 * Callers:
 *     PpmParkReportMask @ 0x1400E86CC (PpmParkReportMask.c)
 *     KeSetSystemAllowedCpuSets @ 0x140132B54 (KeSetSystemAllowedCpuSets.c)
 * Callees:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 *     KiAbProcessLocksWorker @ 0x1400F3920 (KiAbProcessLocksWorker.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14013328C (KiUpdateGlobalCpuSetConfiguration.c)
 *     RtlWriteAcquireTickLock @ 0x140139E40 (RtlWriteAcquireTickLock.c)
 *     PoGetFrequencyBucket @ 0x140170614 (PoGetFrequencyBucket.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSwapContext @ 0x14018A310 (KiSwapContext.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

char __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned int v3; // r13d
  unsigned __int8 v4; // r12
  int v5; // eax
  unsigned __int16 v6; // r14
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r8
  _QWORD *v10; // r12
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r11
  __int64 v22; // r9
  int v23; // ebx
  __int64 v24; // r11
  __int64 v25; // rdx
  unsigned __int16 v26; // r11
  unsigned __int16 v27; // dx
  __int64 v28; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v30; // rbx
  _BYTE *v31; // rdx
  __int64 CurrentThread; // rsi
  struct _KPRCB *v33; // r14
  _QWORD *v34; // rbx
  _BYTE *v35; // rdx
  unsigned int v36; // ebx
  _KTHREAD *NextThread; // r13
  unsigned __int64 v38; // rax
  __int64 v39; // r15
  unsigned __int64 v40; // rcx
  char v41; // bl
  __int64 v42; // r14
  __int64 v43; // rcx
  _QWORD *i; // rcx
  __int64 v45; // r8
  int v48; // [rsp+44h] [rbp-BCh]
  unsigned int v49; // [rsp+48h] [rbp-B8h]
  _QWORD *v50; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v51; // [rsp+58h] [rbp-A8h]
  _QWORD *v52; // [rsp+60h] [rbp-A0h] BYREF
  int v53; // [rsp+68h] [rbp-98h]
  _QWORD *v54; // [rsp+70h] [rbp-90h] BYREF
  int v55; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h]
  _QWORD v57[20]; // [rsp+90h] [rbp-70h]
  void *retaddr; // [rsp+178h] [rbp+78h]

  v3 = (unsigned __int16)KiActiveGroups;
  v4 = a2;
  v49 = (unsigned __int16)KiActiveGroups;
  v51 = a1;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( !a1 )
    goto LABEL_7;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KiCpuSetLock);
LABEL_6:
    a1 = v51;
    goto LABEL_7;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KiCpuSetLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiCpuSetLock);
    goto LABEL_6;
  }
LABEL_7:
  v5 = 0;
  v48 = 0;
  v6 = 0;
  if ( !v3 )
    goto LABEL_48;
  v7 = 0;
  do
  {
    v8 = qword_1403D15E8[v6];
    v56 = v8;
    if ( a1 )
    {
      if ( v6 >= *a1 )
        v9 = 0LL;
      else
        v9 = *(_QWORD *)&a1[4 * v6 + 4];
      a3 = v8 ^ v9;
      v57[v6] = a3;
      if ( KiNonParkedCpuSets[v6] == a3 )
        goto LABEL_45;
    }
    else
    {
      a3 = KiNonParkedCpuSets[v6];
      v57[v6] = a3;
    }
    v10 = KiCpuSetAffinitiesShadow;
    v11 = v8 & a3;
    v50 = KiCpuSetAffinitiesShadow;
    v5 = 1;
    v12 = v8 ^ v8 & a3;
    v48 = 1;
    if ( (v8 & a3) != 0 )
    {
      do
      {
        _BitScanForward64(&v13, v11);
        v55 = v13;
        v11 ^= 1LL << v13;
        v10[(unsigned int)((v7 << 6) + v13)] = 1LL << v13;
      }
      while ( v11 );
      v3 = v49;
      v5 = 1;
    }
    if ( v12 )
    {
      v14 = qword_1403D3988[2 * v6];
      v15 = v8 ^ v14;
      if ( (v14 & a3) == 0 || (v15 & a3) == 0 )
      {
        v14 = 0LL;
        v15 = 0LL;
      }
      v16 = v8 ^ KiSystemAllowedCpuSets[v6];
      v17 = a3 & v16;
      if ( v16 )
      {
        if ( v17 )
        {
          v18 = v12 & v16;
          v12 ^= v18;
          if ( v18 )
          {
            v19 = v50;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v20, v18);
              v21 = v17;
              v18 &= ~(1LL << v20);
              v53 = v20;
              if ( _bittest64(&v14, (unsigned int)v20) )
              {
                if ( (v14 & v17) != 0 )
                  v21 = v14 & v17;
              }
              else if ( (v15 & v17) != 0 )
              {
                v21 = v15 & v17;
              }
              v19[(unsigned int)((v7 << 6) + v20)] = v21;
            }
            while ( v18 );
            v8 = v56;
            v3 = v49;
            v10 = v50;
          }
        }
      }
      if ( v12 )
      {
        v22 = v8 & ~v17;
        if ( (a3 & v22) == 0 )
          v22 = v8;
        v23 = v7 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v24, v12);
          v25 = v22;
          v12 &= ~(1LL << v24);
          v53 = v24;
          if ( _bittest64(&v14, (unsigned int)v24) )
          {
            if ( (v14 & v22 & a3) != 0 )
              v25 = v14 & v22;
          }
          else if ( (a3 & v15 & v22) != 0 )
          {
            v25 = v15 & v22;
          }
          v10[(unsigned int)(v23 + v24)] = v25;
        }
        while ( v12 );
        v3 = v49;
      }
LABEL_45:
      v5 = v48;
    }
    a1 = v51;
    v7 = ++v6;
  }
  while ( v6 < v3 );
  v4 = a2;
LABEL_48:
  v50 = 0LL;
  if ( v5 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v27 = v26;
    if ( v3 )
    {
      do
      {
        v28 = v27++;
        KiNonParkedCpuSets[v28] = v57[v28];
      }
      while ( v27 < v3 );
    }
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    LOBYTE(v5) = KiUpdateGlobalCpuSetConfiguration(&v50);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    LOBYTE(v5) = KiReleaseSpinLockInstrumented(&KiCpuSetLock, retaddr);
  else
    _InterlockedAnd64(&KiCpuSetLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v30 = v50;
  while ( v30 )
  {
    v31 = v30 - 27;
    v30 = (_QWORD *)*v30;
    LOBYTE(v5) = KiDeferredReadyThread((__int64)CurrentPrcb, v31);
  }
  if ( v4 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v5) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v5 )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          LOBYTE(a1) = 2;
          LOBYTE(v5) = HalRequestSoftwareInterrupt(a1);
        }
      }
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      if ( (*(char *)(CurrentThread + 792) | *(char *)(CurrentThread + 1418)) != 0x3F && KiAbEnabled )
      {
        v52 = 0LL;
        v54 = 0LL;
        v33 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(CurrentThread, 1, 1, 1, (__int64)&v52, (__int64)&v54, (__int64)&v33->AbSelfIoBoostsList);
        KiAbProcessLocksWorker(&v54, (__int64 *)&v33->AbSelfIoBoostsList, (__int64)&v52, 0);
        v34 = v52;
        while ( v34 )
        {
          v35 = v34 - 27;
          v34 = (_QWORD *)*v34;
          KiDeferredReadyThread((__int64)v33, v35);
        }
      }
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v36);
        }
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      CurrentPrcb->NestingLevel = 1;
      v38 = __rdtsc();
      v39 = v38 - CurrentPrcb->StartCycles;
      v40 = v39 + *(unsigned int *)(CurrentThread + 80);
      *(_QWORD *)(CurrentThread + 72) += v39;
      CurrentPrcb->StartCycles = v38;
      v41 = *(_BYTE *)(CurrentThread + 2);
      if ( v40 > 0xFFFFFFFF )
        LODWORD(v40) = -1;
      *(_DWORD *)(CurrentThread + 80) = v40;
      if ( (v41 & 0x3E) != 0 )
      {
        if ( (v41 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(CurrentThread + 124)] += CurrentPrcb->StartCycles
                                                                                - CurrentPrcb->TaggedCyclesStart;
          v41 &= ~0x10u;
          CurrentPrcb->TaggedCyclesStart = 0LL;
        }
        if ( (v41 & 0x3E) != 0 )
        {
          if ( (v41 & 0x20) != 0 )
          {
            v42 = *(_QWORD *)(CurrentThread + 1952);
            if ( v42 )
            {
              a3 = CurrentPrcb->PowerState.Class + 2LL * (unsigned int)PoGetFrequencyBucket(CurrentPrcb);
              *(_QWORD *)(v42 + 8 * a3) += v39;
            }
            v41 &= ~0x20u;
          }
          if ( (v41 & 0x3E) != 0 )
          {
            v43 = *(_QWORD *)(CurrentThread + 104);
            if ( v43 )
            {
              for ( i = (_QWORD *)(CurrentPrcb->ScbOffset + v43); i; i = (_QWORD *)i[49] )
                *i += v39;
            }
            if ( (*(_BYTE *)(CurrentThread + 2) & 8) != 0
              && (CurrentPrcb->ParentNode->Affinity.Mask & *(_QWORD *)(CurrentThread + 576)) != CurrentPrcb->ParentNode->Affinity.Mask )
            {
              CurrentPrcb->AffinitizedCycles += v39;
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
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, a3);
      LOBYTE(v45) = v4;
      if ( (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v45) )
      {
LABEL_96:
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) != 0 )
    {
      goto LABEL_96;
    }
    LOBYTE(v5) = v4;
    __writecr8(v4);
  }
  return v5;
}
