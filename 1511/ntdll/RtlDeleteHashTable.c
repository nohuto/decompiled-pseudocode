/*
 * XREFs of RtlDeleteHashTable @ 0x18007ED10
 * Callers:
 *     RtlpCreateHashTable @ 0x18006FDC8 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

LOGICAL __cdecl RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  void *Directory; // r8
  LOGICAL result; // eax
  void *v4; // rdi
  unsigned int v5; // ebp
  PVOID *v6; // rsi

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
    v6 = (PVOID *)HashTable->Directory;
    do
    {
      if ( !*v6 )
        break;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v6);
      ++v5;
      ++v6;
    }
    while ( v5 < 0x10 );
    Directory = v4;
LABEL_3:
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
  }
LABEL_4:
  if ( (HashTable->Flags & 1) != 0 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, HashTable);
  return result;
}
