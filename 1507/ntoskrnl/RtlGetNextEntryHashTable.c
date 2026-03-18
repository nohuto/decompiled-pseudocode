/*
 * XREFs of RtlGetNextEntryHashTable @ 0x14010ED10
 * Callers:
 *     SepFindMatchingLowBoxHandlesEntry @ 0x140007BB8 (SepFindMatchingLowBoxHandlesEntry.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x1404367C0 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1406D8498 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlGetNextEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Flink; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax

  Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Context->PrevLinkage->Flink;
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Linkage.Flink;
  if ( Flink->Linkage.Flink == Context->ChainHead )
    return 0LL;
  if ( HashTable->NumEnumerators )
  {
    do
    {
      result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Linkage.Flink;
      if ( Flink->Linkage.Flink[1].Flink )
        break;
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Flink->Linkage.Flink;
    }
    while ( result->Linkage.Flink != Context->ChainHead );
  }
  if ( result->Signature != Context->Signature )
    return 0LL;
  Context->PrevLinkage = &Flink->Linkage;
  return result;
}
