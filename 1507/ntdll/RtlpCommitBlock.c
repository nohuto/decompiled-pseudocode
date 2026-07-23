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
    --*((_DWORD *)BaseAddress + 155);
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
    ++*((_DWORD *)BaseAddress + 146);
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
  ++*((_DWORD *)BaseAddress + 149);
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
