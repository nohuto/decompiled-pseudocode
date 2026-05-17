/*
 * XREFs of RtlpSetHeapWalkEntryOverheadBytes @ 0x1800867AC
 * Callers:
 *     RtlpWalkHeap @ 0x1800916EC (RtlpWalkHeap.c)
 *     RtlpWalkLFHBlock @ 0x180091FA4 (RtlpWalkLFHBlock.c)
 *     RtlpWalkLowFragHeapSegment @ 0x1800F27F0 (RtlpWalkLowFragHeapSegment.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpSetHeapWalkEntryOverheadBytes(__int64 a1, __int64 a2)
{
  bool v2; // zf

  v2 = (*(_BYTE *)(a1 + 18) & 2) == 0;
  *(_BYTE *)(a1 + 16) = a2;
  if ( v2 )
    *(_QWORD *)(a1 + 36) = a2;
}
