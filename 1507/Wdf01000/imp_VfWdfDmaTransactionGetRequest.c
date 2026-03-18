/*
 * XREFs of imp_VfWdfDmaTransactionGetRequest @ 0x1C00CAD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFREQUEST__ *__fastcall imp_VfWdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetRequest(DriverGlobals, DmaTransaction);
}
