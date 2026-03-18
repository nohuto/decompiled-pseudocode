/*
 * XREFs of imp_WdfCmResourceListAppendDescriptor @ 0x1C007E5D0
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
  return FxCmResourceListInsertDescriptor(DriverGlobals, (unsigned __int64)List, Descriptor, 0xFFFFFFFF);
}
