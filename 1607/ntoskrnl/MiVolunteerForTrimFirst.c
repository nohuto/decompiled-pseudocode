/*
 * XREFs of MiVolunteerForTrimFirst @ 0x1400E3E30
 * Callers:
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BA3CC (MiUpdateWorkingSetAgeDistribution.c)
 *     MiReleaseWsle @ 0x1400E02D0 (MiReleaseWsle.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  int v8; // ebp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = *(unsigned __int16 *)(a1 + 164);
  if ( (_WORD)result == 1023 )
  {
    v5 = MiSystemPartition;
  }
  else
  {
    v4 = (unsigned __int16)result;
    result = qword_140327038;
    v5 = *(int **)(qword_140327038 + 8 * v4);
  }
  v6 = *((_QWORD *)v5 + 781);
  if ( *(_QWORD *)(a1 + 88) >= *(_QWORD *)(v6 + 64) )
  {
    if ( a2 < 0 )
      return result;
    v7 = (_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || *((_QWORD **)v5 + 782) == v7 )
      return result;
    v8 = 1;
  }
  else
  {
    if ( a2 > 0 )
      return result;
    v7 = (_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || *((_QWORD **)v5 + 783) == v7 )
      return result;
    v8 = 2;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
  if ( *(_BYTE *)(v6 + 53) || !*v7 )
  {
    *(_BYTE *)(v6 + 54) = 1;
  }
  else
  {
    v9 = *v7;
    v10 = (_QWORD *)v7[1];
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v10 != v7 )
      __fastfail(3u);
    v11 = v5 + 1564;
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( v8 == 1 )
    {
      v13 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        __fastfail(3u);
      *v7 = v13;
      v7[1] = v11;
      *(_QWORD *)(v13 + 8) = v7;
      *v11 = v7;
    }
    else
    {
      v12 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v12 != v11 )
        __fastfail(3u);
      *v7 = v11;
      v7[1] = v12;
      *v12 = v7;
      v11[1] = v7;
    }
  }
  return KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
}
