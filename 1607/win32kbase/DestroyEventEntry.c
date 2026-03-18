/*
 * XREFs of DestroyEventEntry @ 0x1C00F8C94
 * Callers:
 *     FlushEventEntryList @ 0x1C00F8DD8 (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00F8FD8 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
