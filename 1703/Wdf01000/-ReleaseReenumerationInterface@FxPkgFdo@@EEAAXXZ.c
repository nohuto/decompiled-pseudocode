/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C009D350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgFdo::ReleaseReenumerationInterface(FxPkgFdo *this)
{
  FxSystemWorkItem *m_SurpriseRemoveAndReenumerateSelfWorkItem; // rcx
  void (__fastcall *InterfaceDereference)(void *); // rax

  m_SurpriseRemoveAndReenumerateSelfWorkItem = this->m_SurpriseRemoveAndReenumerateSelfWorkItem;
  if ( m_SurpriseRemoveAndReenumerateSelfWorkItem )
  {
    m_SurpriseRemoveAndReenumerateSelfWorkItem->DeleteObject(m_SurpriseRemoveAndReenumerateSelfWorkItem);
    this->m_SurpriseRemoveAndReenumerateSelfWorkItem = 0LL;
  }
  this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf = 0LL;
  InterfaceDereference = this->m_SurpriseRemoveAndReenumerateSelfInterface.InterfaceDereference;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
}
