/*
 * XREFs of DpiDisableD3Requests @ 0x1C000C490
 * Callers:
 *     DpiGetDxgAdapterSafe @ 0x1C00CD4F8 (DpiGetDxgAdapterSafe.c)
 *     DpiFdoHandleDevicePower @ 0x1C00DFFA0 (DpiFdoHandleDevicePower.c)
 *     DxgkChangeD3RequestsState @ 0x1C00E2FE0 (DxgkChangeD3RequestsState.c)
 *     DpiFdoInvalidateChildWorkItem @ 0x1C01955E0 (DpiFdoInvalidateChildWorkItem.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C019A570 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiLdaHandleQueryDeviceRelations @ 0x1C019D950 (DpiLdaHandleQueryDeviceRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDisableD3Requests(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(result + 3872));
  return result;
}
