/*
 * XREFs of ExProtectPool @ 0x14005EE00
 * Callers:
 *     CmpProtectPool @ 0x1400628E0 (CmpProtectPool.c)
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     HvpProtectBin @ 0x1404A01C4 (HvpProtectBin.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmDeterminePoolType @ 0x1400619A0 (MmDeterminePoolType.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall ExProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // r12
  int v9; // ett
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // edi
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)MmIsSpecialPoolAddress(a1) )
  {
    if ( a3 != -1 )
      return MiProtectPool(a1, a2, a3);
    return 0LL;
  }
  if ( (a1 & 0xFFF) != 0 || (MmDeterminePoolType(a1) & 0x20) != 0 )
    return 0LL;
  v6 = 0;
  v7 = a2 + a1 - 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock);
  }
  else
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v9 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v9 != _InterlockedCompareExchange(
                 &ExpLargePoolTableLock,
                 (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                 ExpLargePoolTableLock & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock);
  }
  v10 = ((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)(a1 >> 12)) ^ ((40543
                                                                                * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32));
  if ( PoolBigPageTable )
  {
    v11 = 24 * v10;
    v12 = 24 * v10 + PoolBigPageTable;
    v13 = PoolBigPageTable + 24 * PoolBigPageTableSize;
    while ( 1 )
    {
      v14 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 1) == 0 && a1 >= v14 )
      {
        v15 = v14 + *(_QWORD *)(v12 + 16);
        if ( v7 < v15
          && ((*(_DWORD *)(v12 + 16) & 0xFFF) == 0
           || ((v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v15 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
        {
          break;
        }
      }
      v12 += 24LL;
      if ( v12 >= v13 )
      {
        if ( v6 == 1 )
          goto LABEL_35;
        v12 = PoolBigPageTable;
        v6 = 1;
        v13 = v11 + PoolBigPageTable;
      }
    }
    v16 = *(_QWORD *)(v12 + 16);
    v17 = (*(_DWORD *)(v12 + 12) >> 8) & 0xFFF;
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
    if ( a3 == -1 )
    {
      if ( v14 == a1 && v16 == a2 && (v16 & 0xFFF) == 0 )
        return 1LL;
    }
    else if ( (v16 & 0xFFF) == 0 || (v17 & 0x40) != 0 && ((unsigned __int16)v16 & 0xFFFu) <= 0x10uLL )
    {
      return MiProtectPool(a1, a2, a3);
    }
  }
  else
  {
LABEL_35:
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
  return 0LL;
}
