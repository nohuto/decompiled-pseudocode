/*
 * XREFs of MiFindLargeNodePage @ 0x1401E314C
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x14001B1C0 (MiSetPfnOwnedAndActive.c)
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiReplenishFromNodeLargePages @ 0x140089BD0 (MiReplenishFromNodeLargePages.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1401FD17C (MiGetLargePageDemoteAsNeeded.c)
 */

unsigned __int64 __fastcall MiFindLargeNodePage(__int64 a1, unsigned int a2, unsigned int *a3, int a4, char a5)
{
  unsigned int v5; // esi
  __int64 v9; // rax
  unsigned __int16 *v10; // r14
  int v11; // ebx
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbp
  int v22; // r14d
  int v23; // r15d
  unsigned __int8 v24; // al
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-30h] BYREF
  int v27; // [rsp+80h] [rbp+18h]

  v5 = a2;
  v9 = MiLargePageSizes[*a3];
  v27 = v9;
  if ( a2 >= (unsigned __int16)KeNumberNodes )
  {
    v5 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 23524);
    v10 = (unsigned __int16 *)((char *)qword_1403269E8 + 2 * v5 * (unsigned __int16)KeNumberNodes);
    v25 = (__int64)&v10[(unsigned __int16)KeNumberNodes];
  }
  else
  {
    v10 = 0LL;
    v25 = 2LL;
  }
  v11 = 0;
  if ( (a4 & 1) == 0 )
    v11 = 2;
  if ( (a4 & 0x8000) != 0 )
    v11 |= 1u;
  v12 = a4 & 0x4000;
  while ( 1 )
  {
    v13 = v12
        ? MiReplenishFromNodeLargePages(a1, *a3, v11, v5, 4u)
        : MiGetLargePageDemoteAsNeeded(a1, v5, v9, v11, (__int64)v26);
    v14 = v13;
    if ( v13 )
      break;
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1u;
      v15 = v12
          ? MiReplenishFromNodeLargePages(a1, *a3, v11, v5, 4u)
          : MiGetLargePageDemoteAsNeeded(a1, v5, v27, v11, (__int64)v26);
      v14 = v15;
      if ( v15 )
        break;
    }
    if ( ++v10 == (unsigned __int16 *)v25 )
      return 0LL;
    v5 = *v10;
    LODWORD(v9) = v27;
  }
  v17 = (unsigned int)MiFreeZeroPageSizeIndex(v14);
  v18 = *(_BYTE *)(v14 + 34);
  v19 = 0LL;
  *a3 = v17;
  v25 = 0LL;
  v20 = MiLargePageSizes[v17];
  if ( (v18 & 7) == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&v25);
    v19 = v25;
  }
  MiUpdateLargePageBitMap(a1, (v14 + 0x58000000000LL) / 48, v20, 1, 1);
  v21 = v20;
  v22 = ((a4 & 0x100000) != 0) + 1;
  v23 = a4 & 0x40000000;
  do
  {
    *(_QWORD *)(v14 + 16) = v19;
    if ( v23 )
    {
      v24 = MiLockPageInline(v14);
      *(_QWORD *)(v14 + 40) &= 0xFFFFFFF000000000uLL;
      *(_BYTE *)(v14 + 34) = *(_BYTE *)(v14 + 34) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v24);
      v19 = v25;
    }
    else
    {
      *(_QWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 40) &= ~0x200000000000000uLL;
      MiSetPfnOwnedAndActive(v14, a5, -8LL, 1u, v22);
      *(_QWORD *)(v14 + 16) = v19;
    }
    v14 += 48LL;
    --v21;
  }
  while ( v21 );
  return v14 - 48 * v20;
}
