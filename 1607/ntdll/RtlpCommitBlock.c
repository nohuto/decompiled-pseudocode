/*
 * XREFs of RtlpCommitBlock @ 0x180028B24
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B49C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180028D98 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F9310 (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(PVOID BaseAddress, __int64 a2)
{
  ULONG Protect; // eax
  NTSTATUS v5; // esi
  char *v7; // r8
  ULONG_PTR v8; // rdx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+30h] BYREF
  PVOID BaseAddressa; // [rsp+68h] [rbp+38h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(BaseAddress, a2, &BaseAddressa, &RegionSize);
  Protect = RtlpGetHeapProtection(BaseAddress);
  v5 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
  if ( v5 >= 0 )
  {
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 8LL);
    --*((_DWORD *)BaseAddress + 157);
    *((_QWORD *)BaseAddress + 79) -= RegionSize;
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
    ++*((_DWORD *)BaseAddress + 148);
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
  ++*((_DWORD *)BaseAddress + 151);
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
