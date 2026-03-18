/*
 * XREFs of imp_VfWdfRequestRetrieveOutputWdmMdl @ 0x1C00CCCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestRetrieveOutputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _MDL **Mdl)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, _MDL **))WdfVersion.Functions.pfnWdfRequestRetrieveOutputWdmMdl)(
           DriverGlobals,
           Request,
           Mdl);
}
