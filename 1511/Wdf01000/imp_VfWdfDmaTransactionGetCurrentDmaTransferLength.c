/*
 * XREFs of imp_VfWdfDmaTransactionGetCurrentDmaTransferLength @ 0x1C00B4D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetCurrentDmaTransferLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetCurrentDmaTransferLength(DriverGlobals, DmaTransaction);
}
