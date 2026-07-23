/*
 * XREFs of RtlpFreeUserBlock @ 0x180023AD4
 * Callers:
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004FBB0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A88F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A8930 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800F1ABC (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1800F1B4C (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x1800F1BDC (RtlpLogHeapSubSegmentFreeCached.c)
 */

PSLIST_ENTRY __fastcall RtlpFreeUserBlock(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a1 + 24);
  v6 = (volatile signed __int32 *)(a1 + 48 * (a2[16] - 7 + 2LL));
  if ( *(_WORD *)(v4 + 376) && (*(_BYTE *)(v4 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v4 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v4 + 352));
  }
  v7 = *(unsigned __int16 *)v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v14 = 1LL << a2[16];
    if ( v14 > 0xF0000 )
      v14 = 983040LL;
    v15 = v14 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v15);
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v15, 16LL * *(unsigned __int16 *)(v3 + 36));
    result = (PSLIST_ENTRY)RtlpInterlockedPushEntrySList(v6, a2);
    ++*((_WORD *)v6 + 15);
  }
  else
  {
    v8 = 1LL << a2[16];
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    result = (PSLIST_ENTRY)RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2);
    if ( MEMORY[0x7FFE0380] )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
        result = (PSLIST_ENTRY)RtlpLogHeapSubSegmentFree(
                                 *(_QWORD *)(a1 + 24),
                                 a2,
                                 v9,
                                 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    _InterlockedDecrement(v6 + 4);
    if ( v7 )
    {
      result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v11 = result;
      if ( result )
      {
        v12 = 1LL << LOBYTE(result[1].Next);
        if ( v12 > 0xF0000 )
          v12 = 983040LL;
        v13 = v12 + WORD1(result[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v13);
        result = (PSLIST_ENTRY)RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), result);
        if ( MEMORY[0x7FFE0380] )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v11, v13, 0LL);
            result = (PSLIST_ENTRY)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v11, v13, 0LL);
          }
        }
        _InterlockedDecrement(v6 + 4);
      }
    }
  }
  return result;
}
