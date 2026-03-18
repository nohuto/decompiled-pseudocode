/*
 * XREFs of RtlDeleteHashTable @ 0x140131B40
 * Callers:
 *     SepDeleteSessionLowboxEntries @ 0x140117340 (SepDeleteSessionLowboxEntries.c)
 *     RtlpCreateHashTable @ 0x14011F4D0 (RtlpCreateHashTable.c)
 *     SepInitializeLowBoxNumberTable @ 0x14056C2F0 (SepInitializeLowBoxNumberTable.c)
 *     SepRmDestroyCapTable @ 0x1406D92E0 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpSecondLevelDirFreeUsingFreeList @ 0x140130D38 (RtlpSecondLevelDirFreeUsingFreeList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *v2; // rcx
  _QWORD *Directory; // rdi
  int v4; // ebp
  __int64 i; // rsi
  unsigned __int64 v6; // rcx

  if ( HashTable->TableSize > 0x80 )
  {
    Directory = HashTable->Directory;
    if ( Directory )
    {
      v4 = 0;
      for ( i = 0LL; i < 512; ++i )
      {
        v6 = Directory[i];
        if ( !v6 )
          break;
        RtlpSecondLevelDirFreeUsingFreeList(v6);
        ++v4;
      }
      ExFreePoolWithTag(Directory, 0);
    }
  }
  else
  {
    v2 = HashTable->Directory;
    if ( v2 )
      RtlpSecondLevelDirFreeUsingFreeList((unsigned __int64)v2);
  }
  if ( (HashTable->Flags & 1) != 0 )
    ExFreePoolWithTag(HashTable, 0);
}
