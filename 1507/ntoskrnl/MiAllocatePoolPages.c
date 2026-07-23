/*
 * XREFs of MiAllocatePoolPages @ 0x140046C90
 * Callers:
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140118C5C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x1402621DC (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x1407C9DC4 (InitializePool.c)
 * Callees:
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiFindNonPagedPoolVa @ 0x140063964 (MiFindNonPagedPoolVa.c)
 *     MiReturnNonPagedPoolVa @ 0x1400645C0 (MiReturnNonPagedPoolVa.c)
 *     MiFlushTbAsNeeded @ 0x1400ADC10 (MiFlushTbAsNeeded.c)
 *     MiAssignNonPagedPoolPtes @ 0x14010B830 (MiAssignNonPagedPoolPtes.c)
 *     MiFreeExcessSegments @ 0x140129184 (MiFreeExcessSegments.c)
 *     MiTrimSegmentCache @ 0x1401701C0 (MiTrimSegmentCache.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePoolPages(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _SLIST_HEADER *v6; // rcx
  PSLIST_ENTRY v7; // rax
  ULONG_PTR result; // rax
  unsigned __int64 NonPagedPoolVa; // rbp
  __int64 NonPagedPoolPages; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1 & 1) != 0 )
    return MiAllocatePagedPoolPages();
  v3 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  if ( v3 > 3 )
    goto LABEL_10;
  v5 = 26 * v4;
  if ( (a1 & 0x200) != 0 )
    v5 += 3LL;
  v6 = &qword_14034EB70[v3 + v5];
  if ( LOWORD(v6->Alignment) && (v7 = RtlpInterlockedPopEntrySList(v6)) != 0LL )
  {
    result = (ULONG_PTR)&v7[-1];
    if ( *(_QWORD *)result != (result ^ qword_14034FB80) )
      KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_14034FB80);
  }
  else
  {
LABEL_10:
    if ( v3 >= 0x100000000LL )
      return 0LL;
    NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, (unsigned int)v4, &v11);
    if ( !NonPagedPoolVa )
    {
      MiFreeExcessSegments(1LL);
      NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, (unsigned int)v4, &v11);
      if ( !NonPagedPoolVa )
      {
        ++dword_14034E668;
        ++dword_14034E68C;
        MiTrimSegmentCache();
        return 0LL;
      }
    }
    if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >= 0 )
    {
      if ( v11 == 2 )
        MiFlushTbAsNeeded(((NonPagedPoolVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      NonPagedPoolPages = MiFindNonPagedPoolPages((unsigned int)v4, v3);
      if ( !NonPagedPoolPages )
      {
        ++dword_14034E668;
        MiTrimSegmentCache();
        MiReturnNonPagedPoolVa(NonPagedPoolVa, v3, a1);
        return 0LL;
      }
      MiAssignNonPagedPoolPtes(NonPagedPoolVa, v3, a1, NonPagedPoolPages);
    }
    return NonPagedPoolVa;
  }
  return result;
}
