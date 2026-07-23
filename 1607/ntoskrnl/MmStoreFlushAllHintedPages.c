/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406618F4
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14021D410 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MmStoreFlushAllHintedPages(void)
{
  return MiFlushAllHintedStorePages();
}
