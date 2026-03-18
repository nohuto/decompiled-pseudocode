/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x14062CDC0
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140203A60 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MmStoreFlushAllHintedPages(__int64 a1, __int64 a2, __int64 a3)
{
  return MiFlushAllHintedStorePages(a1, a2, a3);
}
