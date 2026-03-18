/*
 * XREFs of imp_WdfCmResourceListInsertDescriptor @ 0x1C007EA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall imp_WdfCmResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  return FxCmResourceListInsertDescriptor(DriverGlobals, List, Descriptor, Index);
}
