/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x1401069B4
 * Callers:
 *     PpmParkReportMask @ 0x140074F28 (PpmParkReportMask.c)
 *     KeSetSystemAllowedCpuSets @ 0x1401068D0 (KeSetSystemAllowedCpuSets.c)
 * Callees:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiAbProcessLocksWorker @ 0x140031F4C (KiAbProcessLocksWorker.c)
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     RtlWriteAcquireTickLock @ 0x1400DE444 (RtlWriteAcquireTickLock.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140106E54 (KiUpdateGlobalCpuSetConfiguration.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

void __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r13d
  unsigned __int8 v3; // r14
  int v4; // eax
  unsigned __int16 v5; // di
  int v6; // esi
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r8
  _QWORD *v10; // r12
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r11
  _QWORD *v22; // r13
  __int64 v23; // r9
  int v24; // esi
  __int64 v25; // r11
  __int64 v26; // rdx
  unsigned __int16 i; // dx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 CurrentThread; // rsi
  struct _KPRCB *v36; // r14
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  _KTHREAD *NextThread; // rbx
  __int64 v40; // r8
  __int64 v41; // r8
  bool v42; // zf
  int v44; // [rsp+44h] [rbp-BCh]
  unsigned int v45; // [rsp+48h] [rbp-B8h]
  _QWORD *v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+68h] [rbp-98h]
  _QWORD *v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v51; // [rsp+78h] [rbp-88h]
  int v52; // [rsp+80h] [rbp-80h]
  _QWORD v53[20]; // [rsp+90h] [rbp-70h]

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v45 = (unsigned __int16)KiActiveGroups;
  v51 = a1;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  if ( a1 )
  {
    KxAcquireSpinLock(&KiCpuSetLock);
    a1 = v51;
  }
  v4 = 0;
  v44 = 0;
  v5 = 0;
  if ( v2 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = qword_1403825B8[v5];
      if ( a1 )
      {
        if ( v5 >= *a1 )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)&a1[4 * v5 + 4];
        v9 = v7 ^ v8;
        v53[v5] = v9;
        if ( KiNonParkedCpuSets[v5] == v9 )
          goto LABEL_41;
      }
      else
      {
        v9 = KiNonParkedCpuSets[v5];
        v53[v5] = v9;
      }
      v10 = KiCpuSetAffinitiesShadow;
      v11 = v7 & v9;
      v46 = KiCpuSetAffinitiesShadow;
      v4 = 1;
      v12 = v7 ^ v7 & v9;
      v44 = 1;
      if ( (v7 & v9) != 0 )
      {
        do
        {
          _BitScanForward64(&v13, v11);
          v52 = v13;
          v11 ^= 1LL << v13;
          v10[(unsigned int)((v6 << 6) + v13)] = 1LL << v13;
        }
        while ( v11 );
        v4 = 1;
      }
      if ( !v12 )
        goto LABEL_42;
      v14 = qword_1403848F8[2 * v5];
      v15 = v7 ^ v14;
      if ( (v14 & v9) == 0 || (v15 & v9) == 0 )
      {
        v14 = 0LL;
        v15 = 0LL;
      }
      v16 = v7 ^ KiSystemAllowedCpuSets[v5];
      v17 = v9 & v16;
      if ( v16 )
      {
        if ( v17 )
        {
          v18 = v12 & v16;
          v12 ^= v18;
          if ( v18 )
          {
            v19 = v46;
            do
            {
              _BitScanForward64((unsigned __int64 *)&v20, v18);
              v21 = v17;
              v18 &= ~(1LL << v20);
              v49 = v20;
              if ( _bittest64(&v14, (unsigned int)v20) )
              {
                if ( (v14 & v17) != 0 )
                  v21 = v14 & v17;
              }
              else if ( (v15 & v17) != 0 )
              {
                v21 = v15 & v17;
              }
              v19[(unsigned int)((v6 << 6) + v20)] = v21;
            }
            while ( v18 );
            v2 = v45;
          }
        }
      }
      if ( v12 )
      {
        v22 = v46;
        v23 = v7 & ~v17;
        if ( (v9 & v23) == 0 )
          v23 = v7;
        v24 = v6 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v25, v12);
          v26 = v23;
          v12 &= ~(1LL << v25);
          v49 = v25;
          if ( _bittest64(&v14, (unsigned int)v25) )
          {
            if ( (v14 & v23 & v9) != 0 )
              v26 = v14 & v23;
          }
          else if ( (v9 & v15 & v23) != 0 )
          {
            v26 = v15 & v23;
          }
          v22[(unsigned int)(v24 + v25)] = v26;
        }
        while ( v12 );
        v2 = v45;
      }
LABEL_41:
      v4 = v44;
LABEL_42:
      a1 = v51;
      v6 = ++v5;
      if ( v5 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v46 = 0LL;
  if ( v4 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < v2; KiNonParkedCpuSets[v28] = v53[v28] )
      v28 = i++;
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v46);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = v46;
  while ( v33 )
  {
    v34 = (__int64)(v33 - 27);
    v33 = (_QWORD *)*v33;
    KiDeferredReadyThread((__int64)CurrentPrcb, v34, v31);
  }
  if ( v3 >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(v30) = 2;
        HalRequestSoftwareInterrupt(v30);
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
        v48 = 0LL;
        v50 = 0LL;
        v36 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(CurrentThread, 1, 1, 1, (__int64)&v48, (__int64)&v50, (__int64)&v36->AbSelfIoBoostsList);
        KiAbProcessLocksWorker(&v50, (__int64 *)&v36->AbSelfIoBoostsList, (__int64)&v48, 0);
        v37 = v48;
        while ( v37 )
        {
          v38 = (__int64)(v37 - 27);
          v37 = (_QWORD *)*v37;
          KiDeferredReadyThread((__int64)v36, v38, v31);
        }
        v3 = a2;
      }
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v47, v29, v31);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v3;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v40);
      LOBYTE(v41) = v3;
      v42 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v41) == 0;
    }
    else
    {
      v42 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v42 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    __writecr8(v3);
  }
}
