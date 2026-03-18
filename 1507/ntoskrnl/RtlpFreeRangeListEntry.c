/*
 * XREFs of RtlpFreeRangeListEntry @ 0x1405A0E48
 * Callers:
 *     RtlAddRange @ 0x1405A0000 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1405A0754 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x1405A0BFC (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x1405A0CB4 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x1405A0DEC (RtlpDeleteRangeListEntry.c)
 *     RtlpDeleteFromMergedRange @ 0x1405C4B74 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToNPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
