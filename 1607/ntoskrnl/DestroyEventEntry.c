/*
 * XREFs of DestroyEventEntry @ 0x1400AF218
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14009EF40 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1400AF188 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
