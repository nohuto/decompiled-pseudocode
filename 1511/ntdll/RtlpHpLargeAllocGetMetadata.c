/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x18005A7FC
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x180001850 (RtlpHpLargeReAlloc.c)
 *     RtlpWalkHeapInternal @ 0x18004FCE4 (RtlpWalkHeapInternal.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x18005A3C4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x18005A418 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180093700 (RtlpQueryExtendedInformationHeap.c)
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
