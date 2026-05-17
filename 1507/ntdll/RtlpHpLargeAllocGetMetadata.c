/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x1800588CC
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180002498 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeReAlloc @ 0x180058360 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAllocSize @ 0x180058520 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800D9C20 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpLargeWalkHeap @ 0x1800F05CC (RtlpHpLargeWalkHeap.c)
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
    if ( a2 < v3 )
    {
      result = (_QWORD *)*result;
    }
    else
    {
      if ( a2 <= v3 )
        return result;
      result = (_QWORD *)result[1];
    }
  }
  return 0LL;
}
