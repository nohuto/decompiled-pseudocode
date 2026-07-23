/*
 * XREFs of RtlpAllocateUserBlockFromHeap @ 0x180019964
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlReAllocateHeap @ 0x180020D70 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x1800F9520 (RtlpLogHeapSubSegmentAlloc.c)
 */

_BYTE *__fastcall RtlpAllocateUserBlockFromHeap(PRTL_CRITICAL_SECTION *HeapHandle, char a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  SIZE_T v9; // rbp
  _BYTE *Heap; // rax
  _BYTE *v11; // rbx
  char *v13; // rbp
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  ULONG OldProtect; // [rsp+88h] [rbp+10h] BYREF

  v5 = 1LL << a2;
  if ( (unsigned __int64)(1LL << a2) > 0xF0000 )
    v5 = 983040LL;
  v9 = v5;
  if ( a4 )
    v9 = v5 + 0x2000;
  RtlEnterCriticalSection(HeapHandle[44]);
  Heap = RtlAllocateHeap(HeapHandle, 0x800001u, v9);
  v11 = Heap;
  if ( Heap )
  {
    if ( a4 )
    {
      BaseAddress = (PVOID)((unsigned __int64)&Heap[v5 + 4095] & 0xFFFFFFFFFFFFF000uLL);
      v13 = (char *)((_BYTE *)BaseAddress - Heap + 4096);
      v11 = RtlReAllocateHeap(HeapHandle, 0x800001u, Heap, (SIZE_T)v13);
      RtlLeaveCriticalSection(HeapHandle[44]);
      RegionSize = 4096LL;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u, &OldProtect);
      v9 = (SIZE_T)(v13 - 4096);
      v11[17] = 1;
      *((_WORD *)v11 + 9) = v9 - v5;
    }
    else
    {
      RtlLeaveCriticalSection(HeapHandle[44]);
      *((_WORD *)v11 + 9) = 0;
      v11[17] = 0;
    }
    v11[16] = a2;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAlloc(HeapHandle, v11, v9, a3);
  }
  else
  {
    RtlLeaveCriticalSection(HeapHandle[44]);
  }
  return v11;
}
