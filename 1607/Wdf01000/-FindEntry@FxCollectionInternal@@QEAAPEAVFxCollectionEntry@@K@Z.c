/*
 * XREFs of ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0019CB0
 * Callers:
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0016A40 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     imp_WdfIoResourceListGetDescriptor @ 0x1C00197A0 (imp_WdfIoResourceListGetDescriptor.c)
 *     imp_WdfCmResourceListGetDescriptor @ 0x1C0019820 (imp_WdfCmResourceListGetDescriptor.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1C0019BBC (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0019D24 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C00202C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C0080600 (imp_WdfCollectionRemoveItem.c)
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
