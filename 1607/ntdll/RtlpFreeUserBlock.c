/*
 * XREFs of RtlpFreeUserBlock @ 0x180045F38
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAC8 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F40C (RtlpFreeUserBlockToHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A9D30 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1800F95AC (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1800F9638 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x1800F96C4 (RtlpLogHeapSubSegmentFreeCached.c)
 */

PSLIST_ENTRY __fastcall RtlpFreeUserBlock(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  PSLIST_ENTRY result; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  PSLIST_ENTRY v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbp

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 24);
  v6 = (volatile signed __int32 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 7 + 2LL));
  if ( *(_WORD *)(v4 + 384) && (*(_BYTE *)(v4 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v4 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v4 + 352));
  }
  v7 = *(unsigned __int16 *)v6;
  if ( v7 > *((_DWORD *)v6 + 5) && v7 > *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v11 = 1LL << *((_BYTE *)a2 + 16);
    if ( v11 > 0xF0000 )
      v11 = 983040LL;
    v12 = v11 + *((unsigned __int16 *)a2 + 9);
    result = (PSLIST_ENTRY)RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2);
    if ( MEMORY[0x7FFE0380] )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
        result = (PSLIST_ENTRY)RtlpLogHeapSubSegmentFree(
                                 *(_QWORD *)(a1 + 24),
                                 a2,
                                 v12,
                                 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    _InterlockedDecrement(v6 + 4);
    if ( v7 )
    {
      result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v13 = result;
      if ( result )
      {
        v14 = 1LL << LOBYTE(result[1].Next);
        if ( v14 > 0xF0000 )
          v14 = 983040LL;
        v15 = v14 + WORD1(result[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v15);
        result = (PSLIST_ENTRY)RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), result);
        if ( MEMORY[0x7FFE0380] )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v13, v15, 0LL);
            result = (PSLIST_ENTRY)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v13, v15, 0LL);
          }
        }
        _InterlockedDecrement(v6 + 4);
      }
    }
  }
  else
  {
    v8 = 1LL << *((_BYTE *)a2 + 16);
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    if ( MEMORY[0x7FFE0380] )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v3 + 36));
    }
    result = (PSLIST_ENTRY)RtlpInterlockedPushEntrySList(v6, a2);
    ++*((_WORD *)v6 + 15);
  }
  return result;
}
