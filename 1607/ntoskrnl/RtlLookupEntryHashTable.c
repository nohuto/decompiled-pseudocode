/*
 * XREFs of RtlLookupEntryHashTable @ 0x14007FB60
 * Callers:
 *     SepFindMatchingLowBoxHandlesEntry @ 0x14007FAD8 (SepFindMatchingLowBoxHandlesEntry.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     SepIsValidProcUniqueLuid @ 0x140694778 (SepIsValidProcUniqueLuid.c)
 *     SepFindSharedSidEntry @ 0x140695DD4 (SepFindSharedSidEntry.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v5; // r10
  unsigned int v6; // ecx
  __int64 v7; // r8
  char *Directory; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v9; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY *v10; // rdx
  _QWORD *v11; // rax
  ULONG_PTR v12; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  unsigned int v14; // ecx
  char v15; // [rsp+0h] [rbp-28h] BYREF

  v5 = Context;
  if ( !Context )
    v5 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)&v15;
  v6 = (69069 * ((unsigned int)Signature >> HashTable->Shift) + 1) & 0xFFFF0000 | ((1103515245
                                                                                  * ((unsigned int)Signature >> HashTable->Shift)
                                                                                  + 12345) >> 16);
  v7 = v6 & HashTable->DivisorMask;
  if ( (unsigned int)v7 < HashTable->Pivot )
    v7 = v6 & ((2 * HashTable->DivisorMask) | 1);
  if ( HashTable->TableSize > 0x80 )
  {
    _BitScanReverse(&v14, v7 + 128);
    v7 = ((_DWORD)v7 + 128) ^ (unsigned int)(1 << v14);
    Directory = (char *)*((_QWORD *)HashTable->Directory + v14 - 7);
  }
  else
  {
    Directory = (char *)HashTable->Directory;
  }
  v9 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)&Directory[16 * v7];
  v10 = v9;
  if ( *v9 != (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v9 )
  {
    do
    {
      v11 = *v10;
      v12 = (*v10)->Signature;
      if ( v12 && v12 >= Signature )
        break;
      v10 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v10;
    }
    while ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v11 != v9 );
  }
  v5->ChainHead = (_LIST_ENTRY *)v9;
  v5->PrevLinkage = (_LIST_ENTRY *)v10;
  v5->Signature = Signature;
  result = *v10;
  if ( v9 == (PRTL_DYNAMIC_HASH_TABLE_ENTRY *)*v10 || result->Signature != Signature )
    return 0LL;
  return result;
}
