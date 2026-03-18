/*
 * XREFs of imp_VfWdfDmaTransactionStopSystemTransfer @ 0x1C00B4EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionStopSystemTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  WdfVersion.Functions.pfnWdfDmaTransactionStopSystemTransfer(DriverGlobals, DmaTransaction);
}
