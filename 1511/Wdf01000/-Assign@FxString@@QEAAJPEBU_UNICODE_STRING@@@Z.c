/*
 * XREFs of ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0028010
 * Callers:
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0010E10 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfStringCreate @ 0x1C00278F0 (imp_WdfStringCreate.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C00280AC (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0028600 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfRegistryQueryString @ 0x1C0028820 (imp_WdfRegistryQueryString.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0064240 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C0067790 (imp_WdfDeviceRetrieveDeviceName.c)
 * Callees:
 *     <none>
 */

int __fastcall FxString::Assign(FxString *this, const _UNICODE_STRING *UnicodeString)
{
  return FxDuplicateUnicodeString(this->m_Globals, UnicodeString, &this->m_UnicodeString);
}
