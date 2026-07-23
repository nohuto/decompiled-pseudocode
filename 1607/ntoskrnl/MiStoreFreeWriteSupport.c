/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14011B40C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MmStoreAsyncWriteComplete @ 0x14011B3BC (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall MiStoreFreeWriteSupport(_SLIST_ENTRY *a1, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[72].Alignment) >= 0x100u )
    ExFreePoolWithTag(a1, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 72, a1);
}
