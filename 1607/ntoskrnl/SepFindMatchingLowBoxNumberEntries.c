/*
 * XREFs of SepFindMatchingLowBoxNumberEntries @ 0x1403E1E40
 * Callers:
 *     SepIsParentOfChildAppContainer @ 0x1404E71CC (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x14007CF48 (RtlInitEnumerationHashTable.c)
 *     RtlEnumerateEntryHashTable @ 0x140092020 (RtlEnumerateEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140092170 (RtlEndEnumerationHashTable.c)
 *     memset @ 0x1401715C0 (memset.c)
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
  int Signature; // ecx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v13; // rax
  bool v14; // zf
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-48h] BYREF

  v9 = 0;
  v10 = 0;
  memset(&Enumerator, 0, sizeof(Enumerator));
  *a4 = 0LL;
  *a5 = 0LL;
  if ( !RtlInitEnumerationHashTable(HashTable, &Enumerator) )
    return 3221226021LL;
  while ( 1 )
  {
    v13 = RtlEnumerateEntryHashTable(HashTable, &Enumerator);
    if ( !v13 )
      break;
    Signature = v13[1].Signature;
    if ( Signature == a2 )
    {
      v9 = 1;
      *a4 = v13;
      v14 = v10 == 1;
LABEL_8:
      if ( v14 )
        break;
    }
    else if ( Signature == a3 )
    {
      v10 = 1;
      *a5 = v13;
      v14 = v9 == 1;
      goto LABEL_8;
    }
  }
  RtlEndEnumerationHashTable(HashTable, &Enumerator);
  if ( v9 != 1 || v10 != 1 )
    return 3221226021LL;
  return 0LL;
}
