/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x140661810
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14021D5E4 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 MmStoreFlushAllHintedPages(void)
{
  return MiFlushAllHintedStorePages();
}
