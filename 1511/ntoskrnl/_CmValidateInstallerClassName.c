/*
 * XREFs of _CmValidateInstallerClassName @ 0x1404DDCAC
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1404604F8 (_PnpDispatchInstallerClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DE404 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x1404DE594 (_PnpDispatchInterfaceClass.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E5254 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x14053248C (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1404DE530 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
