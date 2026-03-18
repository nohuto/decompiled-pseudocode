/*
 * XREFs of MiAllocatePoolPages @ 0x14009DBEC
 * Callers:
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012AF0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x14009D79C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14022CD84 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 * Callees:
 *     MiFindNonPagedPoolVa @ 0x140017DC0 (MiFindNonPagedPoolVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x14001B400 (MiAssignNonPagedPoolPtes.c)
 *     MiFreeExcessSegments @ 0x1400A3910 (MiFreeExcessSegments.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x1400E0040 (MiFlushTbAsNeeded.c)
 *     MiFindNonPagedPoolPages @ 0x1400E7060 (MiFindNonPagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePoolPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  ULONG_PTR result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  union _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rcx
  unsigned __int64 NonPagedPoolVa; // rdi
  __int64 *NonPagedPoolPages; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  if ( (a1 & 1) != 0 )
    return MiAllocatePagedPoolPages(a1, a2);
  v4 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v5 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  if ( v4 > 3 )
    goto LABEL_11;
  v6 = 26 * v5;
  if ( (v2 & 0x200) != 0 )
    v6 += 3LL;
  v7 = &qword_1403269B0[v4 + v6];
  if ( !LOWORD(v7->Alignment) || (v8 = RtlpInterlockedPopEntrySList(v7)) == 0LL )
  {
LABEL_11:
    if ( v4 < 0x100000000LL )
    {
      NonPagedPoolVa = MiFindNonPagedPoolVa(v2, v4, v5, &v14);
      if ( !NonPagedPoolVa )
      {
        MiFreeExcessSegments(v9);
        NonPagedPoolVa = MiFindNonPagedPoolVa(v2, v4, v5, &v14);
        if ( !NonPagedPoolVa )
        {
          ++dword_140326470;
          ++dword_140326494;
          MiFreeExcessSegments(v13);
          return 0LL;
        }
      }
      if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) < 0 )
        return NonPagedPoolVa;
      if ( v14 == 2 )
        MiFlushTbAsNeeded(((NonPagedPoolVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      NonPagedPoolPages = (__int64 *)MiFindNonPagedPoolPages((unsigned int)v5, v4);
      if ( NonPagedPoolPages )
      {
        MiAssignNonPagedPoolPtes(NonPagedPoolVa, v4, v2, NonPagedPoolPages);
        return NonPagedPoolVa;
      }
      ++dword_140326470;
      MiFreeExcessSegments(v12);
      MiReturnNonPagedPoolVa(NonPagedPoolVa, v4, v2);
    }
    return 0LL;
  }
  result = (ULONG_PTR)&v8[-1];
  if ( *(_QWORD *)result != (result ^ qword_140327780) )
    KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_140327780);
  return result;
}
