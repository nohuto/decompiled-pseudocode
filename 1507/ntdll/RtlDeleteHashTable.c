/*
 * XREFs of RtlDeleteHashTable @ 0x180078140
 * Callers:
 *     RtlpCreateHashTable @ 0x180065898 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

LOGICAL __cdecl RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *Directory; // r8
  LOGICAL result; // eax
  _QWORD *v4; // rdi
  int v5; // ebp
  __int64 i; // rsi
  void *v7; // r8

  if ( HashTable->TableSize <= 0x80 )
  {
    Directory = HashTable->Directory;
    if ( !Directory )
      goto LABEL_4;
    goto LABEL_3;
  }
  v4 = HashTable->Directory;
  if ( v4 )
  {
    v5 = 0;
    for ( i = 0LL; i < 512; ++i )
    {
      v7 = (void *)v4[i];
      if ( !v7 )
        break;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      ++v5;
    }
    Directory = v4;
LABEL_3:
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, HashTable);
  return result;
}
