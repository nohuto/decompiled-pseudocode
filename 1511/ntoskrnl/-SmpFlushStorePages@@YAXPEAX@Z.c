/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140203A60
 * Callers:
 *     <none>
 * Callees:
 *     MmStoreFlushAllHintedPages @ 0x14062CDC0 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(struct _KEVENT *a1)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(a1, 0, 0);
}
