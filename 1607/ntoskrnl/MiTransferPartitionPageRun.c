/*
 * XREFs of MiTransferPartitionPageRun @ 0x1401F1E84
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     MiUnlinkPageFromBadList @ 0x1401F2E80 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x1401FB980 (MiMoveLargeFreePage.c)
 */

__int64 __fastcall MiTransferPartitionPageRun(
        volatile LONG *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        KIRQL OldIrql)
{
  __int16 v5; // bp
  unsigned __int16 v7; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  int i; // eax
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  unsigned __int8 v15; // r15
  char v16; // cl
  int v17; // ebp
  unsigned int v18; // eax
  __int64 v19; // rbp
  unsigned int v20; // edx
  __int16 v22; // [rsp+60h] [rbp+8h]
  int v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]

  v5 = *(_WORD *)a1;
  v7 = *(_WORD *)a2;
  v22 = *(_WORD *)a1;
  v9 = a3;
  v24 = a3 + a4;
  v10 = 0LL;
  for ( i = 0; v9 != v24; ++v9 )
  {
    v23 = i + 1;
    if ( (((_BYTE)i + 1) & 0xF) == 0 && (a1[58] & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusive(a1 + 58, OldIrql);
      --v9;
      OldIrql = ExAcquireSpinLockExclusive(a1 + 58);
    }
    else
    {
      v12 = 48 * v9 - 0x58000000000LL;
      v13 = MiLockPageInline(v12);
      v14 = *(_QWORD *)(v12 + 40);
      v15 = v13;
      if ( ((HIDWORD(v14) >> 8) & 0x3FF) == v5 )
      {
        v16 = *(_BYTE *)(v12 + 34);
        v17 = v16 & 7;
        if ( v17 == 5 )
        {
          if ( (*(_BYTE *)(v12 + 35) & 0x40) != 0
            && (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
          {
            MiUnlinkPageFromBadList(48 * v9 - 0x58000000000LL, v14);
            *(_QWORD *)(v12 + 40) ^= (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v7 << 40)) & 0x3FF0000000000LL;
            if ( (int *)a2 != MiSystemPartition )
              ++*(_QWORD *)(a2 + 6288);
            --*((_QWORD *)a1 + 786);
            MiInsertPageInList(48 * v9 - 0x58000000000LL, 0x20u);
            ++v10;
          }
LABEL_14:
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
LABEL_50:
          v5 = v22;
          goto LABEL_51;
        }
        if ( (*(_BYTE *)(v12 + 34) & 7u) <= 1 )
        {
          v18 = MiFreeZeroPageSizeIndex(48 * v9 - 0x58000000000LL);
          if ( v18 != -1 )
          {
            v19 = MiLargePageSizes[v18];
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v15);
            if ( (int *)a2 != MiSystemPartition )
              *(_QWORD *)(a2 + 6288) += v19;
            if ( (unsigned int)MiMoveLargeFreePage(v9, v18, a1, a2) == 1 )
            {
              v9 += v19;
              v10 += v19;
              *((_QWORD *)a1 + 786) -= v19;
            }
            else if ( (int *)a2 != MiSystemPartition )
            {
              *(_QWORD *)(a2 + 6288) -= v19;
            }
LABEL_23:
            --v9;
            goto LABEL_50;
          }
          MiUnlinkFreeOrZeroedPage(v9, 0LL, 0);
          if ( (int *)a2 != MiSystemPartition )
            ++*(_QWORD *)(a2 + 6288);
          --*((_QWORD *)a1 + 786);
          *(_QWORD *)(v12 + 40) ^= (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v7 << 40)) & 0x3FF0000000000LL;
          MiInsertPageInFreeOrZeroedList(v9, (*(_QWORD *)(v12 + 16) != 0LL) + 1);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
LABEL_49:
          ++v10;
          goto LABEL_50;
        }
        if ( v17 == 7 )
          goto LABEL_14;
        if ( v17 == 2 )
        {
          if ( *(_WORD *)(v12 + 32) )
            goto LABEL_14;
          if ( (int *)a2 != MiSystemPartition )
            ++*(_QWORD *)(a2 + 6288);
          if ( !(unsigned int)MiRelinkStandbyPage(48 * v9 - 0x58000000000LL, 0xFFFFFF, v7) )
          {
            if ( (int *)a2 != MiSystemPartition )
              --*(_QWORD *)(a2 + 6288);
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v15);
            goto LABEL_23;
          }
LABEL_47:
          --*((_QWORD *)a1 + 786);
        }
        else
        {
          if ( (*(_BYTE *)(v12 + 34) & 7u) > 4 )
          {
            *(_QWORD *)(v12 + 40) = v14 ^ (v14 ^ ((unsigned __int64)v7 << 40)) & 0x3FF0000000000LL;
            if ( (int *)a2 != MiSystemPartition )
              ++*(_QWORD *)(a2 + 6288);
            goto LABEL_47;
          }
          if ( *(_WORD *)(v12 + 32) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v13);
            if ( (v16 & 8) != 0 )
            {
              ExReleaseSpinLockExclusive(a1 + 58, OldIrql);
              --v9;
              OldIrql = ExAcquireSpinLockExclusive(a1 + 58);
            }
            goto LABEL_50;
          }
          MiUnlinkPageFromList(48 * v9 - 0x58000000000LL, 0);
          v20 = 16;
          *(_QWORD *)(v12 + 40) ^= (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v7 << 40)) & 0x3FF0000000000LL;
          if ( v17 == 3 )
            v20 = 8;
          if ( (int *)a2 != MiSystemPartition )
            ++*(_QWORD *)(a2 + 6288);
          --*((_QWORD *)a1 + 786);
          MiInsertPageInList(48 * v9 - 0x58000000000LL, v20);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
        goto LABEL_49;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
LABEL_51:
    i = v23;
  }
  return v10;
}
