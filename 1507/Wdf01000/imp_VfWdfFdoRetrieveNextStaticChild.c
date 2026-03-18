/*
 * XREFs of imp_VfWdfFdoRetrieveNextStaticChild @ 0x1C00CB1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfFdoRetrieveNextStaticChild(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Fdo,
        WDFDEVICE__ *PreviousChild,
        __int64 Flags)
{
  return WdfVersion.Functions.pfnWdfFdoRetrieveNextStaticChild(DriverGlobals, Fdo, PreviousChild, Flags);
}
