/*
 * XREFs of ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C000FED4
 * Callers:
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C000FF70 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0028DE0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryString @ 0x1C002C6C0 (imp_WdfRegistryQueryString.c)
 *     imp_WdfStringCreate @ 0x1C002D430 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C006BFC0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C0071A60 (imp_WdfDeviceRetrieveDeviceName.c)
 * Callees:
 *     <none>
 */

int __fastcall FxString::Assign(FxString *this, const _UNICODE_STRING *UnicodeString)
{
  return FxDuplicateUnicodeString(this->m_Globals, UnicodeString, &this->m_UnicodeString);
}
