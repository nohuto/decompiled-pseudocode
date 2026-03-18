/*
 * XREFs of _CmValidateInstallerClassName @ 0x140440558
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x140440044 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x140458418 (_PnpDispatchInterfaceClass.c)
 *     _CmGetDeviceInterfaceName @ 0x140459864 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInstallerClass @ 0x14057E91C (_PnpDispatchInstallerClass.c)
 *     _CmClassSubkeyCallback @ 0x1405A966C (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x14043FF5C (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return !PnpIsValidGuidString(a2) ? 0xC0000033 : 0;
}
