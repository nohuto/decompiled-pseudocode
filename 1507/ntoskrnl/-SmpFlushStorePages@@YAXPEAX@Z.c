/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140252D08
 * Callers:
 *     <none>
 * Callees:
 *     MmStoreFlushAllHintedPages @ 0x1406AA874 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(struct _KEVENT *a1)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(a1, 0, 0);
}
