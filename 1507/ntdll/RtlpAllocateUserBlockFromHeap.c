/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x180035070
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1800EFAD4 (RtlpLogHeapSubSegmentAlloc.c)
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
  Heap = RtlAllocateHeap(a1, 0x800001u, v9);
  v11 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      v14[0] = (Heap + v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v13 = v14[0] - Heap + 4096;
      v11 = RtlReAllocateHeap(a1);
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
