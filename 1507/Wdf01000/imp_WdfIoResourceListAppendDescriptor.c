/*
 * XREFs of imp_WdfIoResourceListAppendDescriptor @ 0x1C007E8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall imp_WdfIoResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  return FxIoResourceListInsertDescriptor(DriverGlobals, (unsigned __int64)ResourceList, Descriptor, 0xFFFFFFFF);
}
