/*
 * XREFs of RtlpInitializeHeapSegment @ 0x180007164
 * Callers:
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpCreateUCREntry @ 0x180007368 (RtlpCreateUCREntry.c)
 *     RtlLogStackBackTraceEx @ 0x180007878 (RtlLogStackBackTraceEx.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        char *BaseAddress,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char *BaseAddressa,
        unsigned __int64 a8)
{
  unsigned __int64 v9; // r15
  unsigned int NtGlobalFlag; // r13d
  __int64 v13; // r14
  char *v14; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  char *v21; // r8
  _QWORD *v22; // rbx
  __int64 *v23; // rax
  ULONG Protect; // eax
  __int16 v26; // ax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+98h] [rbp+58h]

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v13 = a3 + 15;
  v14 = BaseAddressa;
  v15 = a2 + (v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v28 = (__int64)(a8 - a6) / 4096;
  a8 = (v15 - a2) >> 4;
  if ( v15 + 80 >= (unsigned __int64)BaseAddressa )
  {
    if ( v15 + 80 < v9 )
    {
      RegionSize[0] = (v15 - (_QWORD)BaseAddressa + 4111) & 0xFFFFFFFFFFFFF000uLL;
      Protect = RtlpGetHeapProtection(BaseAddress);
      if ( ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID *)&BaseAddressa,
             0LL,
             RegionSize,
             0x1000u,
             Protect) >= 0 )
      {
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize[0], 3LL);
        v14 = &BaseAddressa[RegionSize[0]];
        BaseAddressa += RegionSize[0];
        goto LABEL_3;
      }
      ++*((_DWORD *)BaseAddress + 148);
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v16 = (__int64)(v9 - (_QWORD)v14) % 4096;
  v17 = (__int64)(v9 - (_QWORD)v14) / 4096;
  *(_WORD *)(a2 + 8) = a8;
  *(_WORD *)(a2 + 12) = *((_WORD *)BaseAddress + 70);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v26 = RtlLogStackBackTraceEx(1LL, v16);
    LODWORD(v14) = (_DWORD)BaseAddressa;
    *(_WORD *)(a2 + 88) = v26;
  }
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = BaseAddress;
  *(_QWORD *)(a2 + 48) = a6;
  *(_DWORD *)(a2 + 56) = v28;
  v18 = (unsigned int)((_DWORD)v28 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v18;
  *(_DWORD *)(a2 + 80) = 0;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 64) = v15;
  *((_QWORD *)BaseAddress + 67) += v18;
  *((_QWORD *)BaseAddress + 66) += v18;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *((_WORD *)BaseAddress + 70);
  v19 = *(_QWORD *)(a2 + 40);
  if ( v19 == a2 )
  {
    LOBYTE(v20) = 0;
  }
  else
  {
    v20 = ((unsigned __int64)(v15 - a2) >> 16) + 1;
    if ( (unsigned __int64)(v15 - a2) >> 16 > 0xFC )
    {
      RtlpLogHeapFailure(3, v19, v15, a2, 0LL, 0LL);
      LODWORD(v14) = (_DWORD)BaseAddressa;
    }
  }
  *(_BYTE *)(v15 + 14) = v20;
  RtlpCreateUCREntry((_DWORD)BaseAddress, a2, (_DWORD)v14 - 48, (_DWORD)v17 << 12, v15, (__int64)RegionSize);
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock(BaseAddress, v15, RegionSize[0]);
  v21 = BaseAddress + 288;
  v22 = (_QWORD *)(a2 + 24);
  v23 = (__int64 *)*((_QWORD *)BaseAddress + 37);
  if ( (char *)*v23 == BaseAddress + 288 )
  {
    *v22 = v21;
    v22[1] = v23;
    *v23 = (__int64)v22;
    *((_QWORD *)BaseAddress + 37) = v22;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v21, 0, *v23, 0LL);
  }
  ++*((_DWORD *)BaseAddress + 140);
  return 1;
}
