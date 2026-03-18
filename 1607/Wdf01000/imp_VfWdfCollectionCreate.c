/*
 * XREFs of imp_VfWdfCollectionCreate @ 0x1C00C3200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, WDFCOLLECTION__ **))WdfVersion.Functions.pfnWdfCollectionCreate)(
           DriverGlobals,
           CollectionAttributes,
           Collection);
}
