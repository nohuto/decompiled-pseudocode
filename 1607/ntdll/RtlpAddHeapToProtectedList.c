/*
 * XREFs of RtlpAddHeapToProtectedList @ 0x18002C8B8
 * Callers:
 *     RtlpMoveHeapBetweenLists @ 0x18002D944 (RtlpMoveHeapBetweenLists.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpAddHeapToProtectedList(__int64 a1)
{
  _WORD *v1; // rax
  unsigned __int16 v3; // di
  _QWORD *v4; // r14
  __int64 result; // rax
  struct _PEB *v6; // rcx
  SIZE_T v7; // r8
  _QWORD *Heap; // rax

  v1 = (_WORD *)(a1 + 36);
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v1 = (_WORD *)(a1 + 208);
  v3 = RtlpNumberOfProtectedHeaps;
  *v1 = -1;
  if ( v3 != RtlpMaxNumberOfProtectedHeaps )
  {
    v4 = RtlpProtectedHeapsList;
LABEL_5:
    result = v3;
    RtlpNumberOfProtectedHeaps = v3 + 1;
    v4[v3] = a1;
    return result;
  }
  v6 = NtCurrentPeb();
  v7 = 8LL * (unsigned __int16)(2 * RtlpMaxNumberOfProtectedHeaps);
  RtlpMaxNumberOfProtectedHeaps *= 2;
  Heap = RtlAllocateHeap(v6->ProcessHeap, 0, v7);
  v4 = Heap;
  if ( Heap )
  {
    v3 = RtlpNumberOfProtectedHeaps;
    memmove(Heap, RtlpProtectedHeapsList, 8LL * (unsigned __int16)RtlpNumberOfProtectedHeaps);
    if ( RtlpProtectedHeapsList != &RtlpProtectedHeapsListBuffer )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RtlpProtectedHeapsList);
      v3 = RtlpNumberOfProtectedHeaps;
    }
    RtlpProtectedHeapsList = v4;
    goto LABEL_5;
  }
  result = (unsigned __int16)RtlpNumberOfProtectedHeaps;
  RtlpMaxNumberOfProtectedHeaps = RtlpNumberOfProtectedHeaps;
  return result;
}
