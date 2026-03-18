/*
 * XREFs of imp_VfWdfDmaTransactionFreeResources @ 0x1C00C3D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionFreeResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  WdfVersion.Functions.pfnWdfDmaTransactionFreeResources(DriverGlobals, DmaTransaction);
}
