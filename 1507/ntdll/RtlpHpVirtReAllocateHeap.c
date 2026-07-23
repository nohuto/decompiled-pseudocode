/*
 * XREFs of RtlpHpVirtReAllocateHeap @ 0x1800EBA84
 * Callers:
 *     RtlReAllocateHeap @ 0x18002DA20 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18006A954 (RtlpHpReAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 *     RtlpHpVirtLargeTreeInsert @ 0x1800EB5F8 (RtlpHpVirtLargeTreeInsert.c)
 *     RtlpHpVirtLargeTreeInsertNode @ 0x1800EB644 (RtlpHpVirtLargeTreeInsertNode.c)
 */

_RTL_BALANCED_NODE *__fastcall RtlpHpVirtReAllocateHeap(
        unsigned __int16 *BaseAddress,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int16 *HeapByAlloc; // rdi
  unsigned __int64 HeapInternal; // rax
  __int64 v10; // rcx
  _RTL_BALANCED_NODE *v11; // rbx
  int v12; // eax
  _RTL_BALANCED_NODE *v13; // rcx
  PRTL_BALANCED_NODE Node; // [rsp+40h] [rbp+8h] BYREF

  Node = 0LL;
  if ( BaseAddress == NtCurrentPeb()->ProcessHeap )
    HeapByAlloc = (unsigned __int16 *)RtlpHpVirtFindHeapByAlloc((__int64)BaseAddress, a3, (__int64 *)&Node);
  else
    HeapByAlloc = BaseAddress;
  HeapInternal = RtlpReAllocateHeapInternal(HeapByAlloc, a2, a3, a4);
  v11 = (_RTL_BALANCED_NODE *)HeapInternal;
  if ( !HeapInternal || HeapByAlloc == BaseAddress )
  {
    v13 = Node;
  }
  else
  {
    if ( (_WORD)HeapInternal )
      v12 = 0;
    else
      v12 = RtlSparseBitmapCtxCheckBitsInternal(v10, HeapInternal >> 16);
    v13 = Node;
    if ( v12 )
    {
      if ( !Node )
      {
        RtlpHpVirtLargeTreeInsert(v11, (_RTL_BALANCED_NODE *)HeapByAlloc);
        return v11;
      }
      Node[1].Children[0] = v11;
      RtlpHpVirtLargeTreeInsertNode(v13);
      v13 = 0LL;
    }
  }
  if ( v13 )
    RtlpHpVirtLargeTreeInsertNode(v13);
  return v11;
}
