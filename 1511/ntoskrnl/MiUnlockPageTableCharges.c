/*
 * XREFs of MiUnlockPageTableCharges @ 0x140021978
 * Callers:
 *     MiRemoveLockedPageFromWorkingSet @ 0x140021840 (MiRemoveLockedPageFromWorkingSet.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiUnlockPageTableRange @ 0x14011573C (MiUnlockPageTableRange.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 * Callees:
 *     MiIsLowestPageTablePage @ 0x140021B10 (MiIsLowestPageTablePage.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, unsigned __int8 CurrentIrql, int a3)
{
  __int64 v3; // rsi
  int IsLowestPageTablePage; // eax
  int v7; // r15d
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 result; // rax

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
  while ( 1 )
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
    MiLockPageAtDpcInline(BugCheckParameter2);
    v11 = *(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                        - 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v11;
    v12 = v11 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v12 >= 0x10000 )
      break;
    if ( !v3 )
      v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF);
    ++v8;
    if ( !v12 && (unsigned int)MiPfnShareCountIsZero(BugCheckParameter2) != 3 )
      ++v9;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v7 )
      goto LABEL_9;
    BugCheckParameter2 = 48 * v10 - 0x58000000000LL;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_9:
  if ( CurrentIrql != 17 )
  {
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v8 )
  {
    result = (__int64)&MiSystemPartition;
    if ( (int *)v3 == &MiSystemPartition )
    {
      result = MiReturnResidentAvailable(v8);
      _InterlockedExchangeAdd64(&qword_1402FF438, v8);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 5952), v8);
    }
  }
  if ( v9 )
    return MiReturnCommit(v3, v9);
  return result;
}
