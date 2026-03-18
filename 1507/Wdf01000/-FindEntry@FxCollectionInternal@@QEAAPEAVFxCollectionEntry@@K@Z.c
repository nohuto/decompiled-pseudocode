/*
 * XREFs of ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C000FD9C
 * Callers:
 *     imp_WdfCmResourceListGetDescriptor @ 0x1C0009E70 (imp_WdfCmResourceListGetDescriptor.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C000F1E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1C000FCA8 (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C000FE58 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C001EA64 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x1C002C8E0 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C007F760 (imp_WdfCollectionRemoveItem.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall FxCollectionInternal::FindEntry(FxCollectionInternal *this, unsigned int Index)
{
  int v4; // ecx
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Flink; // rax

  if ( Index < this->m_Count )
  {
    v4 = 0;
    p_m_ListHead = &this->m_ListHead;
    Flink = p_m_ListHead->Flink;
    while ( Flink != p_m_ListHead )
    {
      if ( v4 == Index )
        return &Flink[-1].Blink;
      Flink = Flink->Flink;
      ++v4;
    }
  }
  return 0LL;
}
