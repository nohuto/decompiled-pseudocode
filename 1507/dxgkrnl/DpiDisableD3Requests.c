/*
 * XREFs of DpiDisableD3Requests @ 0x1C0005A88
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00949E0 (DpiGetDxgAdapterSafe.c)
 *     DpiFdoHandleDevicePower @ 0x1C00BC6D0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01681A0 (DpiFdoInvalidateChildWorkItem.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDisableD3Requests(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2680));
}
