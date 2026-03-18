/*
 * XREFs of _CmValidateInstallerClassName @ 0x1404F6E60
 * Callers:
 *     _CmGetDeviceInterfaceName @ 0x140487220 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInstallerClass @ 0x1404D81A8 (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchInterfaceClass @ 0x1404F6648 (_PnpDispatchInterfaceClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404F7D8C (_CmGetCommonClassRegKeyPath.c)
 *     _CmClassSubkeyCallback @ 0x140562FC0 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1404F7EB8 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
