/*
 * XREFs of RtlpInitializeHeapSegment @ 0x14012ED0C
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpCreateUCREntry @ 0x1400946F8 (RtlpCreateUCREntry.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x140218CD4 (RtlpLogHeapCommit.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddress,
        ULONG_PTR RegionSize)
{
  ULONG_PTR v8; // r15
  __int64 v11; // rax
  __int64 v13; // rsi
  char *v14; // r8
  unsigned __int64 v15; // rsi
  int v16; // r9d
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned __int64 v22; // r8
  unsigned __int64 *v23; // rbx
  __int64 *v24; // rax
  __int64 v26; // [rsp+88h] [rbp+58h]

  v8 = RegionSize;
  v11 = RegionSize - a6;
  if ( RegionSize - a6 > 0xFFFFF000 )
    return 0;
  v13 = a3 + 15;
  v14 = BaseAddress;
  v15 = a2 + (v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v26 = v11 / 4096;
  v16 = v11 / 4096;
  v17 = (__int64)(v15 - a2) >> 4;
  if ( v15 + 80 >= (unsigned __int64)BaseAddress )
  {
    if ( v15 + 80 < RegionSize )
    {
      RegionSize = (v15 - (_QWORD)BaseAddress + 4111) & 0xFFFFFFFFFFFFF000uLL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
          RtlpLogHeapCommit(a1, BaseAddress, RegionSize, 3LL);
        v14 = &BaseAddress[RegionSize];
        v16 = v26;
        BaseAddress += RegionSize;
        goto LABEL_3;
      }
      ++*(_DWORD *)(a1 + 600);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 8) = v17;
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  v18 = (__int64)(v8 - (_QWORD)v14) / 4096;
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 48) = a6;
  *(_QWORD *)(a2 + 64) = v15;
  *(_DWORD *)(a2 + 56) = v16;
  *(_DWORD *)(a2 + 80) = 0;
  v19 = (unsigned int)(v16 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v19;
  *(_QWORD *)(a1 + 544) += v19;
  *(_QWORD *)(a1 + 536) += v19;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v20 = *(_QWORD *)(a2 + 40);
  if ( v20 == a2 )
  {
    LOBYTE(v21) = 0;
  }
  else
  {
    v21 = ((v15 - a2) >> 16) + 1;
    if ( (v15 - a2) >> 16 > 0xFC )
    {
      RtlpLogHeapFailure(3, v20, v15, a2, 0LL);
      v14 = BaseAddress;
    }
  }
  *(_BYTE *)(v15 + 14) = v21;
  RtlpCreateUCREntry(a1, a2, (__int64)(v14 - 48), (unsigned int)((_DWORD)v18 << 12), v15, (__int64 *)&RegionSize);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( RegionSize )
    RtlpInsertFreeBlock(a1, v15, RegionSize);
  v22 = a1 + 288;
  v23 = (unsigned __int64 *)(a2 + 24);
  v24 = *(__int64 **)(a1 + 296);
  if ( *v24 == a1 + 288 )
  {
    *v23 = v22;
    v23[1] = (unsigned __int64)v24;
    *v24 = (__int64)v23;
    *(_QWORD *)(a1 + 296) = v23;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, v22, 0, *v24);
  }
  ++*(_DWORD *)(a1 + 568);
  return 1;
}
