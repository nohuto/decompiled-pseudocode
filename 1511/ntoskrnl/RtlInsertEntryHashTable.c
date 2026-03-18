/*
 * XREFs of RtlInsertEntryHashTable @ 0x140006C90
 * Callers:
 *     SepGetLowBoxHandlesEntry @ 0x1403BDF84 (SepGetLowBoxHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x1403BEF4C (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x1403C5868 (SepAddLuidToIndexEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140656408 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1406567C8 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140006BF8 (RtlpPopulateContext.c)
 *     RtlpGetChainHead @ 0x140006D94 (RtlpGetChainHead.c)
 */

BOOLEAN __stdcall RtlInsertEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  PRTL_DYNAMIC_HASH_TABLE_CONTEXT v4; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  _QWORD *ChainHead; // rax
  unsigned __int64 v10; // r10
  _QWORD *v11; // r8
  struct _LIST_ENTRY *PrevLinkage; // rax
  struct _LIST_ENTRY *Flink; // rcx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  Entry->Signature = Signature;
  v4 = Context;
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
