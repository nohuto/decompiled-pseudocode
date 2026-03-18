/*
 * XREFs of imp_VfWdfChildListBeginIteration @ 0x1C00C3090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfChildListBeginIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  WdfVersion.Functions.pfnWdfChildListBeginIteration(DriverGlobals, ChildList, Iterator);
}
