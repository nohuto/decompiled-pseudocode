/*
 * XREFs of RtlpInitializeHeapSegment @ 0x180057998
 * Callers:
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     RtlLogStackBackTraceEx @ 0x180054FC8 (RtlLogStackBackTraceEx.c)
 *     RtlpCreateUCREntry @ 0x180057B9C (RtlpCreateUCREntry.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F15C0 (RtlpLogHeapCommit.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // r15
  unsigned int NtGlobalFlag; // r13d
  __int64 v13; // r14
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // rbx
  __int64 *v22; // rax
  int HeapProtection; // eax
  __int16 v25; // ax
  unsigned __int64 v26[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v27; // [rsp+98h] [rbp+58h]

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v13 = a3 + 15;
  v14 = a7;
  v15 = a2 + (v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v27 = (__int64)(a8 - a6) / 4096;
  a8 = (__int64)(v15 - a2) >> 4;
  if ( v15 + 80 >= a7 )
  {
    if ( v15 + 80 < v9 )
    {
      v26[0] = (v15 - a7 + 4111) & 0xFFFFFFFFFFFFF000uLL;
      HeapProtection = RtlpGetHeapProtection((_DWORD *)a1, 1);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &a7, 0LL, v26, 4096, HeapProtection) >= 0 )
      {
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(a1, a7, v26[0], 3LL);
        v14 = v26[0] + a7;
        a7 += v26[0];
        goto LABEL_3;
      }
      ++*(_DWORD *)(a1 + 592);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v16 = (__int64)(v9 - v14) / 4096;
  *(_WORD *)(a2 + 8) = a8;
  *(_WORD *)(a2 + 12) = *(_WORD *)(a1 + 140);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v25 = RtlLogStackBackTraceEx(1u);
    LODWORD(v14) = a7;
    *(_WORD *)(a2 + 88) = v25;
  }
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = a1;
  *(_QWORD *)(a2 + 48) = a6;
  *(_DWORD *)(a2 + 56) = v27;
  v17 = (unsigned int)((_DWORD)v27 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v17;
  *(_DWORD *)(a2 + 80) = 0;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 64) = v15;
  *(_QWORD *)(a1 + 536) += v17;
  *(_QWORD *)(a1 + 528) += v17;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *(_WORD *)(a1 + 140);
  v18 = *(_QWORD *)(a2 + 40);
  if ( v18 == a2 )
  {
    LOBYTE(v19) = 0;
  }
  else
  {
    v19 = ((v15 - a2) >> 16) + 1;
    if ( (v15 - a2) >> 16 > 0xFC )
    {
      RtlpLogHeapFailure(3, v18, v15, a2, 0LL, 0LL);
      LODWORD(v14) = a7;
    }
  }
  *(_BYTE *)(v15 + 14) = v19;
  RtlpCreateUCREntry(a1, a2, v14 - 48, (_DWORD)v16 << 12, v15, (__int64)v26);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v26[0] )
    RtlpInsertFreeBlock(a1, v15, v26[0]);
  v20 = a1 + 288;
  v21 = (unsigned __int64 *)(a2 + 24);
  v22 = *(__int64 **)(a1 + 296);
  if ( *v22 == a1 + 288 )
  {
    *v21 = v20;
    v21[1] = (unsigned __int64)v22;
    *v22 = (__int64)v21;
    *(_QWORD *)(a1 + 296) = v21;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, v20, 0, *v22, 0LL);
  }
  ++*(_DWORD *)(a1 + 560);
  return 1;
}
