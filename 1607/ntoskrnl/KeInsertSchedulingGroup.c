/*
 * XREFs of KeInsertSchedulingGroup @ 0x1400A498C
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x1404B58A0 (PspAddSchedulingGroupToJobChain.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x14054C574 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A4EB4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A51E8 (KiUpdateCpuTargetByRate.c)
 *     KiEnableGroupScheduling @ 0x14014AB78 (KiEnableGroupScheduling.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v6; // r13d
  _QWORD *v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char v13; // al
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  __int64 v16; // r13
  unsigned int v17; // r14d
  __int64 *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rbp
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v31; // [rsp+80h] [rbp+8h] BYREF
  __int64 v32; // [rsp+88h] [rbp+10h]

  v32 = a2;
  if ( !KiGroupSchedulingEnabled )
  {
    KiEnableGroupScheduling();
    a2 = v32;
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = KeMaximumProcessors;
  v7 = (_QWORD *)(a1 + 56);
  *(LARGE_INTEGER *)(a1 + 24) = PerformanceCounter;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  v8 = 0;
  *(_QWORD *)(a1 + 80) = a1 + 80;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v6 )
  {
    v9 = KiCycleDivisorShortTerm;
    v10 = a1 + 136;
    do
    {
      memset((void *)(v10 - 8), 0, 0x88uLL);
      v11 = (_QWORD *)(v10 + 128);
      v12 = 16LL;
      do
      {
        v11[1] = v11;
        *v11 = v11;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = 0;
      *(_QWORD *)v10 = v9;
      *(_QWORD *)(v10 + 8) = v9;
      *(_QWORD *)(v10 + 384) = 0LL;
      *(_QWORD *)(v10 + 392) = 0LL;
      if ( a3 )
      {
        v24 = 424LL * v8 + a3 + 128;
        *(_QWORD *)(v10 + 400) = v24;
        *(_QWORD *)(v10 + 408) = *(_QWORD *)(v24 + 416);
        v13 = *(_BYTE *)(v24 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 400) = 0LL;
        *(_QWORD *)(v10 + 408) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v13;
      ++v8;
      v10 += 424LL;
    }
    while ( v8 < v6 );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 96) = a3;
    v25 = *(_QWORD **)(a3 + 88);
    if ( *v25 != a3 + 80 )
      __fastfail(3u);
    *v7 = a3 + 80;
    *(_QWORD *)(a1 + 64) = v25;
    *v25 = v7;
    *(_QWORD *)(a3 + 88) = v7;
  }
  else
  {
    v14 = (_QWORD *)qword_14030E2E8;
    if ( *(__int64 **)qword_14030E2E8 != &KiSchedulingGroupList )
      __fastfail(3u);
    *v7 = &KiSchedulingGroupList;
    *(_QWORD *)(a1 + 64) = v14;
    *v14 = v7;
    qword_14030E2E8 = a1 + 56;
  }
  v15 = KeNumberProcessors_0;
  v16 = 0LL;
  v17 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v18 = KiProcessorBlock;
    v19 = a1 + 128;
    do
    {
      v20 = *v18;
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( *(_QWORD *)(v20 + 48) );
      }
      v21 = *(_QWORD **)(v20 + 24280);
      v22 = (_QWORD *)(v19 + 72);
      if ( *v21 != v20 + 24272 )
        __fastfail(3u);
      *v22 = v20 + 24272;
      *(_QWORD *)(v19 + 80) = v21;
      *v21 = v22;
      *(_QWORD *)(v20 + 24280) = v22;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
      if ( *(_QWORD *)(v20 + 24896) )
      {
        if ( *(_BYTE *)(v20 + 1617) == *(_BYTE *)(*(_QWORD *)(v20 + 24904) + 593LL) )
        {
          *(_BYTE *)(v19 + 112) |= 0x20u;
          v16 = v19 + 128;
        }
        *(_QWORD *)(v19 + 120) = v16;
      }
      ++v17;
      ++v18;
      v19 += 424LL;
    }
    while ( v17 < v15 );
  }
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v23 = *(_DWORD *)(a3 + 12);
      if ( !v23 || (v26 = (unsigned __int16)v32, (unsigned __int16)v32 < v23) )
      {
        *(_DWORD *)(a3 + 12) = (unsigned __int16)v32;
LABEL_27:
        KiAssignSchedulingGroupWeights(1LL, 0LL);
LABEL_28:
        KiUpdateCpuTargetByRate(a1, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      v23 = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate
        || (v26 = (unsigned __int16)v32, (unsigned __int16)v32 < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        KiGroupSchedulingMinimumRate = (unsigned __int16)v32;
        goto LABEL_27;
      }
    }
    *(_DWORD *)(a1 + 8) = (v26 << 7) / v23;
    goto LABEL_28;
  }
  if ( a3 )
  {
    v28 = *(_DWORD *)(a3 + 16);
    if ( !v28 || (v29 = (unsigned __int16)v32, (unsigned __int16)v32 < v28) )
    {
      v29 = (unsigned __int16)v32;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)v32;
    }
    *(_DWORD *)(a3 + 20) += v29;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v27 = (unsigned __int16)v32, (unsigned __int16)v32 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v27 = (unsigned __int16)v32;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)v32;
    }
    KiGroupSchedulingTotalWeight += v27;
  }
  KiAssignSchedulingGroupWeights(0LL, 0LL);
LABEL_29:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
