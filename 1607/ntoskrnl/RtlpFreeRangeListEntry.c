/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14055AED8
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140558450 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x14055A080 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x14055A7C8 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x14055AC8C (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14055AD44 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14055AE7C (RtlpDeleteRangeListEntry.c)
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
