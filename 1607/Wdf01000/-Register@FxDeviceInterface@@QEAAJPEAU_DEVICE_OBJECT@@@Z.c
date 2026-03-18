/*
 * XREFs of ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0015954
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002C180 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxDeviceInterface::Register(FxDeviceInterface *this, _DEVICE_OBJECT *Pdo)
{
  _UNICODE_STRING *p_m_ReferenceString; // r8

  p_m_ReferenceString = 0LL;
  if ( this->m_ReferenceString.Length )
    p_m_ReferenceString = &this->m_ReferenceString;
  return IoRegisterDeviceInterface(Pdo, &this->m_InterfaceClassGUID, p_m_ReferenceString, &this->m_SymbolicLinkName);
}
