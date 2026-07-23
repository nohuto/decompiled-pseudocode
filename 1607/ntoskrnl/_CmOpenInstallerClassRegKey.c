/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1404DA9EC
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404B757C (_CmGetDeviceSoftwareKey.c)
 *     _PnpDispatchInstallerClass @ 0x1404BB7AC (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404BBA40 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiCMOpenClassKey @ 0x1404C94B4 (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E7094 (_CmGetInstallerClassRegPropWorker.c)
 *     PpForEachDeviceInstanceDriver @ 0x14050F6D0 (PpForEachDeviceInstanceDriver.c)
 *     _CmCreateInstallerClassWorker @ 0x1406D7658 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D98C0 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1406DCD58 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406DF42C (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1404DAA2C (_CmOpenCommonClassRegKey.c)
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
