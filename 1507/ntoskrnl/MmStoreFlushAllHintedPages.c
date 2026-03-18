/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406AA874
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140252D08 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MmStoreFlushAllHintedPages(void)
{
  return MiFlushAllHintedStorePages();
}
