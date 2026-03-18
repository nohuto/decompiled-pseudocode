/*
 * XREFs of imp_VfWdfCmResourceListGetDescriptor @ 0x1C00CA1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_VfWdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCmResourceListGetDescriptor(DriverGlobals, List, Index);
}
