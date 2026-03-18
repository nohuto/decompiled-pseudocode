/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14011AE9C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     MmStoreAsyncWriteComplete @ 0x14011AE4C (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall MiStoreFreeWriteSupport(struct _SLIST_ENTRY *a1, union _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[72].Alignment) >= 0x100u )
    ExFreePoolWithTag(a1, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 72, a1);
}
