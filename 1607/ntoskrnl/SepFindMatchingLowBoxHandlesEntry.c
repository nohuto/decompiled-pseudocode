/*
 * XREFs of SepFindMatchingLowBoxHandlesEntry @ 0x14007FAD8
 * Callers:
 *     SepGetLowBoxHandlesEntry @ 0x140474800 (SepGetLowBoxHandlesEntry.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlLookupEntryHashTable @ 0x14007FB60 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140096EC0 (RtlGetNextEntryHashTable.c)
 *     SepComputeSidSignature @ 0x140475C20 (SepComputeSidSignature.c)
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
    {
      *a3 = 0LL;
      return 0LL;
    }
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
      break;
  }
  *a3 = v8;
  return 0LL;
}
