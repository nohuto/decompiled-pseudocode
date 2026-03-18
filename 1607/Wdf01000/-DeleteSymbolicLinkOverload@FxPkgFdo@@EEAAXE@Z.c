/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C0098D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgFdo::DeleteSymbolicLinkOverload(FxPkgFdo *this, unsigned __int8 GracefulRemove)
{
  FxDevice::DeleteSymbolicLink(this->m_Device);
}
