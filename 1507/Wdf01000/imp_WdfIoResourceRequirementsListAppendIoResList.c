/*
 * XREFs of imp_WdfIoResourceRequirementsListAppendIoResList @ 0x1C007EC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall imp_WdfIoResourceRequirementsListAppendIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  return FxIoResourceRequirementsListInsertIoResList(
           DriverGlobals,
           (unsigned __int64)RequirementsList,
           (unsigned __int64)IoResList,
           0xFFFFFFFF);
}
