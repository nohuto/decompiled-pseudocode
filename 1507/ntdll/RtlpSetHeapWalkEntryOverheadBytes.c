/*
 * XREFs of RtlpSetHeapWalkEntryOverheadBytes @ 0x1800DA620
 * Callers:
 *     RtlpWalkHeap @ 0x1800DAD88 (RtlpWalkHeap.c)
 *     RtlpWalkLFHBlock @ 0x1800F0BF0 (RtlpWalkLFHBlock.c)
 *     RtlpWalkLowFragHeapSegment @ 0x1800F11CC (RtlpWalkLowFragHeapSegment.c)
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
