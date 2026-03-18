/*
 * XREFs of imp_VfWdfDmaTransactionDmaCompletedWithLength @ 0x1C00B4D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDmaTransactionDmaCompletedWithLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 TransferredLength,
        int *Status)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, unsigned __int64, int *))WdfVersion.Functions.pfnWdfDmaTransactionDmaCompletedWithLength)(
           DriverGlobals,
           DmaTransaction,
           TransferredLength,
           Status);
}
