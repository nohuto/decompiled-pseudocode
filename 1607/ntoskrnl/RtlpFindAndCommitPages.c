/*
 * XREFs of RtlpFindAndCommitPages @ 0x140094574
 * Callers:
 *     RtlpExtendHeap @ 0x1400927E4 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpCreateUCREntry @ 0x1400946F8 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x140094870 (RtlpFindUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x1400948BC (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x140213A34 (RtlpUpdateHeapRates.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140218708 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x140218CD4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x140218F78 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(unsigned __int64 a1, ULONG_PTR *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  char v7; // r15
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rsi
  int updated; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  ULONG_PTR v14; // rdx
  __int64 v15; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v6 = UCREntry - 16;
  v7 = 0;
  v8 = *(_BYTE *)(UCREntry - 16 + 14);
  if ( v8 )
    v9 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v8 << 16) + 0x10000;
  else
    v9 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    updated = ((__int64 (__fastcall *)(unsigned __int64, PVOID *, ULONG_PTR *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
                a1,
                &BaseAddress,
                a2);
  }
  else
  {
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 4u);
    updated = RtlpUpdateHeapRates(a1, 2LL);
  }
  if ( updated < 0 )
  {
    ++*(_DWORD *)(a1 + 600);
    return 0LL;
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
    RtlpLogHeapCommit(a1, BaseAddress, *a2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    LOBYTE(v11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    if ( *(_BYTE *)(v6 + 11) != (_BYTE)v11 )
      RtlpAnalyzeHeapFailure(a1);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  RtlpRemoveUCRBlock(v11, v5);
  --*(_DWORD *)(v9 + 84);
  *(_DWORD *)(v9 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 544) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 576);
  --*(_DWORD *)(a1 + 572);
  v12 = *(_QWORD *)(v5 + 40);
  if ( v12 >= 0xFF000 )
    *(_QWORD *)(a1 + 552) -= v12;
  v13 = *(_QWORD *)(v5 + 40);
  v14 = *a2;
  if ( v13 > *a2 || v13 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v9 + 72) )
  {
    RtlpCreateUCREntry(a1, v9, v14 - 48 + *(_QWORD *)(v5 + 32), v13 - v14, v6, (__int64)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v14 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v15 = *(_QWORD *)(v9 + 40);
  if ( v15 != v9 )
  {
    if ( (v6 - v9) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, v15, v6, v9, 0LL);
    v7 = ((unsigned int)(v6 - v9) >> 16) + 1;
  }
  *(_BYTE *)(v6 + 14) = v7;
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
    RtlpLogHeapExtendEvent(a1, v6, *a2, 16LL * *(_QWORD *)(a1 + 192));
  return v6;
}
