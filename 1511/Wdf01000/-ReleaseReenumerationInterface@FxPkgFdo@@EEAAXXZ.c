/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C008A960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgFdo::ReleaseReenumerationInterface(FxPkgFdo *this)
{
  void (__fastcall *InterfaceDereference)(void *); // rax

  this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf = 0LL;
  InterfaceDereference = this->m_SurpriseRemoveAndReenumerateSelfInterface.InterfaceDereference;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
}
