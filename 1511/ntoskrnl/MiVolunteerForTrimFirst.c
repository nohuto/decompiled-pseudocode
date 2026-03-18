/*
 * XREFs of MiVolunteerForTrimFirst @ 0x14006DCF0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

volatile signed __int64 *__fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  volatile signed __int64 *result; // rax
  int *v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 *v7; // rsi
  int v8; // ebp
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 *v11; // rbx
  __int64 **v12; // rax
  __int64 v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = (volatile signed __int64 *)*(unsigned __int8 *)(a1 + 216);
  v3 = &MiSystemPartition;
  if ( ((unsigned __int8)result & 7) == 0 )
  {
    result = (volatile signed __int64 *)*(unsigned __int16 *)(a1 + 180);
    if ( (_WORD)result != 1023 )
    {
      v5 = (unsigned __int16)result;
      result = (volatile signed __int64 *)qword_1402FEC28;
      v3 = *(int **)(qword_1402FEC28 + 8 * v5);
    }
  }
  v6 = *((_QWORD *)v3 + 702);
  if ( *(_QWORD *)(a1 + 88) >= *(_QWORD *)(v6 + 64) )
  {
    if ( a2 < 0 )
      return result;
    v7 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || *((__int64 **)v3 + 703) == v7 )
      return result;
    v8 = 1;
  }
  else
  {
    if ( a2 > 0 )
      return result;
    v7 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || *((__int64 **)v3 + 704) == v7 )
      return result;
    v8 = 2;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
  if ( *(_BYTE *)(v6 + 53) || !*v7 )
  {
    *(_BYTE *)(v6 + 54) = 1;
  }
  else
  {
    v9 = (__int64 *)*v7;
    v10 = (__int64 **)v7[1];
    if ( *(__int64 **)(*v7 + 8) != v7 || *v10 != v7 )
      __fastfail(3u);
    v11 = (__int64 *)(v3 + 1406);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( v8 == 1 )
    {
      v13 = *v11;
      *v7 = *v11;
      v7[1] = (__int64)v11;
      if ( *(__int64 **)(v13 + 8) != v11 )
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v7;
      *v11 = (__int64)v7;
    }
    else
    {
      v12 = (__int64 **)v11[1];
      *v7 = (__int64)v11;
      v7[1] = (__int64)v12;
      if ( *v12 != v11 )
        __fastfail(3u);
      *v12 = v7;
      v11[1] = (__int64)v7;
    }
  }
  return KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
}
