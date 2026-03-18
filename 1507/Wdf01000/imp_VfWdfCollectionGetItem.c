/*
 * XREFs of imp_VfWdfCollectionGetItem @ 0x1C00CA230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCollectionGetItem(DriverGlobals, Collection, Index);
}
