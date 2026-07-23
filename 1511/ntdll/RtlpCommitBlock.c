/*
 * XREFs of RtlpCommitBlock @ 0x180052BE8
 * Callers:
 *     RtlpCoalesceFreeBlocks @ 0x18001DDEC (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180056578 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceHeap @ 0x18008E114 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180052E5C (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F1810 (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(_DWORD *BaseAddress, __int64 a2)
{
  ULONG Protect; // eax
  NTSTATUS v5; // esi
  char *v7; // r8
  ULONG_PTR v8; // rdx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+30h] BYREF
  PVOID BaseAddressa; // [rsp+68h] [rbp+38h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(BaseAddress, a2, &BaseAddressa, &RegionSize);
  Protect = RtlpGetHeapProtection(BaseAddress, 1);
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( v5 >= 0 )
  {
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 8LL);
    --BaseAddress[155];
    *((_QWORD *)BaseAddress + 78) -= RegionSize;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapExtendEvent(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * *((_QWORD *)BaseAddress + 24),
        (HANDLE)MEMORY[0x7FFE0380]);
    if ( MEMORY[0x7FFE038A] )
      RtlpLogHeapExtendEvent(
        (int)BaseAddress,
        (int)BaseAddressa,
        RegionSize,
        16 * *((_QWORD *)BaseAddress + 24),
        (HANDLE)MEMORY[0x7FFE038A]);
    ++BaseAddress[146];
    if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
      goto LABEL_7;
    v7 = (char *)BaseAddressa;
    v8 = RegionSize >> 2;
    if ( !(RegionSize >> 2) )
      goto LABEL_7;
    if ( ((unsigned __int8)BaseAddressa & 4) != 0 )
    {
      *(_DWORD *)BaseAddressa = -17891602;
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
  ++BaseAddress[149];
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
    v5,
    BaseAddress,
    BaseAddressa,
    RegionSize);
  return 0;
}
