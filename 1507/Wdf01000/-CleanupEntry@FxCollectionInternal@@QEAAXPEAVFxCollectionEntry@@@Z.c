/*
 * XREFs of ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C000FDCC
 * Callers:
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C000FE10 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     imp_WdfCollectionRemove @ 0x1C007F540 (imp_WdfCollectionRemove.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C007F760 (imp_WdfCollectionRemoveItem.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxCollectionInternal::CleanupEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rax

  Flink = Entry->m_ListEntry.Flink;
  Blink = Entry->m_ListEntry.Blink;
  if ( Flink->Blink != &Entry->m_ListEntry || Blink->Flink != &Entry->m_ListEntry )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( Entry )
    FxPoolFree(Entry);
  --this->m_Count;
}
