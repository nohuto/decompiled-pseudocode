/*
 * XREFs of ?Dispose@FxDevice@@UEAAEXZ @ 0x1C00769A0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0009884 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0015818 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0069F94 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0075D20 (-Destroy@FxDevice@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDevice::Dispose(FxDevice *this, __int64 a2, unsigned __int8 a3)
{
  FxWmiIrpHandler *m_PkgWmi; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v7; // rax
  FxObject *p_Blink; // rcx
  FxDisposeList *m_DisposeList; // rcx

  if ( !this->m_Legacy )
    return 1;
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi, a2);
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  p_m_ChildListHead = &this->m_ChildListHead;
  while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    Flink = p_m_ChildListHead->Flink;
    v7 = p_m_ChildListHead->Flink->Flink;
    if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v7->Blink != Flink )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v7;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v7->Blink = p_m_ChildListHead;
    p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
    p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
    FxObject::ParentDeleteEvent(p_Blink);
  }
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList, a2, a3);
  FxDevice::Destroy(this);
  return 0;
}
