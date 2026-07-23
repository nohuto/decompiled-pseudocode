/*
 * XREFs of RtlpAddHeapToUnprotectedList @ 0x180056084
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x180055FE4 (RtlpMoveHeapBetweenLists.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

void __fastcall RtlpAddHeapToUnprotectedList(__int64 a1)
{
  struct _PEB *v1; // rbx
  unsigned int v3; // edi
  unsigned int MaximumNumberOfHeaps; // eax
  __int16 NumberOfHeaps; // ax
  unsigned int v6; // eax
  void **Heap; // rax
  void **v8; // rbp
  void **ProcessHeaps; // r8

  v1 = NtCurrentPeb();
  v3 = v1->NumberOfHeaps + (unsigned __int16)RtlpNumberOfProtectedHeaps;
  if ( v3 < 0xFFFE )
  {
    MaximumNumberOfHeaps = v1->MaximumNumberOfHeaps;
    if ( v3 == MaximumNumberOfHeaps )
    {
      v6 = 2 * MaximumNumberOfHeaps;
      v1->MaximumNumberOfHeaps = v6;
      Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v6);
      v8 = Heap;
      if ( !Heap )
      {
        v1->MaximumNumberOfHeaps = v3;
        return;
      }
      memmove(Heap, v1->ProcessHeaps, 8LL * v1->NumberOfHeaps);
      ProcessHeaps = v1->ProcessHeaps;
      if ( ProcessHeaps != (void **)&RtlpProcessHeapsListBuffer )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ProcessHeaps);
      v1->ProcessHeaps = v8;
    }
    v1->ProcessHeaps[v1->NumberOfHeaps++] = (void *)a1;
    NumberOfHeaps = v1->NumberOfHeaps;
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_WORD *)(a1 + 36) = NumberOfHeaps;
    else
      *(_WORD *)(a1 + 208) = NumberOfHeaps;
  }
}
