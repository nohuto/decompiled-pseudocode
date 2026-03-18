/*
 * XREFs of imp_WdfCmResourceListAppendDescriptor @ 0x1C007EA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall imp_WdfCmResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  return FxCmResourceListInsertDescriptor(DriverGlobals, List, Descriptor, 0xFFFFFFFF);
}
