/*
 * XREFs of imp_VfWdfIoResourceRequirementsListSetInterfaceType @ 0x1C00CBB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoResourceRequirementsListSetInterfaceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 InterfaceType)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetInterfaceType(
    DriverGlobals,
    RequirementsList,
    (_INTERFACE_TYPE)InterfaceType);
}
