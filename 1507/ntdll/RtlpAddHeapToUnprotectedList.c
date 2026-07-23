/*
 * XREFs of RtlpAddHeapToUnprotectedList @ 0x180006084
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x180005FE4 (RtlpMoveHeapBetweenLists.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlpAddHeapToUnprotectedList(__int64 a1)
{
  struct _PEB *v1; // rbx
  unsigned int MaximumNumberOfHeaps; // eax
  __int64 result; // rax
  unsigned int v5; // eax
  void **Heap; // rax
  void **v7; // rsi
  void **ProcessHeaps; // r8

  v1 = NtCurrentPeb();
  MaximumNumberOfHeaps = v1->MaximumNumberOfHeaps;
  if ( v1->NumberOfHeaps == MaximumNumberOfHeaps )
  {
    v5 = 2 * MaximumNumberOfHeaps;
    v1->MaximumNumberOfHeaps = v5;
    Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v5);
    v7 = Heap;
    if ( !Heap )
    {
      result = v1->NumberOfHeaps;
      v1->MaximumNumberOfHeaps = result;
      return result;
    }
    memmove(Heap, v1->ProcessHeaps, 8LL * v1->NumberOfHeaps);
    ProcessHeaps = v1->ProcessHeaps;
    if ( ProcessHeaps != (void **)&RtlpProcessHeapsListBuffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessHeaps);
    v1->ProcessHeaps = v7;
  }
  v1->ProcessHeaps[v1->NumberOfHeaps++] = (void *)a1;
  result = LOWORD(v1->NumberOfHeaps);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    *(_WORD *)(a1 + 36) = result;
  else
    *(_WORD *)(a1 + 208) = result;
  return result;
}
