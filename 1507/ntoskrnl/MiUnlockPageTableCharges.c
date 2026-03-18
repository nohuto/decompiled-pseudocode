/*
 * XREFs of MiUnlockPageTableCharges @ 0x14007CC10
 * Callers:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiUnlockPageTableRange @ 0x14014BA28 (MiUnlockPageTableRange.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiIsLowestPageTablePage @ 0x14007CE24 (MiIsLowestPageTablePage.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockPageTableCharges(ULONG_PTR BugCheckParameter2, unsigned __int8 CurrentIrql, int a3)
{
  __int16 *v3; // rsi
  int IsLowestPageTablePage; // eax
  int v7; // r13d
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  int IsZero; // eax
  __int64 v15; // [rsp+78h] [rbp+20h]

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
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    v11 = 0;
    v15 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = *(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2 + 24) ^ (*(_QWORD *)(BugCheckParameter2 + 24)
                                                                                        - 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(BugCheckParameter2 + 24) = v12;
    v13 = v12 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v13 >= 0x10000 )
      break;
    if ( !v3 )
      v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF);
    ++v8;
    if ( !v13 )
    {
      IsZero = MiPfnShareCountIsZero(BugCheckParameter2, 0LL);
      v10 = 0x7FFFFFFFFFFFFFFFLL;
      if ( IsZero != 3 )
        ++v9;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), v10);
    if ( !--v7 )
      goto LABEL_11;
    BugCheckParameter2 = 48 * v15 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), v10);
LABEL_11:
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  if ( v8 )
  {
    if ( v3 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v8);
      _InterlockedExchangeAdd64(&qword_14034F8B8, v8);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 696, v8);
    }
  }
  if ( v9 )
    MiReturnCommit(v3, v9);
}
