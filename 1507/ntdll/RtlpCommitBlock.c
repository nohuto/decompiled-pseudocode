/*
 * XREFs of RtlpCommitBlock @ 0x180036FB4
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180006558 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800069E8 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x180078F24 (RtlpCoalesceHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18007902C (RtlpCoalesceFreeBlocks.c)
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800EE1F8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180037718 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800EF8B8 (RtlpLogHeapExtendEvent.c)
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
    --*(_DWORD *)(a1 + 620);
    *(_QWORD *)(a1 + 624) -= v9;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapExtendEvent(a1, (_DWORD)v10, v9, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE0380]);
    if ( MEMORY[0x7FFE038A] )
      RtlpLogHeapExtendEvent(a1, (_DWORD)v10, v9, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE038A]);
    ++*(_DWORD *)(a1 + 584);
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
  ++*(_DWORD *)(a1 + 596);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v5, (const void *)a1, v10, v9);
  return 0;
}
