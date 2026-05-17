/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x18004F95C
 * Callers:
 *     RtlpWalkHeapInternal @ 0x18004D364 (RtlpWalkHeapInternal.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18004F520 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x18004F574 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180051838 (RtlpHpLargeReAlloc.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180095020 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlpHpLargeAllocGetMetadata(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // rcx

  result = *(_QWORD **)(a1 + 56);
  while ( result )
  {
    v3 = result[3] & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 > v3 )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a2 >= v3 )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return 0LL;
}
