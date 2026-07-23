/*
 * XREFs of SepFindMatchingLowBoxHandlesEntry @ 0x140007BB8
 * Callers:
 *     SepGetLowBoxHandlesEntry @ 0x1404106F0 (SepGetLowBoxHandlesEntry.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x140015E90 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x14010ED10 (RtlGetNextEntryHashTable.c)
 *     SepComputeSidSignature @ 0x140411A9C (SepComputeSidSignature.c)
 */

__int64 __fastcall SepFindMatchingLowBoxHandlesEntry(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PSID Sid1,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a3)
{
  ULONG_PTR v6; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v8; // rbx
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  memset(&Context, 0, sizeof(Context));
  v6 = SepComputeSidSignature(Sid1);
  for ( i = RtlLookupEntryHashTable(HashTable, v6, &Context); ; i = RtlGetNextEntryHashTable(HashTable, &Context) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
    {
      *a3 = v8;
      return 0LL;
    }
  }
  *a3 = 0LL;
  return 0LL;
}
