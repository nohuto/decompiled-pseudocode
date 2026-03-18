/*
 * XREFs of MiEmptyKernelStackCache @ 0x14000196C
 * Callers:
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x1401FE660 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406646F8 (MmRelocatePfnList.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x1400A1598 (MiDeleteKernelStack.c)
 *     MiDeleteNoBlockStacks @ 0x1400BE128 (MiDeleteNoBlockStacks.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 */

_UNKNOWN **MiEmptyKernelStackCache()
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  int j; // edi
  union _SLIST_HEADER *v3; // rsi
  ULONG_PTR v4; // r8
  PSLIST_ENTRY v5; // rax
  _UNKNOWN *retaddr; // [rsp+90h] [rbp+88h] BYREF

  result = &retaddr;
  if ( (MiFlags & 0x800) != 0 )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      for ( j = 0; j < 2; ++j )
      {
        v3 = &qword_1403269B0[26 * i + 2 * j];
        while ( 1 )
        {
          v5 = RtlpInterlockedPopEntrySList(v3 + 7);
          if ( !v5 )
            break;
          v4 = (ULONG_PTR)&v5[-255];
          if ( v5[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v5[-255] ^ qword_140327780) )
            KeBugCheckEx(0x1Au, 0x3472uLL, v4, *(_QWORD *)(v4 + 4064), v4 ^ qword_140327780);
          MiDeleteKernelStack(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
        }
      }
    }
    return (_UNKNOWN **)MiDeleteNoBlockStacks(1LL);
  }
  return result;
}
