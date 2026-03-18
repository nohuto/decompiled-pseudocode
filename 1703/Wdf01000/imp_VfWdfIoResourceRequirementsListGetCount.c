/*
 * XREFs of imp_VfWdfIoResourceRequirementsListGetCount @ 0x1C00CF510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoResourceRequirementsListGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *))WdfVersion.Functions.pfnWdfIoResourceRequirementsListGetCount)(
           DriverGlobals,
           RequirementsList);
}
