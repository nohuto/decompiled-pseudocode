/*
 * XREFs of RtlpSetHeapWalkEntryOverheadBytes @ 0x1800010E0
 * Callers:
 *     RtlpWalkLowFragHeapSegment @ 0x180001070 (RtlpWalkLowFragHeapSegment.c)
 *     RtlpWalkHeap @ 0x18004D474 (RtlpWalkHeap.c)
 *     RtlpWalkLFHBlock @ 0x18004DBC8 (RtlpWalkLFHBlock.c)
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
