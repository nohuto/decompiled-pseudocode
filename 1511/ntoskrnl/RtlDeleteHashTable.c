/*
 * XREFs of RtlDeleteHashTable @ 0x1400F4564
 * Callers:
 *     SepDeleteSessionLowboxEntries @ 0x1400D52A0 (SepDeleteSessionLowboxEntries.c)
 *     RtlpCreateHashTable @ 0x1400E5870 (RtlpCreateHashTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x14050D018 (SepInitializeLowBoxNumberTable.c)
 *     SepRmDestroyCapTable @ 0x140656E28 (SepRmDestroyCapTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *Directory; // rcx
  void *v3; // rdi
  unsigned int v4; // ebp
  PVOID *v5; // rsi

  if ( HashTable->TableSize <= 0x80 )
  {
    Directory = HashTable->Directory;
    if ( !Directory )
      goto LABEL_4;
    goto LABEL_3;
  }
  v3 = HashTable->Directory;
  if ( v3 )
  {
    v4 = 0;
    v5 = (PVOID *)HashTable->Directory;
    do
    {
      if ( !*v5 )
        break;
      ExFreePoolWithTag(*v5, 0);
      ++v4;
      ++v5;
    }
    while ( v4 < 0x10 );
    Directory = v3;
LABEL_3:
    ExFreePoolWithTag(Directory, 0);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    ExFreePoolWithTag(HashTable, 0);
}
