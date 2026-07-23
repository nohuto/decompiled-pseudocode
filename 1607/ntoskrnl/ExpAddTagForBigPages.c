/*
 * XREFs of ExpAddTagForBigPages @ 0x140012050
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140099D60 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpResizeBigPageTable @ 0x14009CF9C (ExpResizeBigPageTable.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v12; // ebx
  KIRQL CurrentIrql; // r14
  int v14; // ett
  __int64 v15; // rdx
  int *v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  volatile signed __int64 v19; // rtt
  int v20; // r8d
  __int64 v22; // rdx
  int v23; // ebx
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  void *v27; // rcx
  void *v28; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+68h] [rbp+10h]

  v31 = a2;
  v6 = 0;
  v7 = a1 >> 12;
  v8 = a4 & 0x20;
  while ( 1 )
  {
    v12 = (40543 * v7) ^ ((40543 * (unsigned __int64)(unsigned int)v7) >> 32);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
    }
    else
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v14 = ExpLargePoolTableLock & 0x7FFFFFFF;
      if ( v14 != _InterlockedCompareExchange(
                    &ExpLargePoolTableLock,
                    (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                    ExpLargePoolTableLock & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
    }
    if ( v8 )
    {
      v15 = *(_QWORD *)(qword_140326958 + 8072);
      v16 = (int *)(qword_140326958 + 7936);
      v17 = *(_QWORD *)(qword_140326958 + 8080);
    }
    else
    {
      v15 = PoolBigPageTable;
      v16 = &ExpPoolBigEntriesInUse;
      v17 = PoolBigPageTableSize;
    }
    if ( v15 && *v16 != v17 )
      break;
LABEL_20:
    if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) )
    {
      v23 = ExpResizeBigPageTable(a4, v22, &P);
      ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, CurrentIrql);
      if ( !v23 )
      {
        ++ExpBigTableExpansionFailed;
        return 0LL;
      }
      v24 = P;
      if ( P )
      {
        do
        {
          v28 = v24;
          v24 = (_QWORD *)*v24;
          ExFreePoolWithTag(v28, 0);
        }
        while ( v24 );
        P = 0LL;
      }
    }
    else
    {
      ExReleaseSpinLockShared(&ExpLargePoolTableLock, CurrentIrql);
    }
  }
  v18 = v15 + 24LL * (v12 & (unsigned int)(v17 - 1));
  while ( 1 )
  {
    if ( (*(_QWORD *)v18 & 1) != 0 )
    {
      v19 = *(_QWORD *)v18;
      if ( v19 == _InterlockedCompareExchange64((volatile signed __int64 *)v18, a1, *(_QWORD *)v18) )
        break;
    }
    ++v6;
    v18 += 24LL;
    if ( v18 >= v15 + 24 * v17 )
      v18 = v15;
    if ( v18 == v15 + 24LL * (v12 & (unsigned int)(v17 - 1)) )
      goto LABEL_20;
  }
  v20 = a5;
  *(_DWORD *)(v18 + 8) = v31;
  *(_BYTE *)(v18 + 12) = a6;
  *(_QWORD *)(v18 + 16) = a3;
  *(_DWORD *)(v18 + 12) = (unsigned __int8)*(_DWORD *)(v18 + 12) | ((a4 & 0xFFF | (v20 << 12)) << 8);
  _InterlockedIncrement(v16);
  if ( v6 < 0x10 || *v16 <= (unsigned int)(v17 >> 2) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    }
    else
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    __writecr8(CurrentIrql);
  }
  else if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
  {
    ExpResizeBigPageTable(a4, v25, &P);
    ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, CurrentIrql);
    v26 = P;
    if ( P )
    {
      do
      {
        v27 = v26;
        v26 = (_QWORD *)*v26;
        ExFreePoolWithTag(v27, 0);
      }
      while ( v26 );
    }
  }
  else
  {
    ExReleaseSpinLockShared(&ExpLargePoolTableLock, CurrentIrql);
  }
  return 1LL;
}
