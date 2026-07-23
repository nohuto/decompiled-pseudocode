/*
 * XREFs of RtlpExtendHeap @ 0x1400927E4
 * Callers:
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093454 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x14012ED0C (RtlpInitializeHeapSegment.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1402188FC (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x140218CD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x140218F78 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rax
  NTSTATUS v10; // eax
  ULONG_PTR v11; // rcx
  unsigned __int64 v12; // rcx
  NTSTATUS v13; // edi
  __int64 v14; // rdx
  ULONG_PTR v15; // rcx
  ULONG_PTR v16[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v19 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = RtlpFindAndCommitPages(a1, &v19);
  if ( v4 )
  {
    v19 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1, v4, &v19);
    RtlpInsertFreeBlock(a1, v5, v19);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 112) & 2) == 0 )
    return 0LL;
  BaseAddress = 0LL;
  v7 = a2 + 0x2000;
  v8 = *(_QWORD *)(a1 + 160);
  if ( a2 + 0x2000 > v8 )
    v8 = a2 + 0x2000;
  v9 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v9 >= 0xFD0000 )
    v9 = 16580608LL;
  RegionSize = v9;
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( v10 >= 0 )
  {
    v11 = RegionSize;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v11 = RegionSize;
    if ( RegionSize == v7 )
      break;
    v15 = RegionSize >> 1;
    if ( RegionSize >> 1 < v7 )
      v15 = a2 + 0x2000;
    RegionSize = v15;
    v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
    if ( v10 >= 0 )
    {
      v11 = RegionSize;
      break;
    }
  }
  if ( v10 < 0 )
  {
    ++*(_DWORD *)(a1 + 600);
    return 0LL;
  }
LABEL_13:
  *(_QWORD *)(a1 + 160) += v11;
  v12 = *(_QWORD *)(a1 + 168);
  if ( a2 + 4096 > v12 )
    v12 = a2 + 4096;
  v16[0] = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v16, 0x1000u, 4u);
  if ( v13 < 0 )
    goto LABEL_33;
  if ( !(unsigned __int8)RtlpInitializeHeapSegment(
                           a1,
                           (int)BaseAddress,
                           112,
                           (int)BaseAddress + (int)RegionSize - 4096,
                           2,
                           (__int64)BaseAddress,
                           (char *)BaseAddress + v16[0],
                           (ULONG_PTR)BaseAddress + RegionSize - 4096) )
    v13 = -1073741801;
  if ( v13 < 0 )
  {
LABEL_33:
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
  {
    RtlpLogHeapCommit(a1, BaseAddress, v16[0], 4LL);
    RtlpLogHeapExtendEvent(a1, *((_QWORD *)BaseAddress + 8), v16[0], 16LL * *(_QWORD *)(a1 + 192));
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpHeapLogRangeReserve(a1, BaseAddress, RegionSize);
  }
  v14 = *((_QWORD *)BaseAddress + 8);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
      RtlpAnalyzeHeapFailure(a1);
  }
  return *((_QWORD *)BaseAddress + 8);
}
