/*
 * XREFs of MiAllocatePoolPages @ 0x14009D3EC
 * Callers:
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x14009CF9C (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x14022CBB0 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 * Callees:
 *     MiFindNonPagedPoolVa @ 0x140017940 (MiFindNonPagedPoolVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x14001AF80 (MiAssignNonPagedPoolPtes.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x1400DDEE0 (MiFlushTbAsNeeded.c)
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePoolPages(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  ULONG_PTR result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  _SLIST_HEADER *v7; // rcx
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
  v7 = &qword_1403269F0[v4 + v6];
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
          ++dword_1403264B0;
          ++dword_1403264D4;
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
      ++dword_1403264B0;
      MiFreeExcessSegments(v12);
      MiReturnNonPagedPoolVa(NonPagedPoolVa, v4, v2);
    }
    return 0LL;
  }
  result = (ULONG_PTR)&v8[-1];
  if ( *(_QWORD *)result != (result ^ qword_1403277C0) )
    KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_1403277C0);
  return result;
}
