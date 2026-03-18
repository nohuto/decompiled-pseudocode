/*
 * XREFs of KeInsertSchedulingGroup @ 0x1400C46B0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404868AC (PspAddSchedulingGroupToJobChain.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     PspEstablishDfssHierarchy @ 0x140517E8C (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400C3F18 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x1400C42BC (KiUpdateCpuTargetByRate.c)
 *     KiEnableGroupScheduling @ 0x140140434 (KiEnableGroupScheduling.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall KeInsertSchedulingGroup(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v6; // r13d
  __int64 *v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  __int64 **v17; // rcx
  unsigned int v18; // r12d
  unsigned int v19; // ebp
  __int64 *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // r8
  __int64 **v27; // rax
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  int v32; // [rsp+80h] [rbp+8h] BYREF
  __int64 v33; // [rsp+88h] [rbp+10h]

  v33 = a2;
  if ( !KiGroupSchedulingEnabled )
  {
    KiEnableGroupScheduling();
    a2 = v33;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = KeMaximumProcessors;
  v7 = (__int64 *)(a1 + 40);
  *(LARGE_INTEGER *)(a1 + 24) = PerformanceCounter;
  v8 = 0;
  *(_QWORD *)(a1 + 72) = a1 + 64;
  *(_QWORD *)(a1 + 64) = a1 + 64;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v6 )
  {
    v9 = KiCycleDivisorShortTerm;
    v10 = a1 + 136;
    do
    {
      memset((void *)(v10 - 8), 0, 0x78uLL);
      v11 = (_QWORD *)(v10 + 112);
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
      *(_QWORD *)(v10 + 368) = 0LL;
      *(_QWORD *)(v10 + 376) = 0LL;
      if ( a3 )
      {
        v14 = 408LL * v8 + a3 + 128;
        *(_QWORD *)(v10 + 384) = v14;
        *(_QWORD *)(v10 + 392) = *(_QWORD *)(v14 + 400);
        v13 = *(_BYTE *)(v14 + 113) + 1;
      }
      else
      {
        *(_QWORD *)(v10 + 384) = 0LL;
        *(_QWORD *)(v10 + 392) = v10 - 8;
      }
      *(_BYTE *)(v10 + 105) = v13;
      ++v8;
      v10 += 408LL;
    }
    while ( v8 < v6 );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 80) = a3;
    v17 = *(__int64 ***)(a3 + 72);
    *v7 = a3 + 64;
    *(_QWORD *)(a1 + 48) = v17;
    if ( *v17 != (__int64 *)(a3 + 64) )
      __fastfail(3u);
    *v17 = v7;
    *(_QWORD *)(a3 + 72) = v7;
  }
  else
  {
    v27 = (__int64 **)qword_1402E88D8;
    *v7 = (__int64)&KiSchedulingGroupList;
    *(_QWORD *)(a1 + 48) = v27;
    if ( *v27 != &KiSchedulingGroupList )
      __fastfail(3u);
    *v27 = v7;
    qword_1402E88D8 = a1 + 40;
  }
  v18 = KeNumberProcessors_0;
  v19 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v20 = KiProcessorBlock;
    v21 = a1 + 128;
    do
    {
      v22 = *v20;
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v32, (__int64)v15, v16);
        while ( *(_QWORD *)(v22 + 48) );
      }
      v15 = *(_QWORD **)(v22 + 24280);
      v23 = v21 + 72;
      *(_QWORD *)(v21 + 72) = v22 + 24272;
      *(_QWORD *)(v21 + 80) = v15;
      if ( *v15 != v22 + 24272 )
        __fastfail(3u);
      *v15 = v23;
      *(_QWORD *)(v22 + 24280) = v23;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 48), 0LL);
      ++v19;
      ++v20;
      v21 += 408LL;
    }
    while ( v19 < v18 );
  }
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    if ( a3 )
    {
      v24 = *(_DWORD *)(a3 + 12);
      if ( !v24 || (v25 = (unsigned __int16)v33, (unsigned __int16)v33 < v24) )
      {
        v26 = a3;
        *(_DWORD *)(a3 + 12) = (unsigned __int16)v33;
LABEL_24:
        KiAssignSchedulingGroupWeights(1, 0, v26);
LABEL_25:
        KiUpdateCpuTargetByRate((unsigned __int16 *)a1, 0LL, v16);
        goto LABEL_26;
      }
    }
    else
    {
      v24 = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate
        || (v25 = (unsigned __int16)v33, (unsigned __int16)v33 < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        v26 = 0LL;
        KiGroupSchedulingMinimumRate = (unsigned __int16)v33;
        goto LABEL_24;
      }
    }
    *(_DWORD *)(a1 + 8) = (v25 << 7) / v24;
    goto LABEL_25;
  }
  if ( a3 )
  {
    v29 = *(_DWORD *)(a3 + 16);
    if ( !v29 || (v30 = (unsigned __int16)v33, (unsigned __int16)v33 < v29) )
    {
      v30 = (unsigned __int16)v33;
      *(_DWORD *)(a3 + 16) = (unsigned __int16)v33;
    }
    *(_DWORD *)(a3 + 20) += v30;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v28 = (unsigned __int16)v33, (unsigned __int16)v33 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v28 = (unsigned __int16)v33;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)v33;
    }
    KiGroupSchedulingTotalWeight += v28;
  }
  KiAssignSchedulingGroupWeights(0, 0, a3);
LABEL_26:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
