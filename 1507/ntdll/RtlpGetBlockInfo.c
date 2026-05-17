/*
 * XREFs of RtlpGetBlockInfo @ 0x1800DEB4C
 * Callers:
 *     RtlpGetHeapBlock @ 0x1800DEB94 (RtlpGetHeapBlock.c)
 *     RtlpPushPageDescriptor @ 0x1800DEEF4 (RtlpPushPageDescriptor.c)
 *     RtlpScanHeapAllocBlocks @ 0x1800DF0D8 (RtlpScanHeapAllocBlocks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetBlockInfo(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  while ( 1 )
  {
    if ( a2 < a1[1] || a2 > a1[2] )
      return 0LL;
    v2 = a2 <= a1[1] ? 0LL : (a2 - a1[1]) / *a1;
    if ( *a1 == 4096LL )
      break;
    a1 = (_QWORD *)a1[v2 + 7];
    if ( !a1 )
      return 0LL;
  }
  return a1[v2 + 7];
}
