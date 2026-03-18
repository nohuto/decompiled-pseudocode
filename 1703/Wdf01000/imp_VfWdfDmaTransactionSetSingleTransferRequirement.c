/*
 * XREFs of imp_VfWdfDmaTransactionSetSingleTransferRequirement @ 0x1C00CE5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 RequireSingleTransfer)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetSingleTransferRequirement(
    DriverGlobals,
    DmaTransaction,
    RequireSingleTransfer);
}
