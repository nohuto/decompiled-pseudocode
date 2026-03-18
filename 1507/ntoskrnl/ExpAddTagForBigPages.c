/*
 * XREFs of ExpAddTagForBigPages @ 0x140046960
 * Callers:
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpResizeBigPageTable @ 0x140118C5C (ExpResizeBigPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rbp
  int v8; // edi
  unsigned __int64 v12; // r8
  unsigned __int8 CurrentIrql; // r14
  int v14; // ett
  __int64 v15; // rdx
  volatile signed __int32 *v16; // r9
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  volatile signed __int64 v19; // rtt
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v24; // ebx
  int v25; // ebx
  _QWORD *v26; // rbx
  unsigned int v27; // ebx
  _QWORD *v28; // rbx
  void *v29; // rcx
  void *v30; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+10h]

  v33 = a2;
  v6 = 0;
  v7 = a1 >> 12;
  v8 = a4 & 0x20;
LABEL_2:
  v12 = 0xFFFFF90000001E80uLL;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock);
    }
    else
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v14 = ExpLargePoolTableLock & 0x7FFFFFFF;
      if ( v14 == _InterlockedCompareExchange(
                    &ExpLargePoolTableLock,
                    (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                    ExpLargePoolTableLock & 0x7FFFFFFF) )
        goto LABEL_5;
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock);
    }
    v12 = 0xFFFFF90000001E80uLL;
LABEL_5:
    if ( v8 )
    {
      v15 = MEMORY[0xFFFFF90000001F00];
      v16 = (volatile signed __int32 *)0xFFFFF90000001E80LL;
      v17 = MEMORY[0xFFFFF90000001F08];
    }
    else
    {
      v15 = PoolBigPageTable;
      v16 = &ExpPoolBigEntriesInUse;
      v17 = PoolBigPageTableSize;
    }
    if ( v15 && *v16 != v17 )
    {
      v18 = v15
          + 24 * (((40543 * (int)v7) ^ ((40543 * (unsigned __int64)(unsigned int)v7) >> 32)) & (unsigned int)(v17 - 1));
      v12 = v18;
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
        if ( v18 == v12 )
          goto LABEL_20;
      }
      v20 = a5;
      *(_DWORD *)(v18 + 8) = v33;
      *(_BYTE *)(v18 + 12) = a6;
      *(_QWORD *)(v18 + 16) = a3;
      v21 = (unsigned __int8)*(_DWORD *)(v18 + 12);
      v22 = (unsigned int)v21 | ((a4 & 0xFFF | (v20 << 12)) << 8);
      *(_DWORD *)(v18 + 12) = v22;
      _InterlockedIncrement(v16);
      if ( v6 >= 0x10 && *v16 > (unsigned int)(v17 >> 2) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(&ExpLargePoolTableLock, retaddr, v22, v16) == 1 )
            goto LABEL_37;
        }
        else if ( !_interlockedbittestandset(&ExpLargePoolTableLock, 0x1Fu) )
        {
          v27 = 0;
          while ( (ExpLargePoolTableLock & 0xBFFFFFFF) != 0x80000001 )
          {
            if ( (ExpLargePoolTableLock & 0x40000000) == 0 )
              _InterlockedCompareExchange(
                &ExpLargePoolTableLock,
                ExpLargePoolTableLock | 0x40000000,
                ExpLargePoolTableLock);
            if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v27);
          }
LABEL_37:
          ExpResizeBigPageTable(a4, v21, &P, v16);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
          else
            ExpLargePoolTableLock = 0;
          __writecr8(CurrentIrql);
          v28 = P;
          if ( P )
          {
            do
            {
              v29 = v28;
              v28 = (_QWORD *)*v28;
              ExFreePoolWithTag(v29, 0);
            }
            while ( v28 );
          }
          return 1LL;
        }
      }
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
      return 1LL;
    }
LABEL_20:
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( !(unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(&ExpLargePoolTableLock, retaddr, v12, v16) )
      {
LABEL_44:
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
        goto LABEL_2;
      }
    }
    else
    {
      if ( _interlockedbittestandset(&ExpLargePoolTableLock, 0x1Fu) )
        goto LABEL_44;
      v24 = 0;
      while ( (ExpLargePoolTableLock & 0xBFFFFFFF) != 0x80000001 )
      {
        if ( (ExpLargePoolTableLock & 0x40000000) == 0 )
          _InterlockedCompareExchange(&ExpLargePoolTableLock, ExpLargePoolTableLock | 0x40000000, ExpLargePoolTableLock);
        if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v24);
      }
    }
    v25 = ExpResizeBigPageTable(a4, v15, &P, v16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    else
      ExpLargePoolTableLock = 0;
    __writecr8(CurrentIrql);
    if ( !v25 )
      break;
    v26 = P;
    v12 = 0xFFFFF90000001E80uLL;
    if ( P )
    {
      do
      {
        v30 = v26;
        v26 = (_QWORD *)*v26;
        ExFreePoolWithTag(v30, 0);
      }
      while ( v26 );
      P = 0LL;
      goto LABEL_2;
    }
  }
  ++ExpBigTableExpansionFailed;
  return 0LL;
}
