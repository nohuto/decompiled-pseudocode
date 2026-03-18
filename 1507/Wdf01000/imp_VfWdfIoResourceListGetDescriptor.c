/*
 * XREFs of imp_VfWdfIoResourceListGetDescriptor @ 0x1C00CBA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_IO_RESOURCE_DESCRIPTOR *__fastcall imp_VfWdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfIoResourceListGetDescriptor(DriverGlobals, ResourceList, Index);
}
