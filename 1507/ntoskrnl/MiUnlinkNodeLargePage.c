/*
 * XREFs of MiUnlinkNodeLargePage @ 0x1401023B8
 * Callers:
 *     MiReplenishFromNodeLargePages @ 0x140102214 (MiReplenishFromNodeLargePages.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiZeroLargePageThread @ 0x140165A28 (MiZeroLargePageThread.c)
 *     MiFindLargeNodePages @ 0x140214640 (MiFindLargeNodePages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401025F8 (MiUnlinkNodeLargePageHelper.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r15
  unsigned __int8 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r14
  bool v11; // zf
  unsigned __int8 CurrentIrql; // si
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 Next; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]

  v4 = a4;
  v5 = *(_QWORD *)(a1 + 40) + 1336LL * a2;
  v6 = a3;
  while ( (_DWORD)v6 != 4 )
  {
    v9 = 4 * v4;
    LODWORD(v10) = v6;
    v18 = (_QWORD *)(v5 + 16 * (4 * v4 + v6 + 1));
    if ( (_QWORD *)*v18 == v18 )
    {
      v11 = *(_QWORD *)(v5 + 16 * (v9 + v6 + 9)) == v5 + 16 * (v9 + v6 + 9);
      goto LABEL_6;
    }
LABEL_7:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1328), &LockHandle);
    v13 = (_QWORD *)(v5 + 16 * ((unsigned int)v10 + v9 + 1));
    if ( (_QWORD *)*v13 != v13 || (v13 = (_QWORD *)(v5 + 16 * ((unsigned int)v10 + v9 + 9)), (_QWORD *)*v13 != v13) )
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13[1] + 24LL), 0x3FuLL) )
      {
        v14 = v13[1];
        v15 = *(_QWORD **)(v14 + 8);
        if ( *(_QWORD **)v14 != v13 || *v15 != v14 )
          __fastfail(3u);
        v13[1] = v15;
        *v15 = v13;
        MiUnlinkNodeLargePageHelper(v5, v14, (unsigned int)v4, (unsigned int)v10);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_14;
        }
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_14:
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            return v14;
          }
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_14;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v19 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_24;
        v19 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
    }
LABEL_24:
    __writecr8(CurrentIrql);
  }
  v7 = (unsigned __int8 *)(v5 + 1317);
  v8 = v5 + 1317 + (unsigned int)MmNumberOfChannels;
  v9 = 4 * v4;
  while ( 1 )
  {
    v10 = *v7;
    if ( *(_QWORD *)(v5 + 16 * (v10 + v9 + 1)) != v5 + 16 * (v10 + v9 + 1)
      || *(_QWORD *)(v5 + 16 * (v10 + v9 + 9)) != v5 + 16 * (v10 + v9 + 9) )
    {
      break;
    }
    if ( ++v7 == (unsigned __int8 *)v8 )
      return 0LL;
  }
  v11 = v7 == (unsigned __int8 *)v8;
LABEL_6:
  if ( !v11 )
    goto LABEL_7;
  return 0LL;
}
