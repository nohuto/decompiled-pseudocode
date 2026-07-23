/*
 * XREFs of MiFreeLargePageMemory @ 0x1400900D0
 * Callers:
 *     MiFreeMdlPageRun @ 0x1400225B4 (MiFreeMdlPageRun.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     MiFreeContiguousPages @ 0x140111E80 (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x1401F535C (MiFreeLargePages.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertLargePageInNodeList @ 0x1401FB978 (MiInsertLargePageInNodeList.c)
 */

unsigned __int64 __fastcall MiFreeLargePageMemory(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  BOOL v6; // r12d
  __int64 v7; // r13
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  int *v11; // rax
  int v12; // r9d
  unsigned __int64 v13; // rcx
  char v14; // cl
  char v15; // al
  __int64 v16; // rax
  __int64 v18; // [rsp+80h] [rbp+8h]
  BOOL v19; // [rsp+88h] [rbp+10h]
  int v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 CurrentIrql; // [rsp+98h] [rbp+20h]

  v4 = 0LL;
  v5 = MiLargePageSizes[a2];
  v6 = a3 != 1;
  v7 = MiLargePageContainingFrames[a2];
  v8 = v5 + a1 - 1;
  v19 = v6;
  v9 = 0LL;
  v18 = v7;
  v10 = 48 * v8 - 0x58000000000LL;
  v11 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF);
  MiUpdateLargePageBitMap((__int64)v11, a1, v5, v12, v12);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  do
  {
    v20 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v20);
        while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
      v6 = v19;
    }
    *(_QWORD *)(v10 + 40) &= ~0x200000000000000uLL;
    v13 = *(_QWORD *)(v10 + 40);
    if ( (*(_BYTE *)(v10 + 34) & 7) == 5 )
      ++*(_WORD *)(v10 + 32);
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 )
      *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
    if ( ((v13 >> 54) & 7) == 3 )
      MiClearPfnImageVerified(v10, 0xCu);
    MiSetOriginalPtePfnFromFreeList(v10 + 16);
    if ( *(_WORD *)(v10 + 32) != 2
      || (v14 = *(_BYTE *)(v10 + 34), (v14 & 0xC0) != 0x40)
      || (v15 = *(_BYTE *)(v10 + 35), (v15 & 0x40) != 0) )
    {
      if ( !v9 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v9 = v10;
        v8 = v5 + a1 - 1;
        v10 = 48 * v8 - 0x58000000000LL;
        if ( v10 > v9 )
        {
          v4 += (v10 - v9 - 1) / 0x30 + 1;
          do
          {
            MiLockPageAtDpcInline(v10);
            *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v8, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            --v8;
            v10 -= 48LL;
          }
          while ( v10 > v9 );
          v6 = v19;
          v7 = v18;
        }
        MiLockPageAtDpcInline(v10);
      }
LABEL_26:
      *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v10 + 32) -= 2;
      *(_QWORD *)(v10 + 40) &= 0xFFFFFFF000000000uLL;
      if ( *(_WORD *)(v10 + 32) )
      {
        *(_BYTE *)(v10 + 34) |= 7u;
      }
      else
      {
        MiPfnReferenceCountIsZero(v10, v8);
        ++v4;
      }
      goto LABEL_29;
    }
    if ( v9 )
      goto LABEL_26;
    *(_BYTE *)(v10 + 35) = v15 & 0xF8;
    *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v10 + 32) = 0;
    *(_BYTE *)(v10 + 34) = v14 & 0xEF;
    if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 1 )
      *(_QWORD *)(v10 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v16 = v7 ^ *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 40) ^= v16 & 0xFFFFFFFFFLL;
    *(_BYTE *)(v10 + 34) ^= (v6 ^ *(_BYTE *)(v10 + 34)) & 7;
    *(_QWORD *)(v10 + 24) &= ~0x4000000000000000uLL;
    if ( v8 == a1 )
    {
      MiInsertLargePageInNodeList(v8, v5, v6);
      v4 = v5;
    }
LABEL_29:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 -= 48LL;
    --v8;
  }
  while ( v8 >= a1 );
  __writecr8((unsigned __int8)CurrentIrql);
  return v4;
}
