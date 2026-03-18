/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14052E4C8
 * Callers:
 *     RtlAddRange @ 0x14052D680 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x14052DDD4 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x14052E27C (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14052E334 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14052E46C (RtlpDeleteRangeListEntry.c)
 *     RtlpDeleteFromMergedRange @ 0x14054D3CC (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
