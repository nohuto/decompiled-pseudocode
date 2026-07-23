/*
 * XREFs of MiStoreFreeWriteSupport @ 0x14013F1A4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     MmStoreAsyncWriteComplete @ 0x14013F13C (MmStoreAsyncWriteComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall MiStoreFreeWriteSupport(_SLIST_ENTRY *a1, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[71].Alignment) >= 0x100u )
    ExFreePoolWithTag(a1, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 71, a1);
}
