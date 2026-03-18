/*
 * XREFs of imp_VfWdfCollectionRemoveItem @ 0x1C00CD380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfCollectionRemoveItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfCollectionRemoveItem(DriverGlobals, Collection, Index);
}
