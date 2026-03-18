/*
 * XREFs of imp_VfWdfDriverOpenParametersRegistryKey @ 0x1C00C3FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        __int64 DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDRIVER__ *, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFKEY__ **))WdfVersion.Functions.pfnWdfDriverOpenParametersRegistryKey)(
           DriverGlobals,
           Driver,
           DesiredAccess,
           KeyAttributes,
           Key);
}
