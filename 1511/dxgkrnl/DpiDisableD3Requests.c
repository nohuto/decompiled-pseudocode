/*
 * XREFs of DpiDisableD3Requests @ 0x1C000B7BC
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00B9580 (DpiGetDxgAdapterSafe.c)
 *     DpiFdoHandleDevicePower @ 0x1C00CA970 (DpiFdoHandleDevicePower.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C016C8D0 (DpiFdoInvalidateChildWorkItem.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C0173EE0 (DpiLdaHandleQueryDeviceRelations.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDisableD3Requests(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2720));
}
