/*
 * XREFs of imp_VfWdfObjectCreate @ 0x1C00B60B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfObjectCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Object)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, void **))WdfVersion.Functions.pfnWdfObjectCreate)(
           DriverGlobals,
           Attributes,
           Object);
}
