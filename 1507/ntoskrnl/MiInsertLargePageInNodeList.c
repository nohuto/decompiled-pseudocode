/*
 * XREFs of MiInsertLargePageInNodeList @ 0x1400FFD48
 * Callers:
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     MiRebuildLargePage @ 0x1400FFA70 (MiRebuildLargePage.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiZeroLargePageThread @ 0x140165A28 (MiZeroLargePageThread.c)
 *     MiEnableNewPfns @ 0x1402128C8 (MiEnableNewPfns.c)
 *     MiFreeLargePageChain @ 0x14022D01C (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x14022D110 (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x14022D300 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiIncreaseAvailablePages @ 0x1400FFF20 (MiIncreaseAvailablePages.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiInsertLargePageInNodeList(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r15
  __int16 *v9; // rsi
  __int64 v10; // r10
  __int64 v11; // rbp
  __int64 v12; // r11
  __int64 v13; // rbx
  int v14; // ecx
  unsigned __int64 *v15; // rax
  __int64 result; // rax
  unsigned __int64 *v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h]

  v3 = a3;
  v4 = a2 >> 9;
  v5 = 48 * a1 - 0x58000000000LL;
  v7 = v5 + 48 * a2;
  MiPageToNode(a1, 1);
  MiPageToChannel(a1);
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF);
  v11 = *((_QWORD *)v9 + 5) + 1336 * v10;
  v20 = v12 + 4 * (v3 + 2LL * (a1 < 0x100000));
  v13 = v11 + 16 * (v20 + 1);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 1328), &LockHandle);
  if ( (MiFlags & 0x30) != 0 )
  {
    v14 = a3;
    *(_BYTE *)(v5 + 34) ^= (a3 ^ *(_BYTE *)(v5 + 34)) & 7;
    v15 = *(unsigned __int64 **)(v13 + 8);
    *(_QWORD *)v5 = v13;
    *(_QWORD *)(v5 + 8) = v15;
    if ( *v15 != v13 )
      __fastfail(3u);
    *v15 = v5;
    *(_QWORD *)(v13 + 8) = v5;
  }
  else
  {
    while ( v5 < v7 )
    {
      v17 = *(unsigned __int64 **)(v13 + 8);
      *(_QWORD *)v5 = v13;
      *(_QWORD *)(v5 + 8) = v17;
      if ( *v17 != v13 )
        __fastfail(3u);
      *v17 = v5;
      *(_QWORD *)(v13 + 8) = v5;
      v5 += 24576LL;
    }
    v14 = a3;
  }
  *(_QWORD *)(v11 + 8 * v20 + 272) += v4;
  *(_QWORD *)(v11 + 8 * v3) += v4;
  if ( v14 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 200, a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 192, a2);
  MiIncreaseAvailablePages(v9, a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  _m_prefetchw(&LockHandle);
  result = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_12:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    return result;
  }
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
             0LL,
             (signed __int64)&LockHandle);
  if ( (struct _KLOCK_QUEUE_HANDLE *)result != &LockHandle )
  {
    result = KxWaitForLockChainValid((__int64 *)&LockHandle);
    goto LABEL_12;
  }
  return result;
}
