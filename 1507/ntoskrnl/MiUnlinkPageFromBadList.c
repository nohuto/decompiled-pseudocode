/*
 * XREFs of MiUnlinkPageFromBadList @ 0x14022649C
 * Callers:
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiMoveEccPagesToFreeList @ 0x140212D88 (MiMoveEccPagesToFreeList.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

signed __int64 __fastcall MiUnlinkPageFromBadList(_QWORD *a1)
{
  __int16 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 Next; // rax
  signed __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = MiPartitionIdToPointer(((unsigned int)HIDWORD(a1[5]) >> 8) & 0x3FF);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v2 + 428, &LockHandle);
  v3 = *a1 & 0xFFFFFFFFFLL;
  v4 = a1[3] & 0xFFFFFFFFFLL;
  if ( v3 == 0xFFFFFFFFFLL )
    *((_QWORD *)v2 + 427) = v4;
  else
    MiSetPfnBlink(48 * v3 - 0x58000000000LL, a1[3] & 0xFFFFFFFFFLL, 0);
  if ( v4 == 0xFFFFFFFFFLL )
    *((_QWORD *)v2 + 426) = v3;
  else
    *(_QWORD *)(48 * v4 - 0x58000000000LL) ^= (*(_QWORD *)(48 * v4 - 0x58000000000LL) ^ v3) & 0xFFFFFFFFFLL;
  --*((_QWORD *)v2 + 424);
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
        goto LABEL_13;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_13;
  }
  KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_13:
  *a1 = 0LL;
  result = MiSetPfnBlink((__int64)a1, 0LL, 1);
  a1[1] = 0LL;
  return result;
}
