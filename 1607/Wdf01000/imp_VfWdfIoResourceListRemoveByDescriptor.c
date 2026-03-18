/*
 * XREFs of imp_VfWdfIoResourceListRemoveByDescriptor @ 0x1C00C4A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  WdfVersion.Functions.pfnWdfIoResourceListRemoveByDescriptor(DriverGlobals, ResourceList, Descriptor);
}
