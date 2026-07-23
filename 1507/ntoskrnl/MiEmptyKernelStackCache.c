/*
 * XREFs of MiEmptyKernelStackCache @ 0x14012FF64
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x140232B18 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406A8654 (MmRelocatePfnList.c)
 * Callees:
 *     MiDeleteNoBlockStacks @ 0x140012424 (MiDeleteNoBlockStacks.c)
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
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
        v3 = &qword_14034EB70[26 * i + 2 * j];
        while ( 1 )
        {
          v5 = RtlpInterlockedPopEntrySList(v3 + 7);
          if ( !v5 )
            break;
          v4 = (ULONG_PTR)&v5[-255];
          if ( v5[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v5[-255] ^ qword_14034FB80) )
            KeBugCheckEx(0x1Au, 0x3472uLL, v4, *(_QWORD *)(v4 + 4064), v4 ^ qword_14034FB80);
          MiDeleteKernelStack(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
        }
      }
    }
    return MiDeleteNoBlockStacks(1LL);
  }
  return result;
}
