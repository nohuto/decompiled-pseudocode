/*
 * XREFs of MiVolunteerForTrimFirst @ 0x1400AD700
 * Callers:
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400808F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiReleaseWsle @ 0x1400AE200 (MiReleaseWsle.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 *v3; // rbx
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
  void *retaddr; // [rsp+48h] [rbp+0h]

  result = *(unsigned __int8 *)(a1 + 216);
  v3 = MiSystemPartition;
  if ( (result & 7) == 0 )
  {
    result = *(unsigned __int16 *)(a1 + 180);
    if ( (_WORD)result != 1023 )
    {
      v5 = (unsigned __int16)result;
      result = qword_14034F0E8;
      v3 = *(__int16 **)(qword_14034F0E8 + 8 * v5);
    }
  }
  v6 = *((_QWORD *)v3 + 657);
  if ( *(_QWORD *)(a1 + 88) < *(_QWORD *)(v6 + 64) )
  {
    if ( a2 > 0 )
      return result;
    v7 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || *((__int64 **)v3 + 659) == v7 )
      return result;
    v8 = 2;
LABEL_14:
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
      v11 = (__int64 *)(v3 + 2632);
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      return KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    _m_prefetchw(&LockHandle);
    result = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                 0LL,
                 (signed __int64)&LockHandle);
      if ( (struct _KLOCK_QUEUE_HANDLE *)result == &LockHandle )
        return result;
      result = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    return result;
  }
  if ( a2 >= 0 )
  {
    v7 = (__int64 *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( *((__int64 **)v3 + 658) != v7 )
      {
        v8 = 1;
        goto LABEL_14;
      }
    }
  }
  return result;
}
