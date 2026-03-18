/*
 * XREFs of imp_WdfIoResourceRequirementsListInsertIoResList @ 0x1C007EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall imp_WdfIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 RequirementsList,
        unsigned __int64 IoResList,
        unsigned int Index)
{
  return FxIoResourceRequirementsListInsertIoResList(DriverGlobals, RequirementsList, IoResList, Index);
}
