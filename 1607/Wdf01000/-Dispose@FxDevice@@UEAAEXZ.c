/*
 * XREFs of ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0079C10
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00089B0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0038554 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x1C0063DF0 (-CallCleanup@FxObject@@QEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0070904 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C0078FDC (-Destroy@FxDevice@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDevice::Dispose(FxDevice *this, unsigned __int8 a2)
{
  FxWmiIrpHandler *m_PkgWmi; // rcx
  __int64 v4; // rdx
  unsigned __int8 v5; // r8
  FxDisposeList *m_DisposeList; // rcx

  if ( !this->m_Legacy )
    return 1;
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi, a2);
  FxObject::CallCleanup(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList, v4, v5);
  FxDevice::Destroy(this);
  return 0;
}
