/*
 * XREFs of SepFindSharedSidEntry @ 0x140656380
 * Callers:
 *     SepDeReferenceSharedSidEntries @ 0x140655F84 (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140656408 (SepInsertOrReferenceSharedSidEntries.c)
 * Callees:
 *     RtlLookupEntryHashTable @ 0x140003B40 (RtlLookupEntryHashTable.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     RtlGetNextEntryHashTable @ 0x1400D9E60 (RtlGetNextEntryHashTable.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __fastcall SepFindSharedSidEntry(_DWORD *Sid1)
{
  ULONG_PTR v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  ULONG_PTR v5; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v7; // rdi
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = g_SepSidMapping;
  v3 = 0LL;
  v4 = (unsigned int)*((unsigned __int8 *)Sid1 + 1) - 1;
  v5 = (unsigned int)Sid1[v4 + 2];
  if ( !Sid1[v4 + 2] )
    v5 = 1LL;
  for ( i = RtlLookupEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v5, &Context);
        ;
        i = RtlGetNextEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v1 + 8), &Context) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( RtlEqualSid(Sid1, i[1].Linkage.Blink) )
      return v7;
  }
  return (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3;
}
