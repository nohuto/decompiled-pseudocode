/*
 * XREFs of MiEmptyKernelStackCache @ 0x1400C1C3C
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x14062AA8C (MmRelocatePfnList.c)
 * Callees:
 *     MiDeleteNoBlockStacks @ 0x140014528 (MiDeleteNoBlockStacks.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiEmptyKernelStackCache()
{
  PSLIST_ENTRY result; // rax
  unsigned int i; // ebx
  int j; // edi
  _SLIST_HEADER *v3; // rsi
  ULONG_PTR v4; // r8
  PSLIST_ENTRY v5; // rax
  _UNKNOWN *retaddr; // [rsp+90h] [rbp+88h] BYREF

  result = (PSLIST_ENTRY)&retaddr;
  if ( (MiFlags & 0x800) != 0 )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      for ( j = 0; j < 2; ++j )
      {
        v3 = &qword_1402FE6C0[26 * i + 2 * j];
        while ( 1 )
        {
          v5 = RtlpInterlockedPopEntrySList(v3 + 7);
          if ( !v5 )
            break;
          v4 = (ULONG_PTR)&v5[-255];
          if ( v5[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v5[-255] ^ qword_1402FF6C0) )
            KeBugCheckEx(0x1Au, 0x3472uLL, v4, *(_QWORD *)(v4 + 4064), v4 ^ qword_1402FF6C0);
          MiDeleteKernelStack(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
        }
      }
    }
    return MiDeleteNoBlockStacks(1LL);
  }
  return result;
}
