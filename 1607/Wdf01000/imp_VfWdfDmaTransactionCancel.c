/*
 * XREFs of imp_VfWdfDmaTransactionCancel @ 0x1C00C3CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDmaTransactionCancel(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *))WdfVersion.Functions.pfnWdfDmaTransactionCancel)(
           DriverGlobals,
           DmaTransaction);
}
