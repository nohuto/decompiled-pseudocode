/*
 * XREFs of imp_VfWdfIoResourceRequirementsListRemove @ 0x1C00C4AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoResourceRequirementsListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemove(DriverGlobals, RequirementsList, Index);
}
