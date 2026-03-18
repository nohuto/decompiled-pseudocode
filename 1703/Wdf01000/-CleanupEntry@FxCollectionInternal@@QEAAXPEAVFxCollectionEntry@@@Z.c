/*
 * XREFs of ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C0030974
 * Callers:
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0030A40 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     imp_WdfCollectionRemove @ 0x1C003D550 (imp_WdfCollectionRemove.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C0084BD0 (imp_WdfCollectionRemoveItem.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
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
