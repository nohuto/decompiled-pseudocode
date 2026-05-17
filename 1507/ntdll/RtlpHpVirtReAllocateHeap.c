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

__int64 __fastcall RtlpHpVirtReAllocateHeap(void *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 HeapByAlloc; // rdi
  unsigned __int64 HeapInternal; // rax
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0LL;
  if ( a1 == NtCurrentPeb()->ProcessHeap )
    HeapByAlloc = RtlpHpVirtFindHeapByAlloc((__int64)a1, a3, (__int64 *)&v18);
  else
    HeapByAlloc = (unsigned __int64)a1;
  HeapInternal = RtlpReAllocateHeapInternal(HeapByAlloc, a2, a3, a4);
  v14 = HeapInternal;
  if ( !HeapInternal || (void *)HeapByAlloc == a1 )
  {
    v16 = v18;
  }
  else
  {
    if ( (_WORD)HeapInternal )
      v15 = 0;
    else
      v15 = RtlSparseBitmapCtxCheckBitsInternal(v11, HeapInternal >> 16);
    v16 = v18;
    if ( v15 )
    {
      if ( !v18 )
      {
        RtlpHpVirtLargeTreeInsert(v14, HeapByAlloc);
        return v14;
      }
      *(_QWORD *)(v18 + 24) = v14;
      RtlpHpVirtLargeTreeInsertNode(v16, v10, v12, v13);
      v16 = 0LL;
    }
  }
  if ( v16 )
    RtlpHpVirtLargeTreeInsertNode(v16, v10, v12, v13);
  return v14;
}
