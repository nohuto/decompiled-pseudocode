/*
 * XREFs of DestroyEventEntry @ 0x1C00283A8
 * Callers:
 *     FlushEventEntryList @ 0x1C00284EC (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x1C00286E8 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
