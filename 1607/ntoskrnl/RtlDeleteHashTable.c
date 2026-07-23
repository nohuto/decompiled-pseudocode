/*
 * XREFs of RtlDeleteHashTable @ 0x1400B30C8
 * Callers:
 *     RtlpCreateHashTable @ 0x1400A7AEC (RtlpCreateHashTable.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400AE144 (SepDeleteSessionLowboxEntries.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405489BC (SepInitializeLowBoxNumberTable.c)
 *     SepRmDestroyCapTable @ 0x14069687C (SepRmDestroyCapTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
