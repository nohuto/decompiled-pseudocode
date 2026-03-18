/*
 * XREFs of imp_VfWdfDmaTransactionGetBytesTransferred @ 0x1C00C3D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetBytesTransferred(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetBytesTransferred(DriverGlobals, DmaTransaction);
}
