/*
 * XREFs of MiInsertLargePageInNodeListHelper @ 0x14001B2E0
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140064A70 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiFreeLargePageChain @ 0x1401FB558 (MiFreeLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x1401FB978 (MiInsertLargePageInNodeList.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 *     MiConstructNewLargeFreePage @ 0x1401FCF1C (MiConstructNewLargeFreePage.c)
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 * Callees:
 *     MiPageToChannel @ 0x14001B5C0 (MiPageToChannel.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiIncreaseAvailablePages @ 0x14001B700 (MiIncreaseAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140066D30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD4C8 (MiQueueLargeFreeZeroRebuild.c)
 */

void __fastcall MiInsertLargePageInNodeListHelper(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int16 v8; // ax
  int *v9; // rsi
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // rdi
  unsigned __int64 *v21; // rax
  unsigned __int64 *v22; // rax
  __int64 v23; // [rsp+28h] [rbp-60h]
  unsigned __int64 v24; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+98h] [rbp+10h]

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 48 * a1 - 0x58000000000LL;
  v7 = v6 + 48 * a2;
  v8 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
  if ( v8 == 1023 )
    v9 = &MiSystemPartition;
  else
    v9 = *(int **)(qword_140327038 + 8LL * v8);
  v10 = (unsigned int)MiFreeZeroPageSizeIndex(v6);
  v11 = MiLargePageSizes[v10];
  v24 = a2 / v11;
  MiPageToNode(v12, 1LL);
  v13 = MiPageToChannel(a1);
  v15 = 2184 * v14;
  v16 = 2 * v10;
  v17 = v4;
  v18 = *((_QWORD *)v9 + 6) + v15;
  v27 = v18;
  LockHandle.LockQueue.Next = 0LL;
  v19 = v13 + 4 * (v4 + 2 * (2 * v10 + (a1 < 0x100000)));
  v23 = v19;
  v20 = v18 + 16 * (v19 + 3);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v18 + 2176);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v18 + 2176);
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(v18 + 2176), (__int64)&LockHandle) )
      goto LABEL_9;
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v19 = v23;
  v17 = v4;
  v16 = 2 * v10;
  v18 = v27;
LABEL_9:
  if ( (MiFlags & 0x30) != 0 )
  {
    *(_BYTE *)(v6 + 34) ^= (v4 ^ *(_BYTE *)(v6 + 34)) & 7;
    v22 = *(unsigned __int64 **)(v20 + 8);
    if ( *v22 != v20 )
      __fastfail(3u);
    *(_QWORD *)v6 = v20;
    *(_QWORD *)(v6 + 8) = v22;
    *v22 = v6;
    *(_QWORD *)(v20 + 8) = v6;
  }
  else
  {
    for ( ; v6 < v7; v6 += 48 * v11 )
    {
      v21 = *(unsigned __int64 **)(v20 + 8);
      if ( *v21 != v20 )
        __fastfail(3u);
      *(_QWORD *)(v6 + 8) = v21;
      *(_QWORD *)v6 = v20;
      *v21 = v6;
      *(_QWORD *)(v20 + 8) = v6;
    }
  }
  *(_QWORD *)(v18 + 8 * v19 + 816) += v24;
  *(_QWORD *)(v18 + 8 * (v17 + v16)) += v24;
  if ( (_DWORD)v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 232, a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 224, a2);
  MiIncreaseAvailablePages(v9, a2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (_DWORD)v4 == 1 && !*((_BYTE *)v9 + 5784) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9 + 544, &LockHandle);
    if ( !*((_BYTE *)v9 + 5784) )
    {
      *((_BYTE *)v9 + 5784) = 1;
      KeSetEvent((PRKEVENT)v9 + 240, 0, 0);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( (a4 & 1) == 0
    && (_DWORD)v10
    && ((_DWORD)v10 != 1 || (KeFeatureBits & 0x2000000000LL) != 0)
    && (MiFlags & 0x30) != 0 )
  {
    MiQueueLargeFreeZeroRebuild(v9, a1 & ~(MiLargePageSizes[(unsigned int)(v10 - 1)] - 1));
  }
}
