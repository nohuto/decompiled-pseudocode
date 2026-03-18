/*
 * XREFs of ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0017008
 * Callers:
 *     imp_WdfRegistryQueryString @ 0x1C0015FF0 (imp_WdfRegistryQueryString.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C00162C8 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfStringCreate @ 0x1C00164A0 (imp_WdfStringCreate.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C00170A4 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C002F000 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0072B10 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceRetrieveDeviceName @ 0x1C0073D70 (imp_WdfDeviceRetrieveDeviceName.c)
 * Callees:
 *     <none>
 */

int __fastcall FxString::Assign(FxString *this, const _UNICODE_STRING *UnicodeString)
{
  return FxDuplicateUnicodeString(this->m_Globals, UnicodeString, &this->m_UnicodeString);
}
