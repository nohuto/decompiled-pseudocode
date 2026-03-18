/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14021D5E4
 * Callers:
 *     <none>
 * Callees:
 *     MmStoreFlushAllHintedPages @ 0x140661810 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(struct _KEVENT *a1)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(a1, 0, 0);
}
