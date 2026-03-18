/*
 * XREFs of RtlInsertEntryHashTable @ 0x14002D070
 * Callers:
 *     SepGetLowBoxHandlesEntry @ 0x1404106F0 (SepGetLowBoxHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406D8520 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpPopulateContext @ 0x14002CFE4 (RtlpPopulateContext.c)
 *     RtlpGetChainHead @ 0x14002D164 (RtlpGetChainHead.c)
 */

BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rdx
  _QWORD *ChainHead; // rax
  unsigned __int64 v10; // r9
  _QWORD *v11; // rcx
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *Flink; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r8
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = Context;
  Entry->Signature = Signature;
  ++HashTable->NumEntries;
  if ( Context )
  {
    if ( !Context->ChainHead )
      RtlpPopulateContext(HashTable, (__int64)Context, Signature);
  }
  else
  {
    v7 = (69069 * ((unsigned int)Signature >> HashTable->Shift) + 1) & 0xFFFF0000 | ((1103515245
                                                                                    * ((unsigned int)Signature >> HashTable->Shift)
                                                                                    + 12345) >> 16);
    v8 = v7 & HashTable->DivisorMask;
    if ( (unsigned int)v8 < HashTable->Pivot )
      v8 = v7 & ((2 * HashTable->DivisorMask) | 1);
    ChainHead = (_QWORD *)RtlpGetChainHead(HashTable, v8);
    v11 = ChainHead;
    if ( (_QWORD *)*ChainHead != ChainHead )
    {
      do
      {
        v15 = (_QWORD *)*v11;
        v16 = *(_QWORD *)(*v11 + 16LL);
        if ( v16 && v16 >= v10 )
          break;
        v11 = (_QWORD *)*v11;
      }
      while ( (_QWORD *)*v15 != ChainHead );
    }
    v17[0] = ChainHead;
    v4 = (PRTL_DYNAMIC_HASH_TABLE_CONTEXT)v17;
    v17[1] = v11;
    v17[2] = v10;
  }
  if ( v4->ChainHead->Flink == v4->ChainHead )
    ++HashTable->NonEmptyBuckets;
  PrevLinkage = v4->PrevLinkage;
  Flink = PrevLinkage->Flink;
  Entry->Linkage.Flink = PrevLinkage->Flink;
  Entry->Linkage.Blink = PrevLinkage;
  if ( Flink->Blink != PrevLinkage )
    __fastfail(3u);
  Flink->Blink = &Entry->Linkage;
  PrevLinkage->Flink = &Entry->Linkage;
  return 1;
}
