/*
 * XREFs of DestroyEventEntry @ 0x1402687A0
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1401B0620 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x1403E2068 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
