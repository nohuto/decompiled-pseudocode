/*
 * XREFs of ?Dispose@FxDevice@@UEAAEXZ @ 0x1C007D960
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000C1C0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C003F364 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C007426C (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C007CE70 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C007F244 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDevice::Dispose(FxDevice *this, unsigned __int8 a2)
{
  FxWmiIrpHandler *m_PkgWmi; // rcx
  FxDisposeList *m_DisposeList; // rcx

  if ( !this->m_Legacy )
    return 1;
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi, a2);
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList);
  FxDevice::Destroy(this);
  return 0;
}
