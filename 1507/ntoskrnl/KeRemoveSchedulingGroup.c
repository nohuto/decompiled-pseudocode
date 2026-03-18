/*
 * XREFs of KeRemoveSchedulingGroup @ 0x140120EBC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x14053CD70 (PspRemoveCpuRateControl.c)
 *     MiSessionObjectDelete @ 0x140569CC8 (MiSessionObjectDelete.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x140121610 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1401216CC (KiUpdateMinimumWeight.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // rsi
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 *v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rbp
  unsigned int v11; // esi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  bool v16; // zf
  int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+70h] [rbp+8h]

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 5);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 6);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 20 || *v3 != a1 + 20 )
    __fastfail(3u);
  *v3 = (unsigned __int16 *)v2;
  v4 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v5 = 0;
  v6 = KeNumberProcessors_0;
  v7 = *((_QWORD *)a1 + 10);
  v19 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v8 = KiProcessorBlock;
    v9 = a1 + 64;
    do
    {
      v10 = *v8;
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v11);
        }
        while ( *(_QWORD *)(v10 + 48) );
      }
      v12 = v9[9];
      v13 = (_QWORD *)v9[10];
      if ( *(_QWORD **)(v12 + 8) != v9 + 9 || (_QWORD *)*v13 != v9 + 9 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      ++v5;
      v14 = v9[7] + v19;
      ++v8;
      v9 += 51;
      v19 = v14;
    }
    while ( v5 < v6 );
    v4 = v14;
  }
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v17 = *a1;
    if ( v7 )
      *(_DWORD *)(v7 + 20) -= v17;
    else
      KiGroupSchedulingTotalWeight -= v17;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 64) == v7 + 64 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      goto LABEL_16;
    }
    if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, v7) )
      goto LABEL_15;
    v16 = (*((_DWORD *)a1 + 1) & 1) == 0;
LABEL_20:
    if ( !v16 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingMinimumRate = 0;
    goto LABEL_16;
  }
  if ( !(unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, 0LL) )
  {
    v16 = (*((_DWORD *)a1 + 1) & 1) == 0;
    goto LABEL_20;
  }
LABEL_15:
  KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0LL);
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
