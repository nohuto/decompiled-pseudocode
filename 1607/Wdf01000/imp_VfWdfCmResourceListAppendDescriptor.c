/*
 * XREFs of imp_VfWdfCmResourceListAppendDescriptor @ 0x1C00C3180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfCmResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCMRESLIST__ *, _CM_PARTIAL_RESOURCE_DESCRIPTOR *))WdfVersion.Functions.pfnWdfCmResourceListAppendDescriptor)(
           DriverGlobals,
           List,
           Descriptor);
}
