/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x180019974
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240C0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlReAllocateHeap @ 0x180020D80 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1800F9520 (RtlpLogHeapSubSegmentAlloc.c)
 */

__int64 __fastcall RtlpAllocateUserBlockFromHeap(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  __int64 v9; // rbp
  __int64 Heap; // rax
  __int64 v11; // rbx
  __int64 v13; // rbp
  unsigned __int64 v14[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  char v16; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v9 = v5;
  if ( a4 )
    v9 = v5 + 0x2000;
  RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
  Heap = RtlAllocateHeap(a1, 8388609LL, v9);
  v11 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v14[0] = (Heap + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v13 = v14[0] - Heap + 4096;
      v11 = RtlReAllocateHeap(a1, 8388609LL, Heap, v13);
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v15 = 4096LL;
      ZwProtectVirtualMemory(-1LL, v14, &v15, 1LL, &v16);
      v9 = v13 - 4096;
      *(_BYTE *)(v11 + 17) = 1;
      *(_WORD *)(v11 + 18) = v9 - v5;
    }
    else
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      *(_WORD *)(v11 + 18) = 0;
      *(_BYTE *)(v11 + 17) = 0;
    }
    *(_BYTE *)(v11 + 16) = a2;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(a1, v11, v9, a3);
  }
  else
  {
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  }
  return v11;
}
