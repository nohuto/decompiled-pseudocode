/*
 * XREFs of RtlpGetHeapWalkEntryOverheadBytes @ 0x1800867E8
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180093700 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetHeapWalkEntryOverheadBytes(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 18) & 2) != 0 )
    return *(unsigned __int8 *)(a1 + 16);
  else
    return *(_QWORD *)(a1 + 36);
}
