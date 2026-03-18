/*
 * XREFs of imp_VfWdfIoResourceRequirementsListAppendIoResList @ 0x1C00CF4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoResourceRequirementsListAppendIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *, WDFIORESLIST__ *))WdfVersion.Functions.pfnWdfIoResourceRequirementsListAppendIoResList)(
           DriverGlobals,
           RequirementsList,
           IoResList);
}
