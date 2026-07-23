/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14010D5B4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     MmStoreAsyncWriteComplete @ 0x14010D564 (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall MiStoreFreeWriteSupport(_SLIST_ENTRY *a1, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[73].Alignment) >= 0x100u )
    ExFreePoolWithTag(a1, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 73, a1);
}
