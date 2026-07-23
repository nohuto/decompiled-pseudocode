/*
 * XREFs of RtlpInitializeHeapSegment @ 0x18004CCBC
 * Callers:
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x18002B1F8 (RtlLogStackBackTraceEx.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpInsertFreeBlock @ 0x18004ADF0 (RtlpInsertFreeBlock.c)
 *     RtlpCreateUCREntry @ 0x18004CEC0 (RtlpCreateUCREntry.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 */

char __fastcall RtlpInitializeHeapSegment(
        _DWORD *BaseAddress,
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
  unsigned __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  char *v20; // r8
  _QWORD *v21; // rbx
  __int64 *v22; // rax
  ULONG Protect; // eax
  __int16 v25; // ax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v27; // [rsp+98h] [rbp+58h]

  v9 = a8;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  if ( a8 - a6 > 0xFFFFF000 )
    return 0;
  v13 = a3 + 15;
  v14 = BaseAddressa;
  v15 = a2 + (v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v27 = (__int64)(a8 - a6) / 4096;
  a8 = (__int64)(v15 - a2) >> 4;
  if ( v15 + 80 >= (unsigned __int64)BaseAddressa )
  {
    if ( v15 + 80 < v9 )
    {
      RegionSize[0] = (v15 - (_QWORD)BaseAddressa + 4111) & 0xFFFFFFFFFFFFF000uLL;
      Protect = RtlpGetHeapProtection(BaseAddress, 1);
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
      ++BaseAddress[150];
    }
    return 0;
  }
LABEL_3:
  *(_WORD *)(a2 + 10) = 1;
  *(_BYTE *)(a2 + 15) = 1;
  v16 = (__int64)(v9 - (_QWORD)v14) / 4096;
  *(_WORD *)(a2 + 8) = a8;
  *(_WORD *)(a2 + 12) = *((_WORD *)BaseAddress + 70);
  if ( (NtGlobalFlag & 0x1000) != 0 )
  {
    v25 = RtlLogStackBackTraceEx(1u);
    LODWORD(v14) = (_DWORD)BaseAddressa;
    *(_WORD *)(a2 + 88) = v25;
  }
  *(_DWORD *)(a2 + 20) = a5;
  *(_QWORD *)(a2 + 40) = BaseAddress;
  *(_QWORD *)(a2 + 48) = a6;
  *(_DWORD *)(a2 + 56) = v27;
  v17 = (unsigned int)((_DWORD)v27 << 12);
  *(_QWORD *)(a2 + 72) = a6 + v17;
  *(_DWORD *)(a2 + 80) = 0;
  *(_DWORD *)(a2 + 16) = -1114130;
  *(_QWORD *)(a2 + 64) = v15;
  *((_QWORD *)BaseAddress + 68) += v17;
  *((_QWORD *)BaseAddress + 67) += v17;
  *(_QWORD *)(a2 + 104) = a2 + 96;
  *(_QWORD *)(a2 + 96) = a2 + 96;
  *(_BYTE *)(a2 + 14) = *(_QWORD *)(a2 + 40) != a2;
  *(_WORD *)(v15 + 12) = *(_WORD *)(a2 + 8) ^ *((_WORD *)BaseAddress + 70);
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
      LODWORD(v14) = (_DWORD)BaseAddressa;
    }
  }
  *(_BYTE *)(v15 + 14) = v19;
  RtlpCreateUCREntry((_DWORD)BaseAddress, a2, (_DWORD)v14 - 48, (_DWORD)v16 << 12, v15, (__int64)RegionSize);
  if ( BaseAddress[31] )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= BaseAddress[34];
  }
  if ( RegionSize[0] )
    RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v15, RegionSize[0]);
  v20 = (char *)(BaseAddress + 72);
  v21 = (_QWORD *)(a2 + 24);
  v22 = (__int64 *)*((_QWORD *)BaseAddress + 37);
  if ( (_DWORD *)*v22 == BaseAddress + 72 )
  {
    *v21 = v20;
    v21[1] = v22;
    *v22 = (__int64)v21;
    *((_QWORD *)BaseAddress + 37) = v21;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v20, 0, *v22, 0LL);
  }
  ++BaseAddress[142];
  return 1;
}
