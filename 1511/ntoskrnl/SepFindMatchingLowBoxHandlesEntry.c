/*
 * XREFs of SepFindMatchingLowBoxHandlesEntry @ 0x140003798
 * Callers:
 *     SepGetLowBoxHandlesEntry @ 0x1403BDF84 (SepGetLowBoxHandlesEntry.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x140003B40 (RtlLookupEntryHashTable.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     RtlGetNextEntryHashTable @ 0x1400D9E60 (RtlGetNextEntryHashTable.c)
 *     SepComputeSidSignature @ 0x1403BF0A0 (SepComputeSidSignature.c)
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
