/*
 * XREFs of MiEmptyKernelStackCache @ 0x14000196C
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406647DC (MmRelocatePfnList.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     MiDeleteNoBlockStacks @ 0x1400BBFB8 (MiDeleteNoBlockStacks.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 */

_UNKNOWN **MiEmptyKernelStackCache()
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  int j; // edi
  _SLIST_HEADER *v3; // rsi
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
        v3 = &qword_1403269F0[26 * i + 2 * j];
        while ( 1 )
        {
          v5 = RtlpInterlockedPopEntrySList(v3 + 7);
          if ( !v5 )
            break;
          v4 = (ULONG_PTR)&v5[-255];
          if ( v5[-1].Next != (_SLIST_ENTRY *)((unsigned __int64)&v5[-255] ^ qword_1403277C0) )
            KeBugCheckEx(0x1Au, 0x3472uLL, v4, *(_QWORD *)(v4 + 4064), v4 ^ qword_1403277C0);
          MiDeleteKernelStack(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
        }
      }
    }
    return (_UNKNOWN **)MiDeleteNoBlockStacks(1LL);
  }
  return result;
}
