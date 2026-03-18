/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1404F7A60
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404C7E9C (PpForEachDeviceInstanceDriver.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404D3ADC (_CmGetDeviceSoftwareKey.c)
 *     _PnpDispatchInstallerClass @ 0x1404D81A8 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404D843C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PiCMOpenClassKey @ 0x1404E6B44 (PiCMOpenClassKey.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140504104 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x1406D7520 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D9788 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1406DCC20 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406DF2F4 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1404F7AA0 (_CmOpenCommonClassRegKey.c)
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
