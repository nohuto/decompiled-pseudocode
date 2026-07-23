/*
 * XREFs of KeRemoveSchedulingGroup @ 0x1400A47E8
 * Callers:
 *     PspRemoveCpuRateControl @ 0x1404B5738 (PspRemoveCpuRateControl.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 *     MiSessionObjectDelete @ 0x140534E8C (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x14054C574 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A4EB4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400A4F78 (KiUpdateMinimumWeight.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // r13
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 *v8; // r14
  _QWORD *v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  bool v13; // zf
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 28 || *v3 != a1 + 28 )
    __fastfail(3u);
  *v3 = (unsigned __int16 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = 0LL;
  v5 = KeNumberProcessors_0;
  v6 = 0;
  v7 = *((_QWORD *)a1 + 12);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v8 = KiProcessorBlock;
    v9 = a1 + 64;
    do
    {
      v10 = *v8;
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(_QWORD *)(v10 + 48) );
      }
      v11 = v9[9];
      v12 = (_QWORD *)v9[10];
      if ( *(_QWORD **)(v11 + 8) != v9 + 9 || (_QWORD *)*v12 != v9 + 9 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      v4 += v9[7];
      ++v6;
      v9 += 53;
      ++v8;
    }
    while ( v6 < v5 );
  }
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v15 = *a1;
    if ( v7 )
      *(_DWORD *)(v7 + 20) -= v15;
    else
      KiGroupSchedulingTotalWeight -= v15;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 80) == v7 + 80 )
    {
      *(_QWORD *)(v7 + 12) = 0LL;
      goto LABEL_16;
    }
    if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, v7) )
    {
LABEL_21:
      KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0LL);
      goto LABEL_16;
    }
    v13 = (*((_DWORD *)a1 + 1) & 1) == 0;
  }
  else
  {
    if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingMinimumRate = 0;
      goto LABEL_16;
    }
    if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, 0LL) )
      goto LABEL_21;
    v13 = (*((_DWORD *)a1 + 1) & 1) == 0;
  }
  if ( v13 )
    goto LABEL_21;
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
