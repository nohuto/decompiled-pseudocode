/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14055A998
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140557F10 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x140559B40 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x14055A288 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x14055A74C (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14055A804 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14055A93C (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
