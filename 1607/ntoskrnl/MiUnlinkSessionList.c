/*
 * XREFs of MiUnlinkSessionList @ 0x1401268E4
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404E16A0 (MiReleaseProcessReferenceToSessionDataPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x140028500 (RtlAvlRemoveNode.c)
 *     KxWaitForLockChainValid @ 0x1400F9530 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3B5C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlinkSessionList(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // r8
  __int64 **v4; // rdx
  __int64 Next; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  v2 = (__int64 *)(a1 + 144);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v3 = (__int64 *)*v2;
    v4 = *(__int64 ***)(a1 + 152);
    if ( *(__int64 **)(*v2 + 8) != v2 || *v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (__int64)v4;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140326920, a1 + 160);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_12;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_12;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_12:
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
