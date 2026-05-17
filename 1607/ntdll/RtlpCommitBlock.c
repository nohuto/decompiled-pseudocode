/*
 * XREFs of RtlpCommitBlock @ 0x180028B34
 * Callers:
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B4AC (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BF00 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C470 (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceHeap @ 0x180090B44 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800EBC50 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180028DA8 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F9310 (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(__int64 a1, __int64 a2)
{
  int HeapProtection; // eax
  int v5; // esi
  char *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  char *v10; // [rsp+68h] [rbp+38h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v10, &v9);
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  v5 = ZwAllocateVirtualMemory(-1LL, &v10, 0LL, &v9, 4096, HeapProtection);
  if ( v5 >= 0 )
  {
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(a1, v10, v9, 8LL);
    --*(_DWORD *)(a1 + 628);
    *(_QWORD *)(a1 + 632) -= v9;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapExtendEvent(a1, (_DWORD)v10, v9, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE0380]);
    if ( MEMORY[0x7FFE038A] )
      RtlpLogHeapExtendEvent(a1, (_DWORD)v10, v9, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE038A]);
    ++*(_DWORD *)(a1 + 592);
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_7;
    v7 = v10;
    v8 = v9 >> 2;
    if ( !(v9 >> 2) )
      goto LABEL_7;
    if ( ((unsigned __int8)v10 & 4) != 0 )
    {
      *(_DWORD *)v10 = -17891602;
      if ( !--v8 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 10) &= 0x17u;
        return 1;
      }
      v7 += 4;
    }
    memset64(v7, 0xFEEEFEEEFEEEFEEEuLL, v8 >> 1);
    if ( (v8 & 1) != 0 )
      *(_DWORD *)&v7[4 * v8 - 4] = -17891602;
    goto LABEL_7;
  }
  ++*(_DWORD *)(a1 + 604);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v5, (const void *)a1, v10, v9);
  return 0;
}
