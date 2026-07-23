/*
 * XREFs of RtlpFreeUserBlock @ 0x18002A230
 * Callers:
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpFreeUserBlockToHeap @ 0x180009080 (RtlpFreeUserBlockToHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpInterlockedPopEntrySList @ 0x180095560 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800955A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800EFB64 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1800EFBF4 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x1800EFC84 (RtlpLogHeapSubSegmentFreeCached.c)
 */

int __fastcall RtlpFreeUserBlock(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  PSLIST_ENTRY v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r12
  ULONG v14; // r8d
  PSLIST_ENTRY v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 24);
  v6 = *((unsigned __int8 *)a2 + 16) - 7 + 2LL;
  v7 = (volatile signed __int32 *)(a1 + 48 * v6);
  if ( *(_WORD *)(v4 + 376) && (*(_BYTE *)(v4 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v4 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v4 + 352));
  }
  v8 = *(unsigned __int16 *)v7;
  if ( v8 <= *((_DWORD *)v7 + 5) || v8 <= *((_DWORD *)v7 + 4) >> *((_DWORD *)v7 + 6) )
  {
    v9 = 1LL << *((_BYTE *)a2 + 16);
    if ( v9 > 0xF0000 )
      v9 = 983040LL;
    v10 = v9 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v10);
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v10, 16LL * *(unsigned __int16 *)(v3 + 36));
    LODWORD(v11) = RtlpInterlockedPushEntrySList(v7, a2);
    ++*((_WORD *)v7 + 15);
  }
  else
  {
    v12 = 1LL << *((_BYTE *)a2 + 16);
    if ( v12 > 0xF0000 )
      v12 = 983040LL;
    v13 = v12 + *((unsigned __int16 *)a2 + 9);
    LODWORD(v11) = RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2, v6);
    if ( MEMORY[0x7FFE0380] )
    {
      v11 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v11[55].Next + 1) & 1) != 0 )
        LODWORD(v11) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v13, 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    _InterlockedDecrement(v7 + 4);
    if ( v8 )
    {
      v11 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v7);
      v15 = v11;
      if ( v11 )
      {
        v16 = 1LL << LOBYTE(v11[1].Next);
        if ( v16 > 0xF0000 )
          v16 = 983040LL;
        v17 = v16 + WORD1(v11[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v17);
        LODWORD(v11) = RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v11, v14);
        if ( MEMORY[0x7FFE0380] )
        {
          v11 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v11[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
            LODWORD(v11) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v15, v17, 0LL);
          }
        }
        _InterlockedDecrement(v7 + 4);
      }
    }
  }
  return (int)v11;
}
