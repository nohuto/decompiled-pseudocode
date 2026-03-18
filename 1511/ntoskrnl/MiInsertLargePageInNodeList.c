/*
 * XREFs of MiInsertLargePageInNodeList @ 0x1400C02B4
 * Callers:
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 *     MiRebuildLargePage @ 0x1400BE1B0 (MiRebuildLargePage.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x140131E1C (MiZeroLargePages.c)
 *     MiEnableNewPfns @ 0x1401D197C (MiEnableNewPfns.c)
 *     MiFreeLargePageChain @ 0x1401E17A0 (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x1401E1834 (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x140746A50 (MxCreateFreePfns.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiIncreaseAvailablePages @ 0x1400C0448 (MiIncreaseAvailablePages.c)
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 */

volatile signed __int64 *__fastcall MiInsertLargePageInNodeList(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r15
  int *v9; // rsi
  __int64 v10; // r10
  __int64 v11; // rbp
  __int64 v12; // r11
  __int64 v13; // rbx
  int v14; // ecx
  unsigned __int64 *v15; // rax
  unsigned __int64 *v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h]

  v3 = a3;
  v4 = a2 >> 9;
  v5 = 48 * a1 - 0x58000000000LL;
  v7 = v5 + 48 * a2;
  MiPageToNode(a1, 1);
  MiPageToChannel(a1);
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF);
  v11 = *((_QWORD *)v9 + 5) + 1336 * v10;
  v19 = v12 + 4 * (v3 + 2LL * (a1 < 0x100000));
  v13 = v11 + 16 * (v19 + 1);
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
  *(_QWORD *)(v11 + 8 * v19 + 272) += v4;
  *(_QWORD *)(v11 + 8 * v3) += v4;
  if ( v14 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 216, a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 208, a2);
  MiIncreaseAvailablePages(v9, a2);
  return KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
}
