/*
 * XREFs of RtlLookupEntryHashTable @ 0x140015E90
 * Callers:
 *     SepFindMatchingLowBoxHandlesEntry @ 0x140007BB8 (SepFindMatchingLowBoxHandlesEntry.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepFindMatchingLuidEntry @ 0x1404367C0 (SepFindMatchingLuidEntry.c)
 *     SepFindSharedSidEntry @ 0x1406D8498 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  unsigned int v5; // eax
  unsigned int DivisorMask; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  char *Directory; // rcx
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Flink; // r10
  ULONG_PTR v13; // rdx
  char v15; // [rsp+0h] [rbp-28h] BYREF

  if ( !Context )
    Context = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v15;
  v5 = Signature;
  DivisorMask = HashTable->DivisorMask;
  v7 = (69069 * (v5 >> HashTable->Shift) + 1) & 0xFFFF0000 | ((1103515245 * (v5 >> HashTable->Shift) + 12345) >> 16);
  v8 = v7 & HashTable->DivisorMask;
  if ( v8 < HashTable->Pivot )
    LOWORD(v8) = v7 & ((2 * DivisorMask) | 1);
  if ( HashTable->TableSize > 0x80 )
    Directory = (char *)*((_QWORD *)HashTable->Directory + ((unsigned __int16)v8 >> 7));
  else
    Directory = (char *)HashTable->Directory;
  v10 = (_LIST_ENTRY *)&Directory[16 * (v8 & 0x7F)];
  v11 = v10;
  if ( v10->Flink != v10 )
  {
    do
    {
      Flink = v11->Flink;
      v13 = (ULONG_PTR)v11->Flink[1].Flink;
      if ( v13 && v13 >= Signature )
        break;
      v11 = v11->Flink;
    }
    while ( Flink->Flink != v10 );
  }
  Context->ChainHead = v10;
  Context->PrevLinkage = v11;
  Context->Signature = Signature;
  if ( v10 == v11->Flink || v11->Flink[1].Flink != (struct _LIST_ENTRY *)Signature )
    return 0LL;
  else
    return (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v11->Flink;
}
