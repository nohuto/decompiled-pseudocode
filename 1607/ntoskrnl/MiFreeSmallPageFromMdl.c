/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x140022670
 * Callers:
 *     MiFreeMdlPageRun @ 0x1400225B4 (MiFreeMdlPageRun.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // rbx
  unsigned __int8 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf

  v4 = 1LL;
  v5 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v6 = MiLockPageInline(v5);
  v10 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF, v7, v8, v9);
  MiUpdateLargePageBitMap(v10, BugCheckParameter2, 1, 0, 0);
  if ( a2 < 0 )
    *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  v11 = *(_WORD *)(v5 + 32) == 2;
  *(_WORD *)(v5 + 32) -= 2;
  if ( v11 )
  {
    if ( (a2 & 1) != 0 )
      *(_BYTE *)(v5 + 34) &= ~0x10u;
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
  }
  else
  {
    *(_BYTE *)(v5 + 34) |= 7u;
    v4 = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  return v4;
}
