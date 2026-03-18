/*
 * XREFs of imp_VfWdfCmResourceListRemoveByDescriptor @ 0x1C00CD280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfCmResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemoveByDescriptor(DriverGlobals, List, Descriptor);
}
