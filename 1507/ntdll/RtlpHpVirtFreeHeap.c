/*
 * XREFs of RtlpHpVirtFreeHeap @ 0x1800EAC08
 * Callers:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpVirtAllocateHeap @ 0x1800EAA94 (RtlpHpVirtAllocateHeap.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x1800586CC (RtlpHpMetadataFree.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 *     RtlpHpVirtLargeTreeInsertNode @ 0x1800EB644 (RtlpHpVirtLargeTreeInsertNode.c)
 */

__int64 __fastcall RtlpHpVirtFreeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 HeapByAlloc; // rbp
  BOOL v7; // eax
  unsigned int v8; // edi
  unsigned __int64 v9; // rbx
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  HeapByAlloc = RtlpHpVirtFindHeapByAlloc(a1, a2, (__int64 *)&v11);
  v7 = RtlpFreeHeapInternal(HeapByAlloc, a2, a3);
  v8 = v7;
  if ( HeapByAlloc == a1 || !v7 )
  {
    v9 = v11;
  }
  else
  {
    v9 = v11;
    if ( v11 )
    {
      RtlpHpMetadataFree(v11);
      v9 = 0LL;
    }
    RtlpHpVirtHeapTableDereferenceHeap(HeapByAlloc);
  }
  if ( v9 )
    RtlpHpVirtLargeTreeInsertNode(v9);
  return v8;
}
