/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1404DE0A0
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     _PnpDispatchInstallerClass @ 0x1404604F8 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14046082C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404AF568 (_CmGetDeviceSoftwareKey.c)
 *     PiCMOpenClassKey @ 0x1404BE4F4 (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404DDE30 (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     _CmCreateInstallerClassWorker @ 0x1406929FC (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140694860 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140697840 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406993A0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1404DE0E0 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 32, 0, a5, a6, a7, a8);
}
