/*
 * XREFs of imp_WdfIoResourceListInsertDescriptor @ 0x1C007EA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall imp_WdfIoResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  return FxIoResourceListInsertDescriptor(DriverGlobals, ResourceList, Descriptor, Index);
}
