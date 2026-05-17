/*
 * XREFs of RtlpFindEntry @ 0x18004BE88
 * Callers:
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x18004BF00 (RtlpCreateSplitBlock.c)
 *     RtlZeroHeap @ 0x1800EBC50 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x18004B1F0 (RtlpHeapFindListLookupEntry.c)
 */

__int64 *__fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 i; // rax
  __int64 v6; // rax
  int v7; // ecx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 312);
  for ( i = *(unsigned int *)(v2 + 8); a2 >= i; i = *(unsigned int *)(v6 + 8) )
  {
    v6 = *(_QWORD *)v2;
    if ( !*(_QWORD *)v2 )
    {
      v7 = *(_DWORD *)(v2 + 8) - 1;
      goto LABEL_6;
    }
    v2 = *(_QWORD *)v2;
  }
  v7 = a2;
LABEL_6:
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(a1, v2, 1, v7, a2);
    if ( result )
      break;
    v2 = *(_QWORD *)v2;
    v7 = *(_DWORD *)(v2 + 24);
  }
  return result;
}
