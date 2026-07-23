/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14021D410
 * Callers:
 *     <none>
 * Callees:
 *     MmStoreFlushAllHintedPages @ 0x1406618F4 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(struct _KEVENT *a1)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(a1, 0, 0);
}
