/*
 * XREFs of SepFindMatchingLowBoxNumberEntries @ 0x14040849C
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x1404082B8 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x14002CF80 (RtlInitEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140103D60 (RtlEnumerateEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x1401258A0 (RtlEndEnumerationHashTable.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SepFindMatchingLowBoxNumberEntries(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        int a2,
        int a3,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY *a5)
{
  char v9; // di
  char v10; // bl
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v11; // rax
  int Signature; // ecx
  bool v13; // zf
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-48h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v9 = 0;
  v10 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  if ( !RtlInitEnumerationHashTable(HashTable, &Enumerator) )
    return 3221226021LL;
  while ( 1 )
  {
    v11 = RtlEnumerateEntryHashTable(HashTable, &Enumerator);
    if ( !v11 )
      break;
    Signature = v11[1].Signature;
    if ( Signature == a2 )
    {
      v9 = 1;
      *a4 = v11;
      v13 = v10 == 1;
      goto LABEL_7;
    }
    if ( Signature == a3 )
    {
      v10 = 1;
      *a5 = v11;
      v13 = v9 == 1;
LABEL_7:
      if ( v13 )
        break;
    }
  }
  RtlEndEnumerationHashTable(HashTable, &Enumerator);
  if ( v9 == 1 && v10 == 1 )
    return 0LL;
  return 3221226021LL;
}
