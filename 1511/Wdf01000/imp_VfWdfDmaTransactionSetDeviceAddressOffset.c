/*
 * XREFs of imp_VfWdfDmaTransactionSetDeviceAddressOffset @ 0x1C00B4E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDmaTransactionSetDeviceAddressOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 Offset)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetDeviceAddressOffset(DriverGlobals, DmaTransaction, Offset);
}
