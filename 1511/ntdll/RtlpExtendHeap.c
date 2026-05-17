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

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int HeapProtection; // r15d
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  int v18; // r9d
  char v19; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp+58h] BYREF

  v26 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v26);
  if ( v5 )
  {
    v26 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, &v26, 0);
    RtlpInsertFreeBlock(a1, v6, v26);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_7;
  v24 = 0LL;
  v8 = a2 + 0x2000;
  v9 = *(_QWORD *)(a1 + 160);
  if ( a2 + 0x2000 > v9 )
    v9 = a2 + 0x2000;
  if ( *(_BYTE *)(a1 + 378) == 2 )
    v10 = *(_QWORD *)(a1 + 368);
  else
    v10 = 0LL;
  if ( !v10 && v9 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v11 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v11 >= 0xFD0000 )
    v11 = 16580608LL;
  v25 = v11;
  HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
  v13 = ZwAllocateVirtualMemory(-1LL, &v24, 0LL, &v25, 0x2000, HeapProtection);
  if ( v13 < 0 )
  {
    while ( 1 )
    {
      v14 = v25;
      if ( v25 == v8 )
        break;
      v21 = v25 >> 1;
      if ( v25 >> 1 < v8 )
        v21 = a2 + 0x2000;
      v25 = v21;
      v13 = ZwAllocateVirtualMemory(-1LL, &v24, 0LL, &v25, 0x2000, HeapProtection);
      if ( v13 >= 0 )
      {
        v14 = v25;
        break;
      }
    }
    if ( v13 < 0 )
    {
      ++*(_DWORD *)(a1 + 592);
LABEL_7:
      if ( *(char *)(a1 + 112) < 0 )
      {
        v22 = RtlpCoalesceHeap(a1);
        v4 = (_BYTE *)v22;
        if ( v22 )
        {
          if ( *(unsigned __int16 *)(v22 + 8) >= a2 )
            return v22;
        }
      }
      v6 = 0LL;
      if ( v4 && *(_DWORD *)(a1 + 124) )
      {
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      return v6;
    }
  }
  else
  {
    v14 = v25;
  }
  *(_QWORD *)(a1 + 160) += v14;
  v15 = *(_QWORD *)(a1 + 168);
  if ( a2 + 4096 > v15 )
    v15 = a2 + 4096;
  v23 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v17 = ZwAllocateVirtualMemory(-1LL, &v24, 0LL, &v23, 4096, HeapProtection);
  if ( v17 < 0 )
    goto LABEL_46;
  v19 = RtlpInitializeHeapSegment(a1, v24, 112, v18, 2, v24, v24 + v23, v24 + v25 - 4096);
  v16 = 3221225495LL;
  if ( !v19 )
    v17 = -1073741801;
  if ( v17 < 0 )
  {
LABEL_46:
    RtlpSecMemFreeVirtualMemory(v16, &v24, &v25, 0x8000LL);
    goto LABEL_7;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    RtlpLogHeapCommit(a1, v24, v23, 4LL);
    RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v24 + 64), v23, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE0380]);
  }
  if ( MEMORY[0x7FFE038A] )
    RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v24 + 64), v23, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE038A]);
  if ( MEMORY[0x7FFE0388] )
    RtlpHeapLogRangeReserve(a1, v24, v25);
  v20 = *(_QWORD *)(v24 + 64);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v20);
  }
  return *(_QWORD *)(v24 + 64);
}
