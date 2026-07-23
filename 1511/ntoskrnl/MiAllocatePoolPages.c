/*
 * XREFs of MiAllocatePoolPages @ 0x140040F90
 * Callers:
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140104978 (ExpResizeBigPageTable.c)
 *     ExGetBigPoolInfo @ 0x140212B18 (ExGetBigPoolInfo.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     InitializePool @ 0x1407496B4 (InitializePool.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x140015B78 (MiFreeExcessSegments.c)
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 *     MiFlushTbAsNeeded @ 0x140061B60 (MiFlushTbAsNeeded.c)
 *     MiFindNonPagedPoolVa @ 0x1400B34D0 (MiFindNonPagedPoolVa.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400D22E0 (MiAssignNonPagedPoolPtes.c)
 *     MiTrimSegmentCache @ 0x14014231C (MiTrimSegmentCache.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
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
  _QWORD *NonPagedPoolPages; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (a1 & 1) != 0 )
    return MiAllocatePagedPoolPages();
  v3 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 1600) + 146LL);
  if ( v3 <= 3 )
  {
    v5 = 26 * v4;
    if ( (a1 & 0x200) != 0 )
      v5 += 3LL;
    v6 = &qword_1402FE6C0[v3 + v5];
    if ( LOWORD(v6->Alignment) )
    {
      v7 = RtlpInterlockedPopEntrySList(v6);
      if ( v7 )
      {
        result = (ULONG_PTR)&v7[-1];
        ++MiPool;
        if ( *(_QWORD *)result != (result ^ qword_1402FF6C0) )
          KeBugCheckEx(0x1Au, 0x5200uLL, result, *(_QWORD *)result, result ^ qword_1402FF6C0);
        return result;
      }
    }
    ++dword_1402E17A4;
  }
  if ( v3 >= 0x100000000LL )
    return 0LL;
  NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, (unsigned int)v4, &v11);
  if ( NonPagedPoolVa
    || (++dword_1402E17D0,
        MiFreeExcessSegments(),
        (NonPagedPoolVa = MiFindNonPagedPoolVa(a1, v3, (unsigned int)v4, &v11)) != 0) )
  {
    if ( *(char *)(((NonPagedPoolVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >= 0 )
    {
      if ( v11 == 2 )
        MiFlushTbAsNeeded(((NonPagedPoolVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      NonPagedPoolPages = MiFindNonPagedPoolPages(v4, v3);
      if ( !NonPagedPoolPages )
      {
        ++dword_1402E1804;
        ++dword_1402FE1B0;
        MiTrimSegmentCache();
        MiReturnNonPagedPoolVa(NonPagedPoolVa, v3);
        return 0LL;
      }
      ++dword_1402E1808;
      MiAssignNonPagedPoolPtes(NonPagedPoolVa, v3, a1, NonPagedPoolPages);
    }
    else
    {
      ++dword_1402E17FC;
    }
    return NonPagedPoolVa;
  }
  else
  {
    ++dword_1402E1800;
    ++dword_1402FE1B0;
    ++dword_1402FE1D4;
    if ( (MiAllocationDebug & 1) != 0 )
      __debugbreak();
    MiTrimSegmentCache();
    return 0LL;
  }
}
