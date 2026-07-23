/*
 * XREFs of RtlpExtendHeap @ 0x18001E644
 * Callers:
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001DDEC (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x18008E114 (RtlpCoalesceHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1800F0F4C (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F1810 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(unsigned __int64 *BaseAddress, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  ULONG_PTR v11; // rax
  ULONG Protect; // r15d
  NTSTATUS v13; // ecx
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // edi
  char v18; // al
  __int64 v19; // rdx
  ULONG_PTR v20; // rax
  __int64 v21; // rax
  ULONG_PTR v22[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddressa; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR v25; // [rsp+A8h] [rbp+58h] BYREF

  v25 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(BaseAddress, &v25);
  if ( v5 )
  {
    v25 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(BaseAddress, v5, &v25, 0);
    RtlpInsertFreeBlock(BaseAddress, v6, v25);
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v6 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v6);
    }
    return v6;
  }
  if ( (BaseAddress[14] & 2) == 0 )
    goto LABEL_7;
  BaseAddressa = 0LL;
  v8 = a2 + 0x2000;
  v9 = BaseAddress[20];
  if ( a2 + 0x2000 > v9 )
    v9 = a2 + 0x2000;
  if ( *((_BYTE *)BaseAddress + 378) == 2 )
    v10 = BaseAddress[46];
  else
    v10 = 0LL;
  if ( !v10 && v9 >= 0x3F4000 )
    *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
  v11 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v11 >= 0xFD0000 )
    v11 = 16580608LL;
  RegionSize = v11;
  Protect = RtlpGetHeapProtection(BaseAddress, 1);
  v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
  if ( v13 < 0 )
  {
    while ( 1 )
    {
      v14 = RegionSize;
      if ( RegionSize == v8 )
        break;
      v20 = RegionSize >> 1;
      if ( RegionSize >> 1 < v8 )
        v20 = a2 + 0x2000;
      RegionSize = v20;
      v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect);
      if ( v13 >= 0 )
      {
        v14 = RegionSize;
        break;
      }
    }
    if ( v13 < 0 )
    {
      ++*((_DWORD *)BaseAddress + 148);
LABEL_7:
      if ( *((char *)BaseAddress + 112) < 0 )
      {
        v21 = RtlpCoalesceHeap(BaseAddress);
        v4 = (_BYTE *)v21;
        if ( v21 )
        {
          if ( *(unsigned __int16 *)(v21 + 8) >= a2 )
            return v21;
        }
      }
      v6 = 0LL;
      if ( v4 && *((_DWORD *)BaseAddress + 31) )
      {
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
      }
      return v6;
    }
  }
  else
  {
    v14 = RegionSize;
  }
  BaseAddress[20] += v14;
  v15 = BaseAddress[21];
  if ( a2 + 4096 > v15 )
    v15 = a2 + 4096;
  v22[0] = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, v22, 0x1000u, Protect);
  if ( v17 < 0 )
    goto LABEL_46;
  v18 = RtlpInitializeHeapSegment(
          BaseAddress,
          2,
          (__int64)BaseAddressa,
          (char *)BaseAddressa + v22[0],
          (__int64)BaseAddressa + RegionSize - 4096);
  v16 = 3221225495LL;
  if ( !v18 )
    v17 = -1073741801;
  if ( v17 < 0 )
  {
LABEL_46:
    RtlpSecMemFreeVirtualMemory(v16, &BaseAddressa, &RegionSize, 0x8000LL);
    goto LABEL_7;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapCommit(BaseAddress, BaseAddressa, v22[0], 4LL);
    RtlpLogHeapExtendEvent(
      (int)BaseAddress,
      *((_QWORD *)BaseAddressa + 8),
      v22[0],
      16 * BaseAddress[24],
      (HANDLE)MEMORY[0x7FFE0380]);
  }
  if ( MEMORY[0x7FFE038A] )
    RtlpLogHeapExtendEvent(
      (int)BaseAddress,
      *((_QWORD *)BaseAddressa + 8),
      v22[0],
      16 * BaseAddress[24],
      (HANDLE)MEMORY[0x7FFE038A]);
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeReserve(BaseAddress, BaseAddressa, RegionSize);
  v19 = *((_QWORD *)BaseAddressa + 8);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v19 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v19 + 11) != (*(_BYTE *)(v19 + 8) ^ (unsigned __int8)(*(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v19);
  }
  return *((_QWORD *)BaseAddressa + 8);
}
