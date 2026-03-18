/*
 * XREFs of imp_VfWdfCollectionGetLastItem @ 0x1C00C3240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfCollectionGetLastItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetLastItem(DriverGlobals, Collection);
}
