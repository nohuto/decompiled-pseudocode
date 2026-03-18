/*
 * XREFs of ExProtectPool @ 0x140077FD0
 * Callers:
 *     CmpProtectPool @ 0x14001B388 (CmpProtectPool.c)
 *     HvpProtectBin @ 0x1403D8E10 (HvpProtectBin.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MmDeterminePoolType @ 0x1400794DC (MmDeterminePoolType.c)
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 */

__int64 __fastcall ExProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  unsigned __int64 v7; // rdi
  KIRQL v8; // r12
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // edi

  if ( (unsigned int)MmIsSpecialPoolAddress() )
  {
    if ( a3 != -1 )
      return MiProtectPool(a1, a2, a3);
    return 0LL;
  }
  if ( (a1 & 0xFFF) != 0 || (MmDeterminePoolType(a1) & 0x20) != 0 )
    return 0LL;
  v6 = 0;
  v7 = a2 + a1 - 1;
  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( !PoolBigPageTable )
  {
LABEL_29:
    ExReleaseSpinLockShared(&ExpLargePoolTableLock, v8);
    return 0LL;
  }
  v9 = 24
     * (((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)(a1 >> 12)) ^ ((40543
                                                                                * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32)));
  v10 = PoolBigPageTable + 24 * PoolBigPageTableSize;
  v11 = v9 + PoolBigPageTable;
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    if ( (*(_QWORD *)v11 & 1) == 0 && a1 >= v12 )
    {
      v13 = v12 + *(_QWORD *)(v11 + 16);
      if ( v7 < v13
        && ((*(_DWORD *)(v11 + 16) & 0xFFF) == 0
         || ((v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v13 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
      {
        break;
      }
    }
    v11 += 24LL;
    if ( v11 >= v10 )
    {
      if ( v6 == 1 )
        goto LABEL_29;
      v11 = PoolBigPageTable;
      v6 = 1;
      v10 = v9 + PoolBigPageTable;
    }
  }
  v14 = *(_QWORD *)(v11 + 16);
  v15 = (*(_DWORD *)(v11 + 12) >> 8) & 0xFFF;
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  __writecr8(v8);
  if ( a3 == -1 )
    return v12 == a1 && v14 == a2 && (v14 & 0xFFF) == 0;
  if ( (v14 & 0xFFF) != 0 && ((v15 & 0x40) == 0 || ((unsigned __int16)v14 & 0xFFFu) > 0x10uLL) )
    return 0LL;
  return MiProtectPool(a1, a2, a3);
}
