/*
 * XREFs of KeInsertSchedulingGroup @ 0x140121074
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x140121610 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateCpuTargetByRate @ 0x140121BF4 (KiUpdateCpuTargetByRate.c)
 *     KiEnableGroupScheduling @ 0x14016E280 (KiEnableGroupScheduling.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall KeInsertSchedulingGroup(LARGE_INTEGER *a1, LONGLONG a2, LARGE_INTEGER a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v6; // r13d
  LARGE_INTEGER *v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // r15
  LARGE_INTEGER *v10; // r14
  LARGE_INTEGER *v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  LARGE_INTEGER **v15; // rcx
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  __int64 *v18; // r14
  LARGE_INTEGER *v19; // r13
  __int64 v20; // rsi
  unsigned int v21; // ebp
  LARGE_INTEGER **v22; // rdx
  LARGE_INTEGER *v23; // rax
  unsigned int v24; // ecx
  int v25; // eax
  __int64 **v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  LONGLONG v31; // [rsp+78h] [rbp+10h]

  v31 = a2;
  if ( !KiGroupSchedulingEnabled )
  {
    KiEnableGroupScheduling();
    a2 = v31;
  }
  a1[4].QuadPart = 0LL;
  a1[1].HighPart = 0;
  a1[2].LowPart = 0;
  a1[2].HighPart = 0;
  a1->QuadPart = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v6 = KeMaximumProcessors;
  v7 = a1 + 5;
  a1[3] = PerformanceCounter;
  v8 = 0;
  a1[9].QuadPart = (LONGLONG)&a1[8];
  a1[8].QuadPart = (LONGLONG)&a1[8];
  a1[6].QuadPart = (LONGLONG)&a1[5];
  a1[5].QuadPart = (LONGLONG)&a1[5];
  a1[10].QuadPart = 0LL;
  if ( v6 )
  {
    v9 = KiCycleDivisorShortTerm;
    v10 = a1 + 17;
    do
    {
      memset(&v10[-1], 0, 0x78uLL);
      v11 = v10 + 14;
      v12 = 16LL;
      do
      {
        v11[1].QuadPart = (LONGLONG)v11;
        v11->QuadPart = (LONGLONG)v11;
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v13 = 0;
      v10->QuadPart = v9;
      v10[1].QuadPart = v9;
      v10[46].QuadPart = 0LL;
      v10[47].QuadPart = 0LL;
      if ( a3.QuadPart )
      {
        v14 = 408LL * v8 + a3.QuadPart + 128;
        v10[48].QuadPart = v14;
        v10[49] = *(LARGE_INTEGER *)(v14 + 400);
        v13 = *(_BYTE *)(v14 + 113) + 1;
      }
      else
      {
        v10[48].QuadPart = 0LL;
        v10[49].QuadPart = (LONGLONG)&v10[-1];
      }
      BYTE1(v10[13].LowPart) = v13;
      ++v8;
      v10 += 51;
    }
    while ( v8 < v6 );
  }
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( a3.QuadPart )
  {
    a1[10] = a3;
    v15 = *(LARGE_INTEGER ***)(a3.QuadPart + 72);
    v7->QuadPart = a3.QuadPart + 64;
    a1[6].QuadPart = (LONGLONG)v15;
    if ( *v15 != (LARGE_INTEGER *)(a3.QuadPart + 64) )
      __fastfail(3u);
    *v15 = v7;
    *(_QWORD *)(a3.QuadPart + 72) = v7;
  }
  else
  {
    v26 = (__int64 **)qword_140338D58;
    v7->QuadPart = (LONGLONG)&KiSchedulingGroupList;
    a1[6].QuadPart = (LONGLONG)v26;
    if ( *v26 != &KiSchedulingGroupList )
      __fastfail(3u);
    *v26 = (__int64 *)v7;
    qword_140338D58 = (__int64)&a1[5];
  }
  v16 = KeNumberProcessors_0;
  v17 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v18 = KiProcessorBlock;
    v19 = a1 + 16;
    do
    {
      v20 = *v18;
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v21);
        }
        while ( *(_QWORD *)(v20 + 48) );
      }
      v22 = *(LARGE_INTEGER ***)(v20 + 24280);
      v23 = v19 + 9;
      v19[9].QuadPart = v20 + 24272;
      v19[10].QuadPart = (LONGLONG)v22;
      if ( *v22 != (LARGE_INTEGER *)(v20 + 24272) )
        __fastfail(3u);
      *v22 = v23;
      *(_QWORD *)(v20 + 24280) = v23;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
      ++v17;
      ++v18;
      v19 += 51;
    }
    while ( v17 < v16 );
  }
  if ( (a1->HighPart & 1) != 0 )
  {
    if ( a3.QuadPart )
    {
      v24 = *(_DWORD *)(a3.QuadPart + 12);
      if ( !v24 || (v25 = (unsigned __int16)v31, (unsigned __int16)v31 < v24) )
      {
        *(_DWORD *)(a3.QuadPart + 12) = (unsigned __int16)v31;
LABEL_24:
        KiAssignSchedulingGroupWeights(1LL, 0LL);
LABEL_25:
        KiUpdateCpuTargetByRate(a1, 0LL);
        goto LABEL_26;
      }
    }
    else
    {
      v24 = KiGroupSchedulingMinimumRate;
      if ( !KiGroupSchedulingMinimumRate
        || (v25 = (unsigned __int16)v31, (unsigned __int16)v31 < (unsigned int)KiGroupSchedulingMinimumRate) )
      {
        KiGroupSchedulingMinimumRate = (unsigned __int16)v31;
        goto LABEL_24;
      }
    }
    a1[1].LowPart = (v25 << 7) / v24;
    goto LABEL_25;
  }
  if ( a3.QuadPart )
  {
    v28 = *(_DWORD *)(a3.QuadPart + 16);
    if ( !v28 || (v29 = (unsigned __int16)v31, (unsigned __int16)v31 < v28) )
    {
      v29 = (unsigned __int16)v31;
      *(_DWORD *)(a3.QuadPart + 16) = (unsigned __int16)v31;
    }
    *(_DWORD *)(a3.QuadPart + 20) += v29;
  }
  else
  {
    if ( !KiGroupSchedulingMinimumWeight
      || (v27 = (unsigned __int16)v31, (unsigned __int16)v31 < (unsigned int)KiGroupSchedulingMinimumWeight) )
    {
      v27 = (unsigned __int16)v31;
      KiGroupSchedulingMinimumWeight = (unsigned __int16)v31;
    }
    KiGroupSchedulingTotalWeight += v27;
  }
  KiAssignSchedulingGroupWeights(0LL, 0LL);
LABEL_26:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
