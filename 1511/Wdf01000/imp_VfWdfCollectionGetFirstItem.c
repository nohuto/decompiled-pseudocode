/*
 * XREFs of imp_VfWdfCollectionGetFirstItem @ 0x1C00B4220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfCollectionGetFirstItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetFirstItem(DriverGlobals, Collection);
}
