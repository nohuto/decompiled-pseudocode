/*
 * XREFs of imp_WdfIoResourceRequirementsListInsertIoResList @ 0x1C007EEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall imp_WdfIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList,
        unsigned int Index)
{
  return FxIoResourceRequirementsListInsertIoResList(DriverGlobals, RequirementsList, IoResList, Index);
}
