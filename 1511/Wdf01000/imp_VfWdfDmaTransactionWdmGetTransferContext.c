/*
 * XREFs of imp_VfWdfDmaTransactionWdmGetTransferContext @ 0x1C00B4EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfDmaTransactionWdmGetTransferContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionWdmGetTransferContext(DriverGlobals, DmaTransaction);
}
