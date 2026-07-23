/*
 * XREFs of MiUnlockPageTableCharges @ 0x1400B8AD8
 * Callers:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400B899C (MiRemoveLockedPageFromWorkingSet.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiUnlockPageTableRange @ 0x140125320 (MiUnlockPageTableRange.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiIsLowestPageTablePage @ 0x1400B8CDC (MiIsLowestPageTablePage.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(__int64 BugCheckParameter2, unsigned __int8 CurrentIrql, int a3)
{
  int *v3; // rsi
  int IsLowestPageTablePage; // eax
  int v7; // r15d
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rcx

  v3 = 0LL;
  if ( a3 == 1 )
  {
    IsLowestPageTablePage = MiIsLowestPageTablePage();
    v7 = 3;
  }
  else
  {
    IsLowestPageTablePage = 1;
    v7 = 1;
  }
  if ( !IsLowestPageTablePage || (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v8 = 0LL;
  v9 = 0LL;
  if ( CurrentIrql != 17 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  v10 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  MiLockPageAtDpcInline(BugCheckParameter2);
  v11 = *(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2
                                                                                                  + 24)
                                                                                      - 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(BugCheckParameter2 + 24) = v11;
  if ( (v11 & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
  {
LABEL_16:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    while ( 1 )
    {
      if ( !v3 )
        v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF);
      ++v8;
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        && (unsigned int)MiPfnShareCountIsZero(BugCheckParameter2, 0LL) != 3 )
      {
        ++v9;
      }
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v7 )
        break;
      BugCheckParameter2 = 48 * v10 - 0x58000000000LL;
      v10 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
      MiLockPageAtDpcInline(BugCheckParameter2);
      *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2
                                                                                                 + 24)
                                                                                     - 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
        goto LABEL_16;
    }
  }
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  if ( v8 )
  {
    if ( v3 == MiSystemPartition )
      MiReturnResidentAvailable(v8);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 816, v8);
  }
  if ( v9 )
    MiReturnCommit((__int64)v3, v9);
}
