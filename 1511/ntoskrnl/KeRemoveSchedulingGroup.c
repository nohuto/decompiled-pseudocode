/*
 * XREFs of KeRemoveSchedulingGroup @ 0x1400C4CFC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x1404877D8 (PspRemoveCpuRateControl.c)
 *     MiSessionObjectDelete @ 0x1404F5798 (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x140517E8C (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400C3F18 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400C3FE0 (KiUpdateMinimumWeight.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // r13
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 *v8; // r14
  _QWORD *v9; // rbp
  __int64 v10; // rsi
  __int64 *v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 5);
  v3 = (__int64 *)*((_QWORD *)a1 + 6);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 20 || (unsigned __int16 *)*v3 != a1 + 20 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  v4 = 0LL;
  v5 = KeNumberProcessors_0;
  v6 = 0;
  v7 = *((_QWORD *)a1 + 10);
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
          KeYieldProcessorEx(&v17, v2, 0LL);
        while ( *(_QWORD *)(v10 + 48) );
      }
      v2 = v9[9];
      v11 = (__int64 *)v9[10];
      if ( *(_QWORD **)(v2 + 8) != v9 + 9 || (_QWORD *)*v11 != v9 + 9 )
        __fastfail(3u);
      *v11 = v2;
      *(_QWORD *)(v2 + 8) = v11;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      v4 += v9[7];
      ++v6;
      v9 += 51;
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
    if ( *(_QWORD *)(v7 + 64) == v7 + 64 )
    {
      *(_QWORD *)(v7 + 12) = 0LL;
      goto LABEL_19;
    }
    if ( KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0, (_DWORD *)v7) )
      goto LABEL_14;
    v13 = (*((_DWORD *)a1 + 1) & 1) == 0;
LABEL_18:
    if ( !v13 )
      goto LABEL_19;
    goto LABEL_14;
  }
  if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
  {
    KiGroupSchedulingMinimumWeight = 0;
    KiGroupSchedulingMinimumRate = 0;
    goto LABEL_19;
  }
  if ( !KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0, 0LL) )
  {
    v13 = (*((_DWORD *)a1 + 1) & 1) == 0;
    goto LABEL_18;
  }
LABEL_14:
  KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0, v12);
LABEL_19:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
